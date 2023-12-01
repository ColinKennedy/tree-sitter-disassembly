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
            $.raw_data,
            $._whitespace_no_newline,
            $._error_sentinel,
        ],

        rules: {
            source: $ => repeat($._line),

            _line: $ => choice(
                $.source_location,
                "...",
            ),

            source_location: $ => seq(
                $.address,
                optional(":"),
                choice($.code_location, $.machine_code_bytes),
                choice(
                    $._whitespace_no_newline,
                    $.raw_data,
                    seq(
                        /\s*/,
                        choice(
                            $._instruction_and_comment,
                            $._instruction_and_location,
                            $.bad_instruction,
                        ),
                    )
                ),
            ),

            _instruction_and_comment: $ => seq(
                $.instruction,
                $.comment,
            ),
            _instruction_and_location: $ => prec.left(
                2,
                seq(
                    $.instruction,
                    optional($.code_location),
                    optional($.file_offset),
                )
            ),
            instruction: _ => /([^\n#;<]|#-?\d+)+/,
            bad_instruction: _ => "(bad)",

            comment: $ => seq(
                choice("#", ';'),
                choice(
                    $._comment_with_address,
                    $._comment_with_label,
                ),
            ),

            _comment_with_label: $ => choice(
                seq(
                  '(',
                  optional(seq(alias(/[^\d,][^,]+/, $.instruction), ',')),
                  $.address,
                  $.code_location,
                  optional($.file_offset),
                  ')'
                ),
                seq($.address, $.code_location, optional($.file_offset)),
            ),
            _comment_with_address: $ => $.hexadecimal,

            code_location: $ => seq(
                "<",
                alias($.code_identifier, $.identifier),
                optional(seq("+", choice($.hexadecimal, $.integer))),
                ">",
            ),

            label_line: $ => seq(alias($._label_identifier, $.label), ":"),

            hexadecimal: _ => /0[xh][0-9a-fA-F]+/,
            integer: _ => /[0-9a-fA-F]+/,
            byte: _ => /[0-9a-fA-F]{2}|[0-9a-fA-F]{4}|[0-9a-fA-F]{8}/,
            machine_code_bytes: $ => space_separated1($.byte),

            address: _ => /(0x)?[0-9a-fA-F]+/,
            file_offset: $ => seq("(", "File", "Offset:", $.hexadecimal, ")"),
            _label_identifier: _ => /[A-Za-z.@_][A-Za-z0-9.@_$-\(\)]*/,  // Test this, later
            identifier: _ => /[^\n]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
