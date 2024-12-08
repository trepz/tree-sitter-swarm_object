#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_RBRACE = 2,
  anon_sym_LBRACK = 3,
  anon_sym_RBRACK = 4,
  anon_sym_COMMA = 5,
  anon_sym_EQ = 6,
  anon_sym___type = 7,
  aux_sym_key_string_token1 = 8,
  aux_sym_key_string_token2 = 9,
  anon_sym_DQUOTE = 10,
  aux_sym_string_token1 = 11,
  aux_sym_string_token2 = 12,
  anon_sym___ = 13,
  sym_number = 14,
  sym_true = 15,
  sym_false = 16,
  sym_null = 17,
  sym_source_file = 18,
  sym_val = 19,
  sym_object = 20,
  sym_array = 21,
  sym_val_list = 22,
  sym_pair = 23,
  sym_key_val = 24,
  sym_type = 25,
  sym_key_string = 26,
  sym_string = 27,
  sym_prop = 28,
  aux_sym_val_list_repeat1 = 29,
  aux_sym_key_string_repeat1 = 30,
  aux_sym_string_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [anon_sym_EQ] = "=",
  [anon_sym___type] = "__type",
  [aux_sym_key_string_token1] = "key_string_token1",
  [aux_sym_key_string_token2] = "key_string_token2",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym___] = "__",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_source_file] = "source_file",
  [sym_val] = "val",
  [sym_object] = "object",
  [sym_array] = "array",
  [sym_val_list] = "val_list",
  [sym_pair] = "pair",
  [sym_key_val] = "key_val",
  [sym_type] = "type",
  [sym_key_string] = "key_string",
  [sym_string] = "string",
  [sym_prop] = "prop",
  [aux_sym_val_list_repeat1] = "val_list_repeat1",
  [aux_sym_key_string_repeat1] = "key_string_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym___type] = anon_sym___type,
  [aux_sym_key_string_token1] = aux_sym_key_string_token1,
  [aux_sym_key_string_token2] = aux_sym_key_string_token2,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym___] = anon_sym___,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_source_file] = sym_source_file,
  [sym_val] = sym_val,
  [sym_object] = sym_object,
  [sym_array] = sym_array,
  [sym_val_list] = sym_val_list,
  [sym_pair] = sym_pair,
  [sym_key_val] = sym_key_val,
  [sym_type] = sym_type,
  [sym_key_string] = sym_key_string,
  [sym_string] = sym_string,
  [sym_prop] = sym_prop,
  [aux_sym_val_list_repeat1] = aux_sym_val_list_repeat1,
  [aux_sym_key_string_repeat1] = aux_sym_key_string_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym___type] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_key_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym___] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_val] = {
    .visible = true,
    .named = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_val_list] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_key_val] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_key_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_prop] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_val_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_key_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
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
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '"', 36,
        ',', 30,
        '=', 31,
        '[', 28,
        '\\', 22,
        ']', 29,
        '{', 26,
        '}', 27,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(34);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(47);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '"', 35,
        '-', 5,
        '0', 41,
        'F', 8,
        'T', 16,
        '[', 28,
        ']', 29,
        '{', 26,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '\\') ADVANCE(22);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == '_') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(19);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(14);
      END_STATE();
    case 19:
      if (lookahead == 'u') ADVANCE(10);
      END_STATE();
    case 20:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 21:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 22:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym___type);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_key_string_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_key_string_token2);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym___);
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(23);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 4},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 3},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_key_string_token1] = ACTIONS(1),
    [aux_sym_key_string_token2] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(33),
    [sym_pair] = STATE(30),
    [sym_key_val] = STATE(24),
    [sym_type] = STATE(24),
    [sym_key_string] = STATE(28),
    [sym_string] = STATE(28),
    [sym_prop] = STATE(28),
    [anon_sym___type] = ACTIONS(3),
    [aux_sym_key_string_token1] = ACTIONS(5),
    [anon_sym_DQUOTE] = ACTIONS(7),
    [anon_sym___] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_RBRACK,
    STATE(20), 1,
      sym_val,
    STATE(31), 1,
      sym_val_list,
    ACTIONS(17), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
  [29] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(26), 1,
      sym_val,
    ACTIONS(17), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
  [52] = 7,
    ACTIONS(3), 1,
      anon_sym___type,
    ACTIONS(5), 1,
      aux_sym_key_string_token1,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(9), 1,
      anon_sym___,
    STATE(32), 1,
      sym_pair,
    STATE(24), 2,
      sym_key_val,
      sym_type,
    STATE(28), 3,
      sym_key_string,
      sym_string,
      sym_prop,
  [77] = 6,
    ACTIONS(7), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym_LBRACE,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_val,
    ACTIONS(17), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(13), 3,
      sym_object,
      sym_array,
      sym_string,
  [100] = 1,
    ACTIONS(19), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
  [108] = 1,
    ACTIONS(21), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
  [116] = 1,
    ACTIONS(23), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [123] = 4,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      aux_sym_string_token1,
    ACTIONS(29), 1,
      aux_sym_string_token2,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [136] = 4,
    ACTIONS(31), 1,
      anon_sym_DQUOTE,
    ACTIONS(33), 1,
      aux_sym_string_token1,
    ACTIONS(35), 1,
      aux_sym_string_token2,
    STATE(9), 1,
      aux_sym_string_repeat1,
  [149] = 4,
    ACTIONS(37), 1,
      anon_sym_DQUOTE,
    ACTIONS(39), 1,
      aux_sym_string_token1,
    ACTIONS(42), 1,
      aux_sym_string_token2,
    STATE(11), 1,
      aux_sym_string_repeat1,
  [162] = 1,
    ACTIONS(45), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [169] = 1,
    ACTIONS(47), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [176] = 1,
    ACTIONS(49), 4,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [183] = 3,
    ACTIONS(51), 1,
      anon_sym_DQUOTE,
    ACTIONS(53), 1,
      sym_null,
    STATE(22), 1,
      sym_string,
  [193] = 3,
    ACTIONS(55), 1,
      anon_sym_EQ,
    ACTIONS(57), 1,
      aux_sym_key_string_token2,
    STATE(17), 1,
      aux_sym_key_string_repeat1,
  [203] = 3,
    ACTIONS(59), 1,
      anon_sym_EQ,
    ACTIONS(61), 1,
      aux_sym_key_string_token2,
    STATE(17), 1,
      aux_sym_key_string_repeat1,
  [213] = 3,
    ACTIONS(64), 1,
      anon_sym_EQ,
    ACTIONS(66), 1,
      aux_sym_key_string_token2,
    STATE(16), 1,
      aux_sym_key_string_repeat1,
  [223] = 3,
    ACTIONS(68), 1,
      anon_sym_RBRACK,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_val_list_repeat1,
  [233] = 3,
    ACTIONS(70), 1,
      anon_sym_COMMA,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(19), 1,
      aux_sym_val_list_repeat1,
  [243] = 3,
    ACTIONS(74), 1,
      anon_sym_RBRACK,
    ACTIONS(76), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_val_list_repeat1,
  [253] = 1,
    ACTIONS(79), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [258] = 2,
    ACTIONS(5), 1,
      aux_sym_key_string_token1,
    STATE(27), 1,
      sym_key_string,
  [265] = 1,
    ACTIONS(81), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [270] = 1,
    ACTIONS(74), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [275] = 1,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
  [280] = 1,
    ACTIONS(85), 1,
      anon_sym_EQ,
  [284] = 1,
    ACTIONS(87), 1,
      anon_sym_EQ,
  [288] = 1,
    ACTIONS(89), 1,
      anon_sym_EQ,
  [292] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [296] = 1,
    ACTIONS(93), 1,
      anon_sym_RBRACK,
  [300] = 1,
    ACTIONS(95), 1,
      anon_sym_RBRACE,
  [304] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 108,
  [SMALL_STATE(8)] = 116,
  [SMALL_STATE(9)] = 123,
  [SMALL_STATE(10)] = 136,
  [SMALL_STATE(11)] = 149,
  [SMALL_STATE(12)] = 162,
  [SMALL_STATE(13)] = 169,
  [SMALL_STATE(14)] = 176,
  [SMALL_STATE(15)] = 183,
  [SMALL_STATE(16)] = 193,
  [SMALL_STATE(17)] = 203,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 233,
  [SMALL_STATE(21)] = 243,
  [SMALL_STATE(22)] = 253,
  [SMALL_STATE(23)] = 258,
  [SMALL_STATE(24)] = 265,
  [SMALL_STATE(25)] = 270,
  [SMALL_STATE(26)] = 275,
  [SMALL_STATE(27)] = 280,
  [SMALL_STATE(28)] = 284,
  [SMALL_STATE(29)] = 288,
  [SMALL_STATE(30)] = 292,
  [SMALL_STATE(31)] = 296,
  [SMALL_STATE(32)] = 300,
  [SMALL_STATE(33)] = 304,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_list, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_list, 1, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_val_list_repeat1, 2, 0, 0),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_val_list_repeat1, 2, 0, 0), SHIFT_REPEAT(5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_val, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 2, 0, 0),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [97] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_swarm_object(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
