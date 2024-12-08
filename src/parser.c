#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 35
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
  sym_key_val = 23,
  sym_type = 24,
  sym_key_string = 25,
  sym_string = 26,
  sym_prop = 27,
  aux_sym_source_file_repeat1 = 28,
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
  [sym_key_val] = "key_val",
  [sym_type] = "type",
  [sym_key_string] = "key_string",
  [sym_string] = "string",
  [sym_prop] = "prop",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
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
  [sym_key_val] = sym_key_val,
  [sym_type] = sym_type,
  [sym_key_string] = sym_key_string,
  [sym_string] = sym_string,
  [sym_prop] = sym_prop,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
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
  [34] = 34,
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
        '\\', 21,
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
        '-', 4,
        '0', 41,
        'F', 7,
        'T', 15,
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
      if (lookahead == '\\') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(37);
      END_STATE();
    case 4:
      if (lookahead == '0') ADVANCE(41);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (lookahead == '_') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 11:
      if (lookahead == 'l') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == 'l') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(8);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 19:
      if (lookahead == 'y') ADVANCE(14);
      END_STATE();
    case 20:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 21:
      if (lookahead == '"' ||
          lookahead == '\\' ||
          lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          lookahead == 't') ADVANCE(39);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(44);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(35);
      if (lookahead == ',') ADVANCE(30);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '_') ADVANCE(6);
      if (lookahead == '}') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(24);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(33);
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
      if (lookahead == 'n') ADVANCE(17);
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
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(22);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(20);
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
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 24},
  [5] = {.lex_state = 24},
  [6] = {.lex_state = 24},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 24},
  [11] = {.lex_state = 24},
  [12] = {.lex_state = 24},
  [13] = {.lex_state = 24},
  [14] = {.lex_state = 24},
  [15] = {.lex_state = 24},
  [16] = {.lex_state = 24},
  [17] = {.lex_state = 24},
  [18] = {.lex_state = 3},
  [19] = {.lex_state = 3},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 24},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
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
    [sym_source_file] = STATE(32),
    [sym_key_val] = STATE(4),
    [sym_type] = STATE(4),
    [sym_key_string] = STATE(30),
    [sym_string] = STATE(30),
    [sym_prop] = STATE(30),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym___type] = ACTIONS(5),
    [aux_sym_key_string_token1] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(9),
    [anon_sym___] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    ACTIONS(17), 1,
      anon_sym_RBRACK,
    STATE(25), 1,
      sym_val,
    STATE(33), 1,
      sym_val_list,
    ACTIONS(19), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_object,
      sym_array,
      sym_string,
  [29] = 7,
    ACTIONS(23), 1,
      anon_sym___type,
    ACTIONS(26), 1,
      aux_sym_key_string_token1,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym___,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
    STATE(3), 3,
      sym_key_val,
      sym_type,
      aux_sym_source_file_repeat1,
    STATE(30), 3,
      sym_key_string,
      sym_string,
      sym_prop,
  [56] = 7,
    ACTIONS(5), 1,
      anon_sym___type,
    ACTIONS(7), 1,
      aux_sym_key_string_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym___,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    STATE(3), 3,
      sym_key_val,
      sym_type,
      aux_sym_source_file_repeat1,
    STATE(30), 3,
      sym_key_string,
      sym_string,
      sym_prop,
  [82] = 7,
    ACTIONS(5), 1,
      anon_sym___type,
    ACTIONS(7), 1,
      aux_sym_key_string_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym___,
    ACTIONS(37), 1,
      anon_sym_RBRACE,
    STATE(6), 3,
      sym_key_val,
      sym_type,
      aux_sym_source_file_repeat1,
    STATE(30), 3,
      sym_key_string,
      sym_string,
      sym_prop,
  [108] = 7,
    ACTIONS(5), 1,
      anon_sym___type,
    ACTIONS(7), 1,
      aux_sym_key_string_token1,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(11), 1,
      anon_sym___,
    ACTIONS(39), 1,
      anon_sym_RBRACE,
    STATE(3), 3,
      sym_key_val,
      sym_type,
      aux_sym_source_file_repeat1,
    STATE(30), 3,
      sym_key_string,
      sym_string,
      sym_prop,
  [134] = 6,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(17), 1,
      sym_val,
    ACTIONS(19), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_object,
      sym_array,
      sym_string,
  [157] = 6,
    ACTIONS(9), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_LBRACE,
    ACTIONS(15), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_val,
    ACTIONS(19), 3,
      sym_number,
      sym_true,
      sym_false,
    STATE(11), 3,
      sym_object,
      sym_array,
      sym_string,
  [180] = 2,
    ACTIONS(43), 1,
      anon_sym___,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [194] = 2,
    ACTIONS(47), 1,
      anon_sym___,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_EQ,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [208] = 2,
    ACTIONS(51), 1,
      anon_sym___,
    ACTIONS(49), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [221] = 2,
    ACTIONS(55), 1,
      anon_sym___,
    ACTIONS(53), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [234] = 2,
    ACTIONS(59), 1,
      anon_sym___,
    ACTIONS(57), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [247] = 2,
    ACTIONS(63), 1,
      anon_sym___,
    ACTIONS(61), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [260] = 2,
    ACTIONS(67), 1,
      anon_sym___,
    ACTIONS(65), 7,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [273] = 2,
    ACTIONS(71), 1,
      anon_sym___,
    ACTIONS(69), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [284] = 2,
    ACTIONS(75), 1,
      anon_sym___,
    ACTIONS(73), 5,
      ts_builtin_sym_end,
      anon_sym_RBRACE,
      anon_sym___type,
      aux_sym_key_string_token1,
      anon_sym_DQUOTE,
  [295] = 4,
    ACTIONS(77), 1,
      anon_sym_DQUOTE,
    ACTIONS(79), 1,
      aux_sym_string_token1,
    ACTIONS(82), 1,
      aux_sym_string_token2,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [308] = 4,
    ACTIONS(85), 1,
      anon_sym_DQUOTE,
    ACTIONS(87), 1,
      aux_sym_string_token1,
    ACTIONS(89), 1,
      aux_sym_string_token2,
    STATE(18), 1,
      aux_sym_string_repeat1,
  [321] = 4,
    ACTIONS(91), 1,
      anon_sym_DQUOTE,
    ACTIONS(93), 1,
      aux_sym_string_token1,
    ACTIONS(95), 1,
      aux_sym_string_token2,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [334] = 3,
    ACTIONS(97), 1,
      anon_sym_EQ,
    ACTIONS(99), 1,
      aux_sym_key_string_token2,
    STATE(21), 1,
      aux_sym_key_string_repeat1,
  [344] = 3,
    ACTIONS(102), 1,
      anon_sym_EQ,
    ACTIONS(104), 1,
      aux_sym_key_string_token2,
    STATE(24), 1,
      aux_sym_key_string_repeat1,
  [354] = 3,
    ACTIONS(106), 1,
      anon_sym_DQUOTE,
    ACTIONS(108), 1,
      sym_null,
    STATE(16), 1,
      sym_string,
  [364] = 3,
    ACTIONS(110), 1,
      anon_sym_EQ,
    ACTIONS(112), 1,
      aux_sym_key_string_token2,
    STATE(21), 1,
      aux_sym_key_string_repeat1,
  [374] = 3,
    ACTIONS(114), 1,
      anon_sym_RBRACK,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    STATE(26), 1,
      aux_sym_val_list_repeat1,
  [384] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(27), 1,
      aux_sym_val_list_repeat1,
  [394] = 3,
    ACTIONS(120), 1,
      anon_sym_RBRACK,
    ACTIONS(122), 1,
      anon_sym_COMMA,
    STATE(27), 1,
      aux_sym_val_list_repeat1,
  [404] = 2,
    ACTIONS(7), 1,
      aux_sym_key_string_token1,
    STATE(34), 1,
      sym_key_string,
  [411] = 1,
    ACTIONS(120), 2,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [416] = 1,
    ACTIONS(125), 1,
      anon_sym_EQ,
  [420] = 1,
    ACTIONS(127), 1,
      anon_sym_EQ,
  [424] = 1,
    ACTIONS(129), 1,
      ts_builtin_sym_end,
  [428] = 1,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
  [432] = 1,
    ACTIONS(133), 1,
      anon_sym_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 180,
  [SMALL_STATE(10)] = 194,
  [SMALL_STATE(11)] = 208,
  [SMALL_STATE(12)] = 221,
  [SMALL_STATE(13)] = 234,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 260,
  [SMALL_STATE(16)] = 273,
  [SMALL_STATE(17)] = 284,
  [SMALL_STATE(18)] = 295,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 344,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 364,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 384,
  [SMALL_STATE(27)] = 394,
  [SMALL_STATE(28)] = 404,
  [SMALL_STATE(29)] = 411,
  [SMALL_STATE(30)] = 416,
  [SMALL_STATE(31)] = 420,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 428,
  [SMALL_STATE(34)] = 432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val, 1, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_val, 1, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 2, 0, 0),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_object, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array, 3, 0, 0),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 3, 0, 0),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 3, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_val, 3, 0, 0),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_key_val, 3, 0, 0),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_key_string_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 1, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key_string, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_list, 1, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_val_list, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_val_list_repeat1, 2, 0, 0),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_val_list_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [129] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prop, 2, 0, 0),
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
