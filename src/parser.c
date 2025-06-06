/* Automatically generated by tree-sitter v0.25.3 (2a835ee029dca1c325e6f1c01dbce40396f6123e) */

#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 15
#define STATE_COUNT 39
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 28
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 7
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define MAX_RESERVED_WORD_SET_SIZE 0
#define PRODUCTION_ID_COUNT 5
#define SUPERTYPE_COUNT 0

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  aux_sym_project_token1 = 2,
  anon_sym_LF = 3,
  sym_priority = 4,
  anon_sym_AT = 5,
  anon_sym_LPAREN = 6,
  anon_sym_RPAREN = 7,
  anon_sym_due = 8,
  anon_sym_deadline = 9,
  anon_sym_every = 10,
  sym_property_value = 11,
  anon_sym_PLUS = 12,
  sym_line_content = 13,
  sym_blank_line = 14,
  sym_tab_indent = 15,
  sym_source_file = 16,
  sym__block = 17,
  sym_project = 18,
  sym_task = 19,
  sym_additional_description = 20,
  sym_property = 21,
  sym_property_name = 22,
  sym_subtask = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_task_repeat1 = 25,
  aux_sym_task_repeat2 = 26,
  aux_sym_task_repeat3 = 27,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [aux_sym_project_token1] = "project_token1",
  [anon_sym_LF] = "\n",
  [sym_priority] = "priority",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_due] = "due",
  [anon_sym_deadline] = "deadline",
  [anon_sym_every] = "every",
  [sym_property_value] = "property_value",
  [anon_sym_PLUS] = "+",
  [sym_line_content] = "line_content",
  [sym_blank_line] = "blank_line",
  [sym_tab_indent] = "tab_indent",
  [sym_source_file] = "source_file",
  [sym__block] = "_block",
  [sym_project] = "project",
  [sym_task] = "task",
  [sym_additional_description] = "additional_description",
  [sym_property] = "property",
  [sym_property_name] = "property_name",
  [sym_subtask] = "subtask",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_task_repeat1] = "task_repeat1",
  [aux_sym_task_repeat2] = "task_repeat2",
  [aux_sym_task_repeat3] = "task_repeat3",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_project_token1] = aux_sym_project_token1,
  [anon_sym_LF] = anon_sym_LF,
  [sym_priority] = sym_priority,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_due] = anon_sym_due,
  [anon_sym_deadline] = anon_sym_deadline,
  [anon_sym_every] = anon_sym_every,
  [sym_property_value] = sym_property_value,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_line_content] = sym_line_content,
  [sym_blank_line] = sym_blank_line,
  [sym_tab_indent] = sym_tab_indent,
  [sym_source_file] = sym_source_file,
  [sym__block] = sym__block,
  [sym_project] = sym_project,
  [sym_task] = sym_task,
  [sym_additional_description] = sym_additional_description,
  [sym_property] = sym_property,
  [sym_property_name] = sym_property_name,
  [sym_subtask] = sym_subtask,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_task_repeat1] = aux_sym_task_repeat1,
  [aux_sym_task_repeat2] = aux_sym_task_repeat2,
  [aux_sym_task_repeat3] = aux_sym_task_repeat3,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_project_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_priority] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_due] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_deadline] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_every] = {
    .visible = true,
    .named = false,
  },
  [sym_property_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tab_indent] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__block] = {
    .visible = false,
    .named = true,
  },
  [sym_project] = {
    .visible = true,
    .named = true,
  },
  [sym_task] = {
    .visible = true,
    .named = true,
  },
  [sym_additional_description] = {
    .visible = true,
    .named = true,
  },
  [sym_property] = {
    .visible = true,
    .named = true,
  },
  [sym_property_name] = {
    .visible = true,
    .named = true,
  },
  [sym_subtask] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_repeat3] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_description = 1,
  field_indent = 2,
  field_name = 3,
  field_priority = 4,
  field_project_name = 5,
  field_subtask_description = 6,
  field_value = 7,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_description] = "description",
  [field_indent] = "indent",
  [field_name] = "name",
  [field_priority] = "priority",
  [field_project_name] = "project_name",
  [field_subtask_description] = "subtask_description",
  [field_value] = "value",
};

static const TSMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
  [3] = {.index = 3, .length = 2},
  [4] = {.index = 5, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_project_name, 1},
  [1] =
    {field_description, 1},
    {field_priority, 0},
  [3] =
    {field_indent, 0},
    {field_subtask_description, 2},
  [5] =
    {field_name, 1},
    {field_value, 3},
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
  [21] = 9,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 16,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 29,
  [36] = 34,
  [37] = 31,
  [38] = 38,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(20);
      ADVANCE_MAP(
        '!', 27,
        '(', 29,
        ')', 30,
        '+', 36,
        '=', 21,
        '@', 28,
        'd', 8,
        'e', 16,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '@') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(1);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '+') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '@') ADVANCE(40);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '@') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(23);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(6);
      if (lookahead == 'u') ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 10:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'v') ADVANCE(10);
      END_STATE();
    case 17:
      if (lookahead == 'y') ADVANCE(33);
      END_STATE();
    case 18:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(41);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '=') ADVANCE(21);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(18);
      END_STATE();
    case 19:
      if (eof) ADVANCE(20);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '!') ADVANCE(27);
      if (lookahead == '=') ADVANCE(21);
      if (lookahead == '@') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      if ((0x0b <= lookahead && lookahead <= '\r')) SKIP(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_project_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_priority);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_priority);
      if (lookahead == '!') ADVANCE(25);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_priority);
      if (lookahead == '!') ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_due);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_deadline);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_every);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_property_value);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ')') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == '+') ADVANCE(37);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead == '+' ||
          lookahead == '@') ADVANCE(40);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(39);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_line_content);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_blank_line);
      if (lookahead == '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_blank_line);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tab_indent);
      if (lookahead == '\n') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(43);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexerMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 18},
  [2] = {.lex_state = 19},
  [3] = {.lex_state = 19},
  [4] = {.lex_state = 19},
  [5] = {.lex_state = 19},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 19},
  [11] = {.lex_state = 19},
  [12] = {.lex_state = 19},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 19},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 19},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [STATE(0)] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_priority] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_due] = ACTIONS(1),
    [anon_sym_deadline] = ACTIONS(1),
    [anon_sym_every] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
  },
  [STATE(1)] = {
    [sym_source_file] = STATE(38),
    [sym__block] = STATE(7),
    [sym_project] = STATE(7),
    [sym_task] = STATE(7),
    [aux_sym_source_file_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_EQ] = ACTIONS(5),
    [sym_priority] = ACTIONS(7),
    [sym_blank_line] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_tab_indent,
    STATE(12), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    STATE(13), 2,
      sym_additional_description,
      aux_sym_task_repeat2,
    ACTIONS(13), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [20] = 5,
    ACTIONS(15), 1,
      sym_tab_indent,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    STATE(2), 2,
      sym_additional_description,
      aux_sym_task_repeat2,
    STATE(11), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(19), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [40] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_tab_indent,
    STATE(5), 2,
      sym_additional_description,
      aux_sym_task_repeat2,
    STATE(12), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(13), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [60] = 5,
    ACTIONS(15), 1,
      sym_tab_indent,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_additional_description,
      aux_sym_task_repeat2,
    STATE(15), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(23), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [80] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_EQ,
    ACTIONS(30), 1,
      sym_priority,
    ACTIONS(33), 1,
      sym_blank_line,
    STATE(6), 4,
      sym__block,
      sym_project,
      sym_task,
      aux_sym_source_file_repeat1,
  [99] = 5,
    ACTIONS(5), 1,
      anon_sym_EQ,
    ACTIONS(7), 1,
      sym_priority,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      sym_blank_line,
    STATE(6), 4,
      sym__block,
      sym_project,
      sym_task,
      aux_sym_source_file_repeat1,
  [118] = 4,
    ACTIONS(40), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_AT,
    STATE(10), 2,
      sym_property,
      aux_sym_task_repeat1,
    ACTIONS(42), 4,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
      sym_tab_indent,
  [135] = 4,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(50), 1,
      anon_sym_AT,
    STATE(9), 2,
      sym_property,
      aux_sym_task_repeat1,
    ACTIONS(48), 4,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
      sym_tab_indent,
  [152] = 4,
    ACTIONS(44), 1,
      anon_sym_AT,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    STATE(9), 2,
      sym_property,
      aux_sym_task_repeat1,
    ACTIONS(55), 4,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
      sym_tab_indent,
  [169] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_tab_indent,
    STATE(14), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(13), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [185] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym_tab_indent,
    STATE(14), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(23), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [201] = 4,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(63), 1,
      sym_tab_indent,
    STATE(13), 2,
      sym_additional_description,
      aux_sym_task_repeat2,
    ACTIONS(61), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [217] = 4,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      sym_tab_indent,
    STATE(14), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(68), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [233] = 4,
    ACTIONS(57), 1,
      sym_tab_indent,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_subtask,
      aux_sym_task_repeat3,
    ACTIONS(75), 3,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
  [249] = 2,
    ACTIONS(77), 1,
      ts_builtin_sym_end,
    ACTIONS(79), 5,
      anon_sym_EQ,
      sym_priority,
      anon_sym_AT,
      sym_blank_line,
      sym_tab_indent,
  [260] = 2,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
    ACTIONS(83), 4,
      anon_sym_EQ,
      sym_priority,
      sym_blank_line,
      sym_tab_indent,
  [270] = 2,
    STATE(31), 1,
      sym_property_name,
    ACTIONS(85), 3,
      anon_sym_due,
      anon_sym_deadline,
      anon_sym_every,
  [279] = 3,
    ACTIONS(87), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      anon_sym_AT,
    STATE(22), 2,
      sym_property,
      aux_sym_task_repeat1,
  [290] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      sym_blank_line,
    ACTIONS(93), 2,
      anon_sym_EQ,
      sym_priority,
  [299] = 3,
    ACTIONS(46), 1,
      anon_sym_LF,
    ACTIONS(95), 1,
      anon_sym_AT,
    STATE(21), 2,
      sym_property,
      aux_sym_task_repeat1,
  [310] = 3,
    ACTIONS(89), 1,
      anon_sym_AT,
    ACTIONS(98), 1,
      anon_sym_LF,
    STATE(21), 2,
      sym_property,
      aux_sym_task_repeat1,
  [321] = 2,
    STATE(37), 1,
      sym_property_name,
    ACTIONS(85), 3,
      anon_sym_due,
      anon_sym_deadline,
      anon_sym_every,
  [330] = 2,
    ACTIONS(100), 1,
      anon_sym_PLUS,
    ACTIONS(102), 1,
      sym_line_content,
  [337] = 2,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(79), 1,
      anon_sym_AT,
  [344] = 1,
    ACTIONS(104), 1,
      sym_line_content,
  [348] = 1,
    ACTIONS(106), 1,
      sym_line_content,
  [352] = 1,
    ACTIONS(108), 1,
      aux_sym_project_token1,
  [356] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [360] = 1,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
  [364] = 1,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
  [368] = 1,
    ACTIONS(116), 1,
      anon_sym_PLUS,
  [372] = 1,
    ACTIONS(118), 1,
      sym_line_content,
  [376] = 1,
    ACTIONS(120), 1,
      sym_property_value,
  [380] = 1,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
  [384] = 1,
    ACTIONS(124), 1,
      sym_property_value,
  [388] = 1,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
  [392] = 1,
    ACTIONS(128), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 20,
  [SMALL_STATE(4)] = 40,
  [SMALL_STATE(5)] = 60,
  [SMALL_STATE(6)] = 80,
  [SMALL_STATE(7)] = 99,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 135,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 260,
  [SMALL_STATE(18)] = 270,
  [SMALL_STATE(19)] = 279,
  [SMALL_STATE(20)] = 290,
  [SMALL_STATE(21)] = 299,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 321,
  [SMALL_STATE(24)] = 330,
  [SMALL_STATE(25)] = 337,
  [SMALL_STATE(26)] = 344,
  [SMALL_STATE(27)] = 348,
  [SMALL_STATE(28)] = 352,
  [SMALL_STATE(29)] = 356,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 364,
  [SMALL_STATE(32)] = 368,
  [SMALL_STATE(33)] = 372,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 380,
  [SMALL_STATE(36)] = 384,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 392,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 4, 0, 2),
  [13] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 4, 0, 2),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 3, 0, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 3, 0, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 5, 0, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 5, 0, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtask, 3, 0, 3),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtask, 3, 0, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_repeat1, 2, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2, 0, 0),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subtask, 4, 0, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subtask, 4, 0, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_repeat2, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat2, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat2, 2, 0, 0), SHIFT_REPEAT(26),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_repeat3, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_task_repeat3, 2, 0, 0),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat3, 2, 0, 0), SHIFT_REPEAT(32),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task, 6, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_task, 6, 0, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property, 5, 0, 4),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_property, 5, 0, 4),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_additional_description, 2, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_additional_description, 2, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [89] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_project, 2, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_project, 2, 0, 1),
  [95] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_task_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_property_name, 1, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [128] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_dadoot(void) {
  static const TSLanguage language = {
    .abi_version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .supertype_count = SUPERTYPE_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = (const void*)ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
    .name = "dadoot",
    .max_reserved_word_set_size = 0,
    .metadata = {
      .major_version = 0,
      .minor_version = 1,
      .patch_version = 0,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
