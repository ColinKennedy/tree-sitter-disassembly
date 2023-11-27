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

#include <ctype.h>
#include <stdio.h>
#include <wctype.h>

enum TokenType {
    CODE_IDENTIFIER,
    RAW_DATA,
    WHITESPACE_NO_NEWLINE,
    ERROR_SENTINEL,
};

static inline void advance(TSLexer *lexer) { lexer->advance(lexer, false); }

static inline void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

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
        case 'h':
        case 'x':
            return true;
        default:
            return false;
    }
}

static bool scan_code_identifier(TSLexer *lexer) {
    bool has_text = false;
    unsigned int offset_counter = -1;
    bool has_hexadecimal_data = false;
    bool possibly_in_next_hexadecimal_token = false;
    bool possibly_in_next_file_offset_token = false;
    char next_token_text[] = "(FileOffset:";
    unsigned int const size = (sizeof(next_token_text) / sizeof(char) - 1);

    while (true) {
        advance(lexer);

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            lexer->result_symbol = CODE_IDENTIFIER;

            return true;
        }

        if (lexer->lookahead != '\n' && iswspace(lexer->lookahead)) {
            // We could be in the token or just having exited it. Just keep trying
            continue;
        }

        if (possibly_in_next_hexadecimal_token) {
            if (is_hexadecimal_character(lexer->lookahead)) {
                has_hexadecimal_data = true;
            } else {
                // Reached the end of the (possibly) hexadecimal data
                possibly_in_next_hexadecimal_token = false;
            }
        }

        has_text = true;

        if (!possibly_in_next_file_offset_token) {
            if (lexer->lookahead == '(') {
                possibly_in_next_file_offset_token = true;
                ++offset_counter;

                continue;
            }
        } else if (lexer->lookahead == next_token_text[offset_counter]) {
            if (offset_counter + 1 >= size) {
                lexer->result_symbol = CODE_IDENTIFIER;

                return true;
            }

            ++offset_counter;

            continue;
        } else {
            possibly_in_next_file_offset_token = false;

            continue;
        }

        switch (lexer->lookahead) {
            case '\n':
                // The end of the token wasn't found so it cannot be a code identifier
                return false;
            case '>':
                if (!has_hexadecimal_data && !possibly_in_next_hexadecimal_token) {
                    // We might have reached the end. Or it could be some kind of
                    // C++ operator>>() signature. Not sure which, just yet
                    //
                    lexer->mark_end(lexer);
                }

                break;
            case '+':
                // We might have reached the end. Or it could be some kind of
                // C++ operator+() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                possibly_in_next_hexadecimal_token = true;

                break;
        }
    }

    return has_text;
}

static bool scan_whitespace_no_newline(TSLexer *lexer) {
    // TODO: This line may not actually be needed in practice. Consider removing
    //
    // This line is special. It means "don't allow lexer->advance to change the
    // width of the found token automatically anymore". From here on out, because
    // mark_end was called, we have control over the size of a matched token.
    //
    lexer->mark_end(lexer);
    lexer->result_symbol = WHITESPACE_NO_NEWLINE;

    bool has_text = false;

    while (true) {
        if (lexer->eof(lexer)) {
            return has_text;
        }

        switch (lexer->lookahead) {
            case '\n':
                return true;
            case ' ':
            case '\t':
                has_text = true;
                lexer->mark_end(lexer);

                break;
            default:
                return false;
        };

        advance(lexer);
    }
}

void *tree_sitter_disassembly_external_scanner_create() { return NULL; }

void tree_sitter_disassembly_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

void tree_sitter_disassembly_external_scanner_destroy(void *payload) {}

bool tree_sitter_disassembly_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
    if (valid_symbols[ERROR_SENTINEL]) {
        return false;
    }

    bool advanced_once = false;

    if (valid_symbols[RAW_DATA]) {
        while (iswspace(lexer->lookahead) && lexer->lookahead != '\n') {
            skip(lexer);
        }

        bool found_dot = false;
        uint8_t raw_data_count = 0;

        // consume till newline, require at least one dot and require it to occur within the first 4 characters, and
        // don't parse any 0x's.
        while (lexer->lookahead != '\n') {
            if (lexer->lookahead == '.' && raw_data_count < 4) {
                found_dot = true;
            }

            if (lexer->lookahead == '0') {
                advance(lexer);
                advanced_once = true;
                raw_data_count++;
                if (lexer->lookahead == 'x') {
                    return false;
                }
            }

            // disallow two alphanumerics in a row
            if (isalnum(lexer->lookahead)) {
                advance(lexer);
                advanced_once = true;
                raw_data_count++;
                if (isalnum(lexer->lookahead)) {
                    return false;
                }
            }

            advance(lexer);
            if (!iswspace(lexer->lookahead)) {
                advanced_once = true;
            }
            raw_data_count++;
        }

        if (lexer->lookahead == '\n' && found_dot && raw_data_count > 1) {
            lexer->result_symbol = RAW_DATA;
            return true;
        }

        if (raw_data_count > 4 && !found_dot) {
            return false;
        }
    }

    if (valid_symbols[WHITESPACE_NO_NEWLINE] && !advanced_once) {
        return scan_whitespace_no_newline(lexer);
    }

    if (valid_symbols[CODE_IDENTIFIER]) {
        return scan_code_identifier(lexer);
    }

    return false;
}

unsigned tree_sitter_disassembly_external_scanner_serialize(void *payload, char *buffer) { return 0; }
