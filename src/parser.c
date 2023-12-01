#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 39
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DOT_DOT_DOT = 1,
  anon_sym_COLON = 2,
  aux_sym_source_location_token1 = 3,
  sym_instruction = 4,
  sym_bad_instruction = 5,
  anon_sym_POUND = 6,
  anon_sym_SEMI = 7,
  anon_sym_LPAREN = 8,
  aux_sym__comment_with_label_token1 = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  anon_sym_LT = 12,
  anon_sym_PLUS = 13,
  anon_sym_GT = 14,
  sym_hexadecimal = 15,
  sym_integer = 16,
  sym_byte = 17,
  anon_sym_ = 18,
  sym_address = 19,
  anon_sym_File = 20,
  anon_sym_Offset_COLON = 21,
  sym_code_identifier = 22,
  sym_raw_data = 23,
  sym__whitespace_no_newline = 24,
  sym__error_sentinel = 25,
  sym_source = 26,
  sym__line = 27,
  sym_source_location = 28,
  sym__instruction_and_comment = 29,
  sym__instruction_and_location = 30,
  sym_comment = 31,
  sym__comment_with_label = 32,
  sym__comment_with_address = 33,
  sym_code_location = 34,
  sym_machine_code_bytes = 35,
  sym_file_offset = 36,
  aux_sym_source_repeat1 = 37,
  aux_sym_machine_code_bytes_repeat1 = 38,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COLON] = ":",
  [aux_sym_source_location_token1] = "source_location_token1",
  [sym_instruction] = "instruction",
  [sym_bad_instruction] = "bad_instruction",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [anon_sym_LPAREN] = "(",
  [aux_sym__comment_with_label_token1] = "instruction",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_hexadecimal] = "hexadecimal",
  [sym_integer] = "integer",
  [sym_byte] = "byte",
  [anon_sym_] = " ",
  [sym_address] = "address",
  [anon_sym_File] = "File",
  [anon_sym_Offset_COLON] = "Offset:",
  [sym_code_identifier] = "identifier",
  [sym_raw_data] = "raw_data",
  [sym__whitespace_no_newline] = "_whitespace_no_newline",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_source_location] = "source_location",
  [sym__instruction_and_comment] = "_instruction_and_comment",
  [sym__instruction_and_location] = "_instruction_and_location",
  [sym_comment] = "comment",
  [sym__comment_with_label] = "_comment_with_label",
  [sym__comment_with_address] = "_comment_with_address",
  [sym_code_location] = "code_location",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym_file_offset] = "file_offset",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_source_location_token1] = aux_sym_source_location_token1,
  [sym_instruction] = sym_instruction,
  [sym_bad_instruction] = sym_bad_instruction,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [aux_sym__comment_with_label_token1] = sym_instruction,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_integer] = sym_integer,
  [sym_byte] = sym_byte,
  [anon_sym_] = anon_sym_,
  [sym_address] = sym_address,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Offset_COLON] = anon_sym_Offset_COLON,
  [sym_code_identifier] = sym_code_identifier,
  [sym_raw_data] = sym_raw_data,
  [sym__whitespace_no_newline] = sym__whitespace_no_newline,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_source_location] = sym_source_location,
  [sym__instruction_and_comment] = sym__instruction_and_comment,
  [sym__instruction_and_location] = sym__instruction_and_location,
  [sym_comment] = sym_comment,
  [sym__comment_with_label] = sym__comment_with_label,
  [sym__comment_with_address] = sym__comment_with_address,
  [sym_code_location] = sym_code_location,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym_file_offset] = sym_file_offset,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_source_location_token1] = {
    .visible = false,
    .named = false,
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_with_label_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
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
  [anon_sym_] = {
    .visible = true,
    .named = false,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Offset_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_data] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace_no_newline] = {
    .visible = false,
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
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym__instruction_and_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction_and_location] = {
    .visible = false,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_with_label] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_with_address] = {
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
  [sym_file_offset] = {
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
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 8,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 7,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 39,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 49,
  [55] = 55,
  [56] = 50,
  [57] = 57,
  [58] = 58,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '+') ADVANCE(52);
      if (lookahead == ',') ADVANCE(49);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '>') ADVANCE(53);
      if (lookahead == 'F') ADVANCE(56);
      if (lookahead == 'O') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 2:
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == '.') ADVANCE(30);
      END_STATE();
    case 5:
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(65);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(31);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == 'F') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 13:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'f') ADVANCE(13);
      END_STATE();
    case 15:
      if (lookahead == 'i') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(23);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '#') ADVANCE(42);
      if (lookahead == '(') ADVANCE(44);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(5);
      if (lookahead == '0') ADVANCE(64);
      if (lookahead == ';') ADVANCE(43);
      if (lookahead == '<') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_source_location_token1);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_source_location_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == ')') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'b') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == 'd') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_bad_instruction);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(40);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (lookahead == '0') ADVANCE(46);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(47);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'i') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h') ADVANCE(20);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'x') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(48);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 28},
  [3] = {.lex_state = 28},
  [4] = {.lex_state = 28},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 32, .external_lex_state = 2},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 32, .external_lex_state = 2},
  [12] = {.lex_state = 32, .external_lex_state = 2},
  [13] = {.lex_state = 28},
  [14] = {.lex_state = 9},
  [15] = {.lex_state = 28},
  [16] = {.lex_state = 32, .external_lex_state = 2},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 28},
  [20] = {.lex_state = 33, .external_lex_state = 2},
  [21] = {.lex_state = 33, .external_lex_state = 2},
  [22] = {.lex_state = 28},
  [23] = {.lex_state = 28},
  [24] = {.lex_state = 28},
  [25] = {.lex_state = 33, .external_lex_state = 2},
  [26] = {.lex_state = 28},
  [27] = {.lex_state = 28},
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 33, .external_lex_state = 2},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 28},
  [35] = {.lex_state = 28},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0, .external_lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 9},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 9},
  [58] = {.lex_state = 0},
};

enum {
  ts_external_token_code_identifier = 0,
  ts_external_token_raw_data = 1,
  ts_external_token__whitespace_no_newline = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token_raw_data] = sym_raw_data,
  [ts_external_token__whitespace_no_newline] = sym__whitespace_no_newline,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token_raw_data] = true,
    [ts_external_token__whitespace_no_newline] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_raw_data] = true,
    [ts_external_token__whitespace_no_newline] = true,
  },
  [3] = {
    [ts_external_token_code_identifier] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym_raw_data] = ACTIONS(1),
    [sym__whitespace_no_newline] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(48),
    [sym__line] = STATE(3),
    [sym_source_location] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [sym_address] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(13), 1,
      sym_code_location,
    STATE(19), 1,
      sym_comment,
    STATE(29), 1,
      sym_file_offset,
    ACTIONS(11), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(9), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [25] = 4,
    ACTIONS(7), 1,
      sym_address,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(4), 3,
      sym__line,
      sym_source_location,
      aux_sym_source_repeat1,
  [40] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(26), 1,
      sym_address,
    STATE(4), 3,
      sym__line,
      sym_source_location,
      aux_sym_source_repeat1,
  [55] = 4,
    ACTIONS(29), 1,
      anon_sym_LPAREN,
    ACTIONS(31), 1,
      sym_hexadecimal,
    ACTIONS(33), 1,
      sym_address,
    STATE(33), 2,
      sym__comment_with_label,
      sym__comment_with_address,
  [69] = 4,
    ACTIONS(35), 1,
      anon_sym_COLON,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_byte,
    STATE(21), 2,
      sym_code_location,
      sym_machine_code_bytes,
  [83] = 1,
    ACTIONS(41), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_address,
  [91] = 1,
    ACTIONS(43), 5,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      sym_address,
  [99] = 4,
    ACTIONS(45), 1,
      aux_sym_source_location_token1,
    ACTIONS(47), 1,
      anon_sym_,
    STATE(12), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(49), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [113] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(34), 1,
      sym_file_offset,
    ACTIONS(51), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [125] = 4,
    ACTIONS(53), 1,
      aux_sym_source_location_token1,
    ACTIONS(55), 1,
      anon_sym_,
    STATE(11), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(58), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [139] = 4,
    ACTIONS(47), 1,
      anon_sym_,
    ACTIONS(60), 1,
      aux_sym_source_location_token1,
    STATE(11), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(62), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [153] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(35), 1,
      sym_file_offset,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [165] = 3,
    ACTIONS(37), 1,
      anon_sym_LT,
    ACTIONS(39), 1,
      sym_byte,
    STATE(20), 2,
      sym_code_location,
      sym_machine_code_bytes,
  [176] = 1,
    ACTIONS(66), 4,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      anon_sym_RPAREN,
      sym_address,
  [183] = 2,
    ACTIONS(53), 2,
      aux_sym_source_location_token1,
      anon_sym_,
    ACTIONS(58), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [192] = 3,
    ACTIONS(68), 1,
      sym_instruction,
    ACTIONS(70), 1,
      sym_bad_instruction,
    STATE(23), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [203] = 3,
    ACTIONS(68), 1,
      sym_instruction,
    ACTIONS(72), 1,
      sym_bad_instruction,
    STATE(26), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [214] = 1,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [220] = 2,
    ACTIONS(76), 1,
      aux_sym_source_location_token1,
    ACTIONS(78), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [228] = 2,
    ACTIONS(80), 1,
      aux_sym_source_location_token1,
    ACTIONS(82), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [236] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [242] = 1,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [248] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [254] = 1,
    ACTIONS(43), 3,
      sym_raw_data,
      sym__whitespace_no_newline,
      aux_sym_source_location_token1,
  [260] = 1,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [266] = 1,
    ACTIONS(92), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [272] = 1,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [278] = 1,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [284] = 1,
    ACTIONS(41), 3,
      sym_raw_data,
      sym__whitespace_no_newline,
      aux_sym_source_location_token1,
  [290] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(96), 1,
      anon_sym_RPAREN,
    STATE(51), 1,
      sym_file_offset,
  [300] = 1,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [306] = 1,
    ACTIONS(100), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [312] = 1,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [318] = 1,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_DOT_DOT_DOT,
      sym_address,
  [324] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(46), 1,
      sym_file_offset,
  [334] = 2,
    ACTIONS(108), 1,
      sym_hexadecimal,
    ACTIONS(110), 1,
      sym_integer,
  [341] = 2,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_code_location,
  [348] = 2,
    ACTIONS(112), 1,
      anon_sym_PLUS,
    ACTIONS(114), 1,
      anon_sym_GT,
  [355] = 2,
    ACTIONS(116), 1,
      sym_hexadecimal,
    ACTIONS(118), 1,
      sym_integer,
  [362] = 2,
    ACTIONS(120), 1,
      anon_sym_PLUS,
    ACTIONS(122), 1,
      anon_sym_GT,
  [369] = 2,
    ACTIONS(124), 1,
      aux_sym__comment_with_label_token1,
    ACTIONS(126), 1,
      sym_address,
  [376] = 2,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(36), 1,
      sym_code_location,
  [383] = 2,
    ACTIONS(15), 1,
      anon_sym_LT,
    STATE(31), 1,
      sym_code_location,
  [390] = 1,
    ACTIONS(128), 1,
      anon_sym_Offset_COLON,
  [394] = 1,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
  [398] = 1,
    ACTIONS(132), 1,
      sym_hexadecimal,
  [402] = 1,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
  [406] = 1,
    ACTIONS(136), 1,
      sym_code_identifier,
  [410] = 1,
    ACTIONS(138), 1,
      anon_sym_GT,
  [414] = 1,
    ACTIONS(140), 1,
      anon_sym_RPAREN,
  [418] = 1,
    ACTIONS(142), 1,
      sym_address,
  [422] = 1,
    ACTIONS(144), 1,
      sym_byte,
  [426] = 1,
    ACTIONS(146), 1,
      sym_code_identifier,
  [430] = 1,
    ACTIONS(148), 1,
      anon_sym_RPAREN,
  [434] = 1,
    ACTIONS(150), 1,
      anon_sym_GT,
  [438] = 1,
    ACTIONS(152), 1,
      anon_sym_File,
  [442] = 1,
    ACTIONS(154), 1,
      anon_sym_COMMA,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 25,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 55,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 83,
  [SMALL_STATE(8)] = 91,
  [SMALL_STATE(9)] = 99,
  [SMALL_STATE(10)] = 113,
  [SMALL_STATE(11)] = 125,
  [SMALL_STATE(12)] = 139,
  [SMALL_STATE(13)] = 153,
  [SMALL_STATE(14)] = 165,
  [SMALL_STATE(15)] = 176,
  [SMALL_STATE(16)] = 183,
  [SMALL_STATE(17)] = 192,
  [SMALL_STATE(18)] = 203,
  [SMALL_STATE(19)] = 214,
  [SMALL_STATE(20)] = 220,
  [SMALL_STATE(21)] = 228,
  [SMALL_STATE(22)] = 236,
  [SMALL_STATE(23)] = 242,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 254,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 266,
  [SMALL_STATE(28)] = 272,
  [SMALL_STATE(29)] = 278,
  [SMALL_STATE(30)] = 284,
  [SMALL_STATE(31)] = 290,
  [SMALL_STATE(32)] = 300,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 312,
  [SMALL_STATE(35)] = 318,
  [SMALL_STATE(36)] = 324,
  [SMALL_STATE(37)] = 334,
  [SMALL_STATE(38)] = 341,
  [SMALL_STATE(39)] = 348,
  [SMALL_STATE(40)] = 355,
  [SMALL_STATE(41)] = 362,
  [SMALL_STATE(42)] = 369,
  [SMALL_STATE(43)] = 376,
  [SMALL_STATE(44)] = 383,
  [SMALL_STATE(45)] = 390,
  [SMALL_STATE(46)] = 394,
  [SMALL_STATE(47)] = 398,
  [SMALL_STATE(48)] = 402,
  [SMALL_STATE(49)] = 406,
  [SMALL_STATE(50)] = 410,
  [SMALL_STATE(51)] = 414,
  [SMALL_STATE(52)] = 418,
  [SMALL_STATE(53)] = 422,
  [SMALL_STATE(54)] = 426,
  [SMALL_STATE(55)] = 430,
  [SMALL_STATE(56)] = 434,
  [SMALL_STATE(57)] = 438,
  [SMALL_STATE(58)] = 442,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(4),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(53),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 7),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 5),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [134] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
