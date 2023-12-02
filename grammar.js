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
            $.memory_dump,
            $._error_sentinel,
        ],

        extras: $ => [
            $.comment,
            /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        ],

        rules: {
            source: $ => repeat($.source_location),

            source_location: $ => seq(
                alias($.hexadecimal, $.address),
                optional(":"),
                choice(
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
            byte: _ => /[0-9a-fA-F]{8}|[0-9a-fA-F]{4}|[0-9a-fA-F]{2}/,

            _line_with_full_data: $ => seq(
                choice($.code_location, $.machine_code_bytes),
                choice($.memory_dump, $.bad_instruction, $.instruction),
                optional(alias($._annotated_comment, $.comment))
            ),
            _line_with_missing_data: $ => choice($.bad_instruction, $.instruction),

            bad_instruction: _ => "(bad)",
            _new_line: _ => "\n",

            _annotated_comment: $ => choice(
                seq(
                    choice("#", ";"),
                    repeat(
                        choice(
                            $.hexadecimal,
                            $.integer,
                            $.code_location,
                            $._word,
                            $._arm_address_comment,
                        )
                    ),
                ),
            ),
            _arm_address_comment: $ => seq(
                "(",
                optional(seq(alias(/[^\d,][^,]+/, $.instruction), ",")),
                $.hexadecimal,
                $.code_location,
                ")"
            ),

            comment: _ => seq(choice("#", ";"), /.*/),  // Tree-sitter unittest comment
            _word: _ => /[a-zA-Z0-9\.]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
