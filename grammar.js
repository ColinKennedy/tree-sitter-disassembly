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


module.exports = grammar(
    {
        name: "disassembly",

        externals: $ => [
            $.code_identifier,
            $.instruction,
            $._error_sentinel,
        ],

        extras: $ => [
            $.comment,
            /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        ],

        rules: {
            source: $ => repeat($._line),

            _line: $ => seq(
                alias($.hexadecimal, $.address),
                choice(
                    seq(choice($.code_location, $.machine_code_bytes), $._instruction),
                    $._instruction,
                ),
                $._new_line,
            ),

            code_location: $ => seq(
                "<",
                alias($.code_identifier, $.identifier),
                optional(seq("+", $.integer)),
                ">",
            ),

            machine_code_bytes: $ => repeat1($.byte),
            hexadecimal: $ => /0[xh][0-9a-fA-F]+/,
            integer: $ => /[0-9]+/,
            byte: $ => /[0-9a-fA-F]{2}/,

            _instruction: $ => choice($.bad_instruction, $.instruction),
            bad_instruction: $ => "(bad)",
            _new_line: $ => "\n",

            comment: $ => choice(
                seq("#", $.hexadecimal, /[^\n]*/),  // Actual Disassembly comment
                seq("#", choice(seq("^", $._word), seq("<-", $._word))),  // Tree-sitter unittest comment
            ),
            _word: $ => /[a-zA-Z0-9\.]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
