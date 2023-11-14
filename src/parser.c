#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 19
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_LT = 1,
  anon_sym_PLUS = 2,
  anon_sym_GT = 3,
  anon_sym_ = 4,
  sym_hexadecimal = 5,
  sym_number = 6,
  sym_byte = 7,
  sym_instruction = 8,
  sym_bad_instruction = 9,
  sym_code_identifier = 10,
  sym_source = 11,
  sym__line = 12,
  sym_code_location = 13,
  sym_machine_code_bytes = 14,
  aux_sym_source_repeat1 = 15,
  aux_sym_machine_code_bytes_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [anon_sym_] = " ",
  [sym_hexadecimal] = "address",
  [sym_number] = "number",
  [sym_byte] = "byte",
  [sym_instruction] = "instruction",
  [sym_bad_instruction] = "bad_instruction",
  [sym_code_identifier] = "identifier",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_code_location] = "code_location",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_] = anon_sym_,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_number] = sym_number,
  [sym_byte] = sym_byte,
  [sym_instruction] = sym_instruction,
  [sym_bad_instruction] = sym_bad_instruction,
  [sym_code_identifier] = sym_code_identifier,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_code_location] = sym_code_location,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_number] = {
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
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '(') ADVANCE(5);
      if (lookahead == '+') ADVANCE(14);
      if (lookahead == '0') ADVANCE(18);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '>') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(20);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(29);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == 'b') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 8:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '0') ADVANCE(7);
      if (lookahead == '<') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(9);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(22);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '(') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ')') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'b') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'd') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_bad_instruction);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_bad_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#') ADVANCE(28);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 1},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 0},
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
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_bad_instruction] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(14),
    [sym__line] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_hexadecimal] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_LT,
    ACTIONS(9), 1,
      sym_byte,
    STATE(9), 2,
      sym_code_location,
      sym_machine_code_bytes,
  [11] = 3,
    ACTIONS(5), 1,
      sym_hexadecimal,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym__line,
      aux_sym_source_repeat1,
  [22] = 3,
    ACTIONS(13), 1,
      anon_sym_,
    STATE(6), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(15), 2,
      sym_instruction,
      sym_bad_instruction,
  [33] = 3,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_hexadecimal,
    STATE(5), 2,
      sym__line,
      aux_sym_source_repeat1,
  [44] = 3,
    ACTIONS(13), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(22), 2,
      sym_instruction,
      sym_bad_instruction,
  [55] = 3,
    ACTIONS(24), 1,
      anon_sym_,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(27), 2,
      sym_instruction,
      sym_bad_instruction,
  [66] = 1,
    ACTIONS(27), 3,
      anon_sym_,
      sym_instruction,
      sym_bad_instruction,
  [72] = 1,
    ACTIONS(29), 2,
      sym_instruction,
      sym_bad_instruction,
  [77] = 2,
    ACTIONS(31), 1,
      anon_sym_PLUS,
    ACTIONS(33), 1,
      anon_sym_GT,
  [84] = 1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_hexadecimal,
  [89] = 1,
    ACTIONS(37), 2,
      sym_instruction,
      sym_bad_instruction,
  [94] = 1,
    ACTIONS(39), 2,
      sym_instruction,
      sym_bad_instruction,
  [99] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [103] = 1,
    ACTIONS(43), 1,
      sym_code_identifier,
  [107] = 1,
    ACTIONS(45), 1,
      sym_byte,
  [111] = 1,
    ACTIONS(47), 1,
      sym_number,
  [115] = 1,
    ACTIONS(49), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 72,
  [SMALL_STATE(10)] = 77,
  [SMALL_STATE(11)] = 84,
  [SMALL_STATE(12)] = 89,
  [SMALL_STATE(13)] = 94,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 107,
  [SMALL_STATE(17)] = 111,
  [SMALL_STATE(18)] = 115,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(16),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 3),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [41] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
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
