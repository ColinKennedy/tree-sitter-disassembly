// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-disassembly <https://github.com/ColinKennedy/tree-sitter-disassembly>.
//
// tree-sitter-disassembly is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-disassembly is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-disassembly, see <http://www.gnu.org/licenses/>.

#include "tree_sitter/parser.h"

#include <wctype.h>

enum TokenType {
    CODE_IDENTIFIER,
    ASSEMBLY_INSTRUCTION,
    MEMORY_DUMP,
    ERROR_SENTINEL,
};


static bool is_hexadecimal_character(char character) {
    switch (character) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
            return true;
        default:
            return false;
    }
}

static bool is_number_character(char character) {
    switch (character) {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            return true;
        default:
            return false;
    }
}


/// \brief Check if the lexer is looking at an Assembly instruction.
///
/// The main variants to look out for are
///
/// 0x400601 <__libc_csu_init+33>   sub    %r12,%rbp  # 0x1234 <more_stuff>
/// 0x400601 11 22 33 44            sub    %r12,%rbp  # 0x1234 <more_stuff>
/// 0x400601                        nop
///
/// The basic logic of this function is
///
/// - If the first non-whitespace character is '<', we're not an an Assembly instruction.
/// - If "(bad)" is found, the Assembly instruction is malformed.
///     - There's another existing grammar rule for this so we return `false`
///     so that rule can be used, instead
/// - Ensure we aren't accidentally looking at machine bytes like `11 22 33 44`.
///   If so, return `false`.
/// - If '#' is found, the Assembly instruction has ended.
///
/// \return If an Assembly instruction was found, return `true`.
///
static bool scan_assembly_instruction(TSLexer *lexer) {
    bool has_text = false;
    bool is_maybe_bad_instruction = true;
    bool is_maybe_a_byte = true;
    unsigned int hexadecimal_count = 0;

    unsigned int offset_counter = 0;
    char bad_instruction[] = "(bad)";
    unsigned int const size = (sizeof(bad_instruction) / sizeof(char) - 1);

    if (lexer->lookahead == ':')
    {
        return false;
    }

    // printf("\n\nstarting assembly check\n\n");

    while (true) {
        // printf("%c", lexer->lookahead);

        if (lexer->lookahead == '.')
        {
            // printf("\n\nfound memory. Parsing\n\n");

            while (true) {
                // printf("%c", lexer->lookahead);
                lexer->advance(lexer, false);

                if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
                    // The line ended. Stop scanning
                    // printf("\n\nreached end\n\n");
                    lexer->mark_end(lexer);
                    lexer->result_symbol = MEMORY_DUMP;

                    return true;
                }
            }
        }

        if (!has_text && lexer->lookahead == '<') {
            // We're actually inside of a code location or something other than
            // an Assembly instruction. Back out
            //
            return false;
        }

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            // The line ended. Stop scanning
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;

            return has_text;
        }

        if (lexer->lookahead == '#') {
            // The start of a comment was found. Stop scanning
            lexer->mark_end(lexer);
            lexer->result_symbol = ASSEMBLY_INSTRUCTION;

            return has_text;
        }

        bool is_whitespace = iswspace(lexer->lookahead);

        if (!is_whitespace) {
            if (is_maybe_bad_instruction && (lexer->lookahead == bad_instruction[offset_counter])) {
                if ((offset_counter + 1) == size) {
                    // We found "(bad)", which is not a valid assembly instruction
                    return false;
                }

                ++offset_counter;
            } else {
                is_maybe_bad_instruction = false;
            }

            if (hexadecimal_count >= 2) {
                // When this happens, we've encountered an Assembly instruction
                // that looked like it might have been a hexadecimal. For
                // example the `ad` in `add` could be a hexadecimal but isn't
                //
                // If we reach this part of the code, now we know for sure that
                // it is not a hexadecimal.
                //
                is_maybe_a_byte = false;
            } else if (is_maybe_a_byte) {
                if (is_hexadecimal_character(lexer->lookahead)) {
                    ++hexadecimal_count;
                } else {
                    hexadecimal_count = 0;
                    is_maybe_a_byte = false;
                }
            }

            has_text = true;
        } else if (is_maybe_a_byte && hexadecimal_count >= 2) {
            // Found a byte. Stop searching
            return false;
        }

        lexer->advance(lexer, false);
    }

    return false;
}

/// \brief Check for a memory address by-name.
///
/// Disassembly tends to write lines like this
///
/// 0x400601 <__libc_csu_init+33>   sub    %r12,%rbp
///
/// Where `<__libc_csu_init+33>` is a memory location + an additional byte offset.
///
/// \return If the address is valid, return `true`.
///
static bool scan_code_identifier(TSLexer *lexer) {
    bool has_hexadecimal_data = false;
    bool has_text = false;
    bool is_maybe_at_end = false;
    bool possibly_in_next_hexadecimal_token = false;

    while (true) {
        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            lexer->result_symbol = CODE_IDENTIFIER;

            return has_text;
        }

        if (possibly_in_next_hexadecimal_token) {
            if (is_number_character(lexer->lookahead)) {
                has_hexadecimal_data = true;
            } else {
                // Reached the end of the (possibly) hexadecimal data
                possibly_in_next_hexadecimal_token = false;
            }
        }

        if (is_maybe_at_end && lexer->lookahead != '\n' && iswspace(lexer->lookahead)) {
            // We assume that, following a > or + character, there cannot be whitespace.
            // If there is whitespace then that means we've reached the end of the match
            // and it's time to exit
            //
            lexer->result_symbol = CODE_IDENTIFIER;

            return has_text;
        }

        switch (lexer->lookahead) {
            case '#':
                // We've reached the end of the instruction and the start of a comment
                lexer->result_symbol = CODE_IDENTIFIER;

                return has_text;
            case '+':
                // We might have reached the end. Or it could be some kind of
                // C++ operator+() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                possibly_in_next_hexadecimal_token = true;
                is_maybe_at_end = true;

                break;
            case '>':
                if (!has_hexadecimal_data && !possibly_in_next_hexadecimal_token) {
                    // We might have reached the end. Or it could be some kind of
                    // C++ operator>>() signature. Not sure which, just yet
                    //
                    lexer->mark_end(lexer);
                }

                is_maybe_at_end = true;

                break;
            default:
                is_maybe_at_end = false;

                break;
        }

        lexer->advance(lexer, false);
        has_text = true;
    }

    return has_text;
}

void *tree_sitter_disassembly_external_scanner_create() { return NULL; }

void tree_sitter_disassembly_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void tree_sitter_disassembly_external_scanner_destroy(void *payload) {}

bool tree_sitter_disassembly_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
    }

    if (valid_symbols[CODE_IDENTIFIER]) {
        return scan_code_identifier(lexer);
    }

    if (valid_symbols[ASSEMBLY_INSTRUCTION]) {
        return scan_assembly_instruction(lexer);
    }

    return false;
}

unsigned tree_sitter_disassembly_external_scanner_serialize(void *payload, char *buffer) { return 0; }
