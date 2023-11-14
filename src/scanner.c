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

#include <stdio.h>
#include <wctype.h>

enum TokenType {
    CODE_IDENTIFIER,
};


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


static bool scan_code_identifier(TSLexer *lexer) {
    bool has_hexadecimal_data = false;
    bool has_text = false;
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

        switch (lexer->lookahead) {
            case '+':
                // We might have reached the end. Or it could be some kind of
                // C++ operator+() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                possibly_in_next_hexadecimal_token = true;

                break;
            case '>':
                if (!has_hexadecimal_data && !possibly_in_next_hexadecimal_token) {
                    // We might have reached the end. Or it could be some kind of
                    // C++ operator>>() signature. Not sure which, just yet
                    //
                    lexer->mark_end(lexer);
                }

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
    if (valid_symbols[CODE_IDENTIFIER]) {
        return scan_code_identifier(lexer);
    }

    return false;
}

unsigned tree_sitter_disassembly_external_scanner_serialize(void *payload, char *buffer) { return 0; }
