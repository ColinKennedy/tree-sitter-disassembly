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


static bool scan_code_identifier(TSLexer *lexer) {
    bool has_text = false;

    while (true) {
        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            lexer->result_symbol = CODE_IDENTIFIER;

            return has_text;
        }

        switch (lexer->lookahead) {
            case '+':
            case '>':
                lexer->mark_end(lexer);

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
