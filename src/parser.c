#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 1
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON = 1,
  anon_sym_LT = 2,
  anon_sym_PLUS = 3,
  anon_sym_GT = 4,
  sym_integer = 5,
  sym_hexadecimal = 6,
  sym_byte = 7,
  sym_bad_instruction = 8,
  sym__new_line = 9,
  anon_sym_POUND = 10,
  aux_sym_comment_token1 = 11,
  sym__word = 12,
  sym_code_identifier = 13,
  sym_instruction = 14,
  sym_memory_dump = 15,
  sym__error_sentinel = 16,
  sym_source = 17,
  sym__line = 18,
  sym_code_location = 19,
  sym_machine_code_bytes = 20,
  sym__line_with_full_data = 21,
  sym__line_with_missing_data = 22,
  sym__annotated_comment = 23,
  sym_comment = 24,
  aux_sym_source_repeat1 = 25,
  aux_sym_machine_code_bytes_repeat1 = 26,
  aux_sym__annotated_comment_repeat1 = 27,
  alias_sym_address = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_integer] = "integer",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [sym_bad_instruction] = "bad_instruction",
  [sym__new_line] = "_new_line",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym__word] = "_word",
  [sym_code_identifier] = "identifier",
  [sym_instruction] = "instruction",
  [sym_memory_dump] = "memory_dump",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source] = "source",
  [sym_source_location] = "source_location",
  [sym_code_location] = "code_location",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym__line_with_full_data] = "_line_with_full_data",
  [sym__line_with_missing_data] = "_line_with_missing_data",
  [sym__annotated_comment] = "comment",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
  [aux_sym__annotated_comment_repeat1] = "_annotated_comment_repeat1",
  [alias_sym_address] = "address",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_integer] = sym_integer,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [sym_bad_instruction] = sym_bad_instruction,
  [sym__new_line] = sym__new_line,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym__word] = sym__word,
  [sym_code_identifier] = sym_code_identifier,
  [sym_instruction] = sym_instruction,
  [sym_memory_dump] = sym_memory_dump,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source] = sym_source,
  [sym_source_location] = sym_source_location,
  [sym_code_location] = sym_code_location,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym__line_with_full_data] = sym__line_with_full_data,
  [sym__line_with_missing_data] = sym__line_with_missing_data,
  [sym__annotated_comment] = sym_comment,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
  [aux_sym__annotated_comment_repeat1] = aux_sym__annotated_comment_repeat1,
  [alias_sym_address] = alias_sym_address,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__new_line] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__word] = {
    .visible = false,
    .named = true,
  },
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_memory_dump] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym_code_location] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_code_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym__line_with_full_data] = {
    .visible = false,
    .named = true,
  },
  [sym__line_with_missing_data] = {
    .visible = false,
    .named = true,
  },
  [sym__annotated_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__annotated_comment_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_address] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_address,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 9,
  [17] = 10,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 18,
  [25] = 22,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 29,
  [35] = 33,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == '+') ADVANCE(24);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\\') SKIP(17)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(8)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(35);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '0') ADVANCE(26);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(6)
      END_STATE();
    case 8:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ':') ADVANCE(22);
      if (lookahead == '<') ADVANCE(23);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(15);
      END_STATE();
    case 9:
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == ')') ADVANCE(34);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(10);
      END_STATE();
    case 14:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 15:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 16:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 17:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(16)
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(20)
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') SKIP(20)
      if (lookahead == '\r') SKIP(18)
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '#') ADVANCE(36);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '\\') SKIP(19)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(20)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(29);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_bad_instruction);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__new_line);
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__word);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(31);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__word);
      if (lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 20},
  [2] = {.lex_state = 8, .external_lex_state = 2},
  [3] = {.lex_state = 8, .external_lex_state = 2},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 8, .external_lex_state = 2},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 8, .external_lex_state = 2},
  [12] = {.lex_state = 8, .external_lex_state = 2},
  [13] = {.lex_state = 0, .external_lex_state = 2},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 20},
  [16] = {.lex_state = 0, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 20},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 9},
  [23] = {.lex_state = 20},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 9},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 39},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 5},
  [33] = {.lex_state = 0, .external_lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 3},
  [36] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_code_identifier = 0,
  ts_external_token_instruction = 1,
  ts_external_token_memory_dump = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token_instruction] = sym_instruction,
  [ts_external_token_memory_dump] = sym_memory_dump,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token_instruction] = true,
    [ts_external_token_memory_dump] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_instruction] = true,
    [ts_external_token_memory_dump] = true,
  },
  [3] = {
    [ts_external_token_code_identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_bad_instruction] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym__word] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [sym_memory_dump] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(31),
    [sym__line] = STATE(23),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(14),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_hexadecimal] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_COLON,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_byte,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(13), 2,
      sym_code_location,
      sym_machine_code_bytes,
    STATE(32), 2,
      sym__line_with_full_data,
      sym__line_with_missing_data,
    ACTIONS(15), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [32] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(13), 1,
      sym_byte,
    STATE(3), 1,
      sym_comment,
    STATE(11), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(13), 2,
      sym_code_location,
      sym_machine_code_bytes,
    STATE(26), 2,
      sym__line_with_full_data,
      sym__line_with_missing_data,
    ACTIONS(15), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [61] = 6,
    ACTIONS(17), 1,
      anon_sym_LT,
    ACTIONS(23), 1,
      sym__new_line,
    ACTIONS(25), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_code_location,
    STATE(4), 2,
      sym_comment,
      aux_sym__annotated_comment_repeat1,
    ACTIONS(20), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [83] = 7,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(31), 1,
      sym__new_line,
    STATE(4), 1,
      aux_sym__annotated_comment_repeat1,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      sym_code_location,
    ACTIONS(29), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [107] = 7,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(27), 1,
      anon_sym_LT,
    ACTIONS(33), 1,
      sym__new_line,
    STATE(5), 1,
      aux_sym__annotated_comment_repeat1,
    STATE(6), 1,
      sym_comment,
    STATE(7), 1,
      sym_code_location,
    ACTIONS(29), 3,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [131] = 4,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      sym__new_line,
    STATE(7), 1,
      sym_comment,
    ACTIONS(35), 4,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [147] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(39), 1,
      sym_byte,
    STATE(8), 2,
      sym_comment,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(42), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [163] = 4,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(46), 1,
      sym__new_line,
    STATE(9), 1,
      sym_comment,
    ACTIONS(44), 4,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [179] = 4,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(50), 1,
      sym__new_line,
    STATE(10), 1,
      sym_comment,
    ACTIONS(48), 4,
      anon_sym_LT,
      sym_integer,
      sym_hexadecimal,
      sym__word,
  [195] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(13), 1,
      sym_byte,
    STATE(8), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(11), 1,
      sym_comment,
    ACTIONS(52), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [213] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(12), 1,
      sym_comment,
    ACTIONS(54), 4,
      sym_instruction,
      sym_memory_dump,
      sym_byte,
      sym_bad_instruction,
  [226] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    STATE(19), 1,
      sym__line_with_missing_data,
    ACTIONS(56), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [241] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_hexadecimal,
    ACTIONS(58), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      sym_comment,
    STATE(15), 1,
      aux_sym_source_repeat1,
    STATE(23), 1,
      sym__line,
  [260] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      sym_hexadecimal,
    STATE(23), 1,
      sym__line,
    STATE(15), 2,
      sym_comment,
      aux_sym_source_repeat1,
  [277] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(16), 1,
      sym_comment,
    ACTIONS(46), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [289] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(17), 1,
      sym_comment,
    ACTIONS(50), 3,
      sym_instruction,
      sym_memory_dump,
      sym_bad_instruction,
  [301] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      anon_sym_PLUS,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(18), 1,
      sym_comment,
  [314] = 4,
    ACTIONS(69), 1,
      sym__new_line,
    ACTIONS(71), 1,
      anon_sym_POUND,
    STATE(19), 1,
      sym_comment,
    STATE(28), 1,
      sym__annotated_comment,
  [327] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(20), 1,
      sym_comment,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [338] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(21), 1,
      sym_comment,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [349] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(22), 1,
      sym_comment,
    ACTIONS(77), 2,
      sym_integer,
      sym_hexadecimal,
  [360] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(23), 1,
      sym_comment,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [371] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(81), 1,
      anon_sym_PLUS,
    ACTIONS(83), 1,
      anon_sym_GT,
    STATE(24), 1,
      sym_comment,
  [384] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(25), 1,
      sym_comment,
    ACTIONS(85), 2,
      sym_integer,
      sym_hexadecimal,
  [395] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(87), 1,
      sym__new_line,
    STATE(26), 1,
      sym_comment,
  [405] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(89), 1,
      aux_sym_comment_token1,
    STATE(27), 1,
      sym_comment,
  [415] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(91), 1,
      sym__new_line,
    STATE(28), 1,
      sym_comment,
  [425] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(93), 1,
      anon_sym_GT,
    STATE(29), 1,
      sym_comment,
  [435] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(95), 1,
      sym__new_line,
    STATE(30), 1,
      sym_comment,
  [445] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(31), 1,
      sym_comment,
  [455] = 3,
    ACTIONS(25), 1,
      anon_sym_POUND,
    ACTIONS(99), 1,
      sym__new_line,
    STATE(32), 1,
      sym_comment,
  [465] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(101), 1,
      sym_code_identifier,
    STATE(33), 1,
      sym_comment,
  [475] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(103), 1,
      anon_sym_GT,
    STATE(34), 1,
      sym_comment,
  [485] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(105), 1,
      sym_code_identifier,
    STATE(35), 1,
      sym_comment,
  [495] = 1,
    ACTIONS(107), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 61,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 107,
  [SMALL_STATE(7)] = 131,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 163,
  [SMALL_STATE(10)] = 179,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 226,
  [SMALL_STATE(14)] = 241,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 277,
  [SMALL_STATE(17)] = 289,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 314,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 384,
  [SMALL_STATE(26)] = 395,
  [SMALL_STATE(27)] = 405,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 445,
  [SMALL_STATE(32)] = 455,
  [SMALL_STATE(33)] = 465,
  [SMALL_STATE(34)] = 475,
  [SMALL_STATE(35)] = 485,
  [SMALL_STATE(36)] = 495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 2), SHIFT_REPEAT(35),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 2), SHIFT_REPEAT(7),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotated_comment_repeat1, 2),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotated_comment, 2),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__annotated_comment, 1),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__annotated_comment_repeat1, 1),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__annotated_comment_repeat1, 1),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(12),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_full_data, 2),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3, .production_id = 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4, .production_id = 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_full_data, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line_with_missing_data, 1),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_disassembly_external_scanner_create(void);
void tree_sitter_disassembly_external_scanner_destroy(void *);
bool tree_sitter_disassembly_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_disassembly_external_scanner_serialize(void *, char *);
void tree_sitter_disassembly_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_disassembly(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_disassembly_external_scanner_create,
      tree_sitter_disassembly_external_scanner_destroy,
      tree_sitter_disassembly_external_scanner_scan,
      tree_sitter_disassembly_external_scanner_serialize,
      tree_sitter_disassembly_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
