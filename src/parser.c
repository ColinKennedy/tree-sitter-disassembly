#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 1
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  aux_sym__line_token1 = 1,
  anon_sym_LT = 2,
  anon_sym_PLUS = 3,
  anon_sym_GT = 4,
  anon_sym_ = 5,
  sym_hexadecimal = 6,
  sym_integer = 7,
  sym_byte = 8,
  sym_instruction = 9,
  sym_bad_instruction = 10,
  anon_sym_POUND = 11,
  aux_sym_comment_token1 = 12,
  sym_code_identifier = 13,
  sym_source = 14,
  sym__line = 15,
  sym_code_location = 16,
  sym_machine_code_bytes = 17,
  sym__instruction = 18,
  sym_comment = 19,
  aux_sym_source_repeat1 = 20,
  aux_sym_machine_code_bytes_repeat1 = 21,
  alias_sym_address = 22,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_] = " ",
  [sym_hexadecimal] = "hexadecimal",
  [sym_integer] = "integer",
  [sym_byte] = "byte",
  [sym_instruction] = "instruction",
  [sym_bad_instruction] = "bad_instruction",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_code_identifier] = "identifier",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_code_location] = "code_location",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym__instruction] = "_instruction",
  [sym_comment] = "comment",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
  [alias_sym_address] = "address",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_] = anon_sym_,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_integer] = sym_integer,
  [sym_byte] = sym_byte,
  [sym_instruction] = sym_instruction,
  [sym_bad_instruction] = sym_bad_instruction,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_code_identifier] = sym_code_identifier,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_code_location] = sym_code_location,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym__instruction] = sym__instruction,
  [sym_comment] = sym_comment,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
  [alias_sym_address] = alias_sym_address,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__line_token1] = {
    .visible = false,
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_bad_instruction] = {
    .visible = true,
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
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
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
  [sym__instruction] = {
    .visible = false,
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
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '0') ADVANCE(36);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '>') ADVANCE(32);
      if (lookahead == '\\') SKIP(23)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(11)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(28);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 11:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 12:
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == ')') ADVANCE(42);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(14);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 21:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(26)
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') SKIP(26)
      if (lookahead == '\r') SKIP(24)
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(43);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == '0') ADVANCE(17);
      if (lookahead == '<') ADVANCE(30);
      if (lookahead == '\\') SKIP(25)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(26)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(21);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym__line_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(28);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_bad_instruction);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\r') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '0') ADVANCE(48);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '#') ADVANCE(44);
      if (lookahead == '\\') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(50);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 26},
  [3] = {.lex_state = 26},
  [4] = {.lex_state = 26},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 26},
  [11] = {.lex_state = 26},
  [12] = {.lex_state = 46},
  [13] = {.lex_state = 26},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 26},
  [16] = {.lex_state = 0, .external_lex_state = 1},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 47},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 11},
  [25] = {(TSStateId)(-1)},
  [26] = {(TSStateId)(-1)},
};

enum {
  ts_external_token_code_identifier = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [sym_bad_instruction] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(3),
    [sym_code_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(19),
    [sym__line] = STATE(13),
    [sym_comment] = STATE(1),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_hexadecimal] = ACTIONS(7),
    [anon_sym_POUND] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(9), 1,
      anon_sym_LT,
    ACTIONS(11), 1,
      sym_byte,
    ACTIONS(13), 1,
      sym_instruction,
    ACTIONS(15), 1,
      sym_bad_instruction,
    STATE(2), 1,
      sym_comment,
    STATE(11), 1,
      sym__instruction,
    STATE(17), 2,
      sym_code_location,
      sym_machine_code_bytes,
  [26] = 6,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(7), 1,
      sym_hexadecimal,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(3), 1,
      sym_comment,
    STATE(4), 1,
      aux_sym_source_repeat1,
    STATE(13), 1,
      sym__line,
  [45] = 5,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      sym_hexadecimal,
    STATE(13), 1,
      sym__line,
    STATE(4), 2,
      sym_comment,
      aux_sym_source_repeat1,
  [62] = 5,
    ACTIONS(24), 1,
      aux_sym__line_token1,
    ACTIONS(26), 1,
      anon_sym_,
    ACTIONS(28), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_comment,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
  [78] = 5,
    ACTIONS(26), 1,
      anon_sym_,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(30), 1,
      aux_sym__line_token1,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(6), 1,
      sym_comment,
  [94] = 4,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(32), 1,
      aux_sym__line_token1,
    ACTIONS(34), 1,
      anon_sym_,
    STATE(7), 2,
      sym_comment,
      aux_sym_machine_code_bytes_repeat1,
  [108] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(8), 1,
      sym_comment,
    STATE(15), 1,
      sym__instruction,
    ACTIONS(15), 2,
      sym_instruction,
      sym_bad_instruction,
  [122] = 4,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_GT,
    STATE(9), 1,
      sym_comment,
  [135] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(10), 1,
      sym_comment,
    ACTIONS(41), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [146] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(11), 1,
      sym_comment,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [157] = 4,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(45), 1,
      sym_hexadecimal,
    ACTIONS(47), 1,
      aux_sym_comment_token1,
    STATE(12), 1,
      sym_comment,
  [170] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(13), 1,
      sym_comment,
    ACTIONS(49), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [181] = 3,
    ACTIONS(28), 1,
      anon_sym_POUND,
    STATE(14), 1,
      sym_comment,
    ACTIONS(32), 2,
      aux_sym__line_token1,
      anon_sym_,
  [192] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    STATE(15), 1,
      sym_comment,
    ACTIONS(51), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [203] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(53), 1,
      sym_code_identifier,
    STATE(16), 1,
      sym_comment,
  [213] = 3,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(55), 1,
      aux_sym__line_token1,
    STATE(17), 1,
      sym_comment,
  [223] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(57), 1,
      sym_byte,
    STATE(18), 1,
      sym_comment,
  [233] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    STATE(19), 1,
      sym_comment,
  [243] = 3,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(61), 1,
      aux_sym_comment_token1,
    STATE(20), 1,
      sym_comment,
  [253] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(63), 1,
      sym_integer,
    STATE(21), 1,
      sym_comment,
  [263] = 3,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(65), 1,
      aux_sym__line_token1,
    STATE(22), 1,
      sym_comment,
  [273] = 3,
    ACTIONS(3), 1,
      anon_sym_POUND,
    ACTIONS(67), 1,
      anon_sym_GT,
    STATE(23), 1,
      sym_comment,
  [283] = 3,
    ACTIONS(28), 1,
      anon_sym_POUND,
    ACTIONS(69), 1,
      aux_sym__line_token1,
    STATE(24), 1,
      sym_comment,
  [293] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [297] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 94,
  [SMALL_STATE(8)] = 108,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 146,
  [SMALL_STATE(12)] = 157,
  [SMALL_STATE(13)] = 170,
  [SMALL_STATE(14)] = 181,
  [SMALL_STATE(15)] = 192,
  [SMALL_STATE(16)] = 203,
  [SMALL_STATE(17)] = 213,
  [SMALL_STATE(18)] = 223,
  [SMALL_STATE(19)] = 233,
  [SMALL_STATE(20)] = 243,
  [SMALL_STATE(21)] = 253,
  [SMALL_STATE(22)] = 263,
  [SMALL_STATE(23)] = 273,
  [SMALL_STATE(24)] = 283,
  [SMALL_STATE(25)] = 293,
  [SMALL_STATE(26)] = 297,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2),
  [26] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [28] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [30] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [32] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(18),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction, 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 4, .production_id = 1),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 3),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
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
