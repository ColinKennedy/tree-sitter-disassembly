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
            $.memory,
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
                optional(":"),
                choice(
                    $.memory,
                    $._line_with_full_data,
                    $._line_with_missing_data,
                ),
                $._new_line,
            ),

            code_location: $ => seq(
                "<",
                alias($.code_identifier, $.identifier),
                optional(seq("+", choice($.hexadecimal, $.integer))),
                ">",
            ),

            machine_code_bytes: $ => repeat1($.byte),
            integer: _ => /[0-9]+/,
            hexadecimal: _ => /(0[xh])?[0-9a-fA-F]+/,
            byte: _ => /[0-9a-fA-F]{2}/,

            _line_with_full_data: $ => seq(
                choice($.code_location, $.machine_code_bytes),
                $._line_with_missing_data,
                optional(alias($._annotated_comment, $.comment))
            ),
            _line_with_missing_data: $ => choice($.bad_instruction, $.instruction),

            bad_instruction: _ => "(bad)",
            _new_line: _ => "\n",

            _annotated_comment: $ => choice(
                seq(
                    "#",
                    repeat(choice($.hexadecimal, $.integer, $.code_location, $._word)),
                ),
            ),

            comment: _ => seq("#", /.*/),  // Tree-sitter unittest comment
            _word: _ => /[a-zA-Z0-9\.]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
