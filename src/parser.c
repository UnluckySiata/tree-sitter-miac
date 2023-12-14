#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 82
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 64
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 13
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 8

enum {
  sym_identifier = 1,
  anon_sym_i32 = 2,
  anon_sym_f32 = 3,
  anon_sym_string = 4,
  anon_sym_bool = 5,
  anon_sym_fn = 6,
  anon_sym_DASH_GT = 7,
  anon_sym_var = 8,
  anon_sym_const = 9,
  anon_sym_EQ = 10,
  anon_sym_if = 11,
  anon_sym_elif = 12,
  anon_sym_else = 13,
  anon_sym_while = 14,
  anon_sym_return = 15,
  anon_sym_DASH = 16,
  anon_sym_BANG = 17,
  anon_sym_PLUS = 18,
  anon_sym_STAR = 19,
  anon_sym_SLASH = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_BANG_EQ = 22,
  anon_sym_LT = 23,
  anon_sym_LT_EQ = 24,
  anon_sym_GT = 25,
  anon_sym_GT_EQ = 26,
  anon_sym_AMP_AMP = 27,
  anon_sym_PIPE_PIPE = 28,
  anon_sym_LPAREN = 29,
  anon_sym_COMMA = 30,
  anon_sym_RPAREN = 31,
  anon_sym_LBRACE = 32,
  anon_sym_RBRACE = 33,
  sym_type_specifier = 34,
  sym_terminator = 35,
  sym_int_literal = 36,
  sym_float_literal = 37,
  sym_string_literal = 38,
  anon_sym_true = 39,
  anon_sym_false = 40,
  sym_source_file = 41,
  sym__definition = 42,
  sym__declaration = 43,
  sym__type = 44,
  sym__statement = 45,
  sym__expression = 46,
  sym_function_definition = 47,
  sym_variable_declaration = 48,
  sym_assignment_statement = 49,
  sym_if_statement = 50,
  sym_elif_statement = 51,
  sym_else_statement = 52,
  sym_while_statement = 53,
  sym_return_statement = 54,
  sym_unary_expression = 55,
  sym_binary_expression = 56,
  sym_parameter_list = 57,
  sym_block = 58,
  sym_boolean_literal = 59,
  aux_sym_source_file_repeat1 = 60,
  aux_sym_if_statement_repeat1 = 61,
  aux_sym_parameter_list_repeat1 = 62,
  aux_sym_block_repeat1 = 63,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_i32] = "i32",
  [anon_sym_f32] = "f32",
  [anon_sym_string] = "string",
  [anon_sym_bool] = "bool",
  [anon_sym_fn] = "fn",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [anon_sym_else] = "else",
  [anon_sym_while] = "while",
  [anon_sym_return] = "return",
  [anon_sym_DASH] = "-",
  [anon_sym_BANG] = "!",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_AMP_AMP] = "&&",
  [anon_sym_PIPE_PIPE] = "||",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_type_specifier] = "type_specifier",
  [sym_terminator] = "terminator",
  [sym_int_literal] = "int_literal",
  [sym_float_literal] = "float_literal",
  [sym_string_literal] = "string_literal",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym__declaration] = "_declaration",
  [sym__type] = "_type",
  [sym__statement] = "_statement",
  [sym__expression] = "_expression",
  [sym_function_definition] = "function_definition",
  [sym_variable_declaration] = "variable_declaration",
  [sym_assignment_statement] = "assignment_statement",
  [sym_if_statement] = "if_statement",
  [sym_elif_statement] = "elif_statement",
  [sym_else_statement] = "else_statement",
  [sym_while_statement] = "while_statement",
  [sym_return_statement] = "return_statement",
  [sym_unary_expression] = "unary_expression",
  [sym_binary_expression] = "binary_expression",
  [sym_parameter_list] = "parameter_list",
  [sym_block] = "block",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_i32] = anon_sym_i32,
  [anon_sym_f32] = anon_sym_f32,
  [anon_sym_string] = anon_sym_string,
  [anon_sym_bool] = anon_sym_bool,
  [anon_sym_fn] = anon_sym_fn,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_AMP_AMP] = anon_sym_AMP_AMP,
  [anon_sym_PIPE_PIPE] = anon_sym_PIPE_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [sym_type_specifier] = sym_type_specifier,
  [sym_terminator] = sym_terminator,
  [sym_int_literal] = sym_int_literal,
  [sym_float_literal] = sym_float_literal,
  [sym_string_literal] = sym_string_literal,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym__declaration] = sym__declaration,
  [sym__type] = sym__type,
  [sym__statement] = sym__statement,
  [sym__expression] = sym__expression,
  [sym_function_definition] = sym_function_definition,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_assignment_statement] = sym_assignment_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_elif_statement] = sym_elif_statement,
  [sym_else_statement] = sym_else_statement,
  [sym_while_statement] = sym_while_statement,
  [sym_return_statement] = sym_return_statement,
  [sym_unary_expression] = sym_unary_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_block] = sym_block,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_fn] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_type_specifier] = {
    .visible = true,
    .named = true,
  },
  [sym_terminator] = {
    .visible = true,
    .named = true,
  },
  [sym_int_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym__declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_elif_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_if_statement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_body = 1,
  field_condition = 2,
  field_lhs = 3,
  field_mutability_specifier = 4,
  field_name = 5,
  field_op = 6,
  field_operand = 7,
  field_operator = 8,
  field_parameters = 9,
  field_return_type = 10,
  field_rhs = 11,
  field_type = 12,
  field_value = 13,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
  [field_condition] = "condition",
  [field_lhs] = "lhs",
  [field_mutability_specifier] = "mutability_specifier",
  [field_name] = "name",
  [field_op] = "op",
  [field_operand] = "operand",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_return_type] = "return_type",
  [field_rhs] = "rhs",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 4},
  [2] = {.index = 4, .length = 2},
  [3] = {.index = 6, .length = 4},
  [4] = {.index = 10, .length = 3},
  [5] = {.index = 13, .length = 2},
  [6] = {.index = 15, .length = 1},
  [7] = {.index = 16, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [4] =
    {field_operand, 1},
    {field_operator, 0},
  [6] =
    {field_mutability_specifier, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [10] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [13] =
    {field_body, 2},
    {field_condition, 1},
  [15] =
    {field_operator, 1},
  [16] =
    {field_body, 1},
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
  [3] = 2,
  [4] = 4,
  [5] = 4,
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
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 23,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
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
  [52] = 50,
  [53] = 53,
  [54] = 54,
  [55] = 37,
  [56] = 44,
  [57] = 39,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 70,
  [79] = 79,
  [80] = 75,
  [81] = 79,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '!') ADVANCE(18);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(31);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == ':') ADVANCE(35);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '}') ADVANCE(34);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == ';') ADVANCE(36);
      if (lookahead == '<') ADVANCE(24);
      if (lookahead == '=') ADVANCE(8);
      if (lookahead == '>') ADVANCE(26);
      if (lookahead == '{') ADVANCE(33);
      if (lookahead == '|') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(17);
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(40);
      if (lookahead != 0) ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '&') ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == '|') ADVANCE(29);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(22);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(12);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(23);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_AMP_AMP);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_PIPE_PIPE);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_type_specifier);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_terminator);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_string_literal);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'b') ADVANCE(1);
      if (lookahead == 'c') ADVANCE(2);
      if (lookahead == 'e') ADVANCE(3);
      if (lookahead == 'f') ADVANCE(4);
      if (lookahead == 'i') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(6);
      if (lookahead == 's') ADVANCE(7);
      if (lookahead == 't') ADVANCE(8);
      if (lookahead == 'v') ADVANCE(9);
      if (lookahead == 'w') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 3:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 4:
      if (lookahead == '3') ADVANCE(14);
      if (lookahead == 'a') ADVANCE(15);
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 8:
      if (lookahead == 'r') ADVANCE(21);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 10:
      if (lookahead == 'h') ADVANCE(23);
      END_STATE();
    case 11:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 12:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 14:
      if (lookahead == '2') ADVANCE(28);
      END_STATE();
    case 15:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_fn);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(30);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 22:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(38);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(40);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_var);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(48);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 48:
      if (lookahead == 'g') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_string);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 5},
  [69] = {.lex_state = 5},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 5},
  [73] = {.lex_state = 5},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_string] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_fn] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_AMP_AMP] = ACTIONS(1),
    [anon_sym_PIPE_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_type_specifier] = ACTIONS(1),
    [sym_terminator] = ACTIONS(1),
    [sym_int_literal] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(77),
    [sym__definition] = STATE(40),
    [sym_function_definition] = STATE(40),
    [sym_variable_declaration] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(19), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(5), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [30] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(21), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(4), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [60] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(23), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(6), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [90] = 7,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_if,
    ACTIONS(15), 1,
      anon_sym_while,
    ACTIONS(17), 1,
      anon_sym_return,
    ACTIONS(25), 1,
      anon_sym_RBRACE,
    ACTIONS(11), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(6), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [120] = 7,
    ACTIONS(27), 1,
      sym_identifier,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(36), 1,
      anon_sym_while,
    ACTIONS(39), 1,
      anon_sym_return,
    ACTIONS(42), 1,
      anon_sym_RBRACE,
    ACTIONS(30), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(6), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [150] = 4,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 8,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
  [173] = 2,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
  [192] = 3,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(50), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 10,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
  [213] = 8,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(48), 1,
      sym_block,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [244] = 8,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(24), 1,
      sym_block,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [275] = 2,
    ACTIONS(64), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(62), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
  [294] = 6,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 3,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [321] = 8,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(38), 1,
      sym_block,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [352] = 2,
    ACTIONS(68), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(66), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
  [371] = 5,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(48), 4,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_LBRACE,
      sym_terminator,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [396] = 7,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(70), 1,
      sym_terminator,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [424] = 7,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(72), 1,
      sym_terminator,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [452] = 7,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(74), 1,
      sym_terminator,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [480] = 7,
    ACTIONS(56), 1,
      anon_sym_AMP_AMP,
    ACTIONS(58), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(76), 1,
      sym_terminator,
    ACTIONS(44), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(46), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(54), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(52), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [508] = 5,
    ACTIONS(78), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(82), 2,
      sym_float_literal,
      sym_string_literal,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [531] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(86), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(88), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(19), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [554] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(90), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(92), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(20), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [577] = 6,
    ACTIONS(96), 1,
      anon_sym_elif,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
    STATE(46), 1,
      sym_else_statement,
    STATE(27), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(94), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [602] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(102), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(104), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(12), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [625] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(106), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(108), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(17), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [648] = 6,
    ACTIONS(96), 1,
      anon_sym_elif,
    ACTIONS(98), 1,
      anon_sym_else,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    STATE(43), 1,
      sym_else_statement,
    STATE(36), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(110), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [673] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(114), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(116), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(11), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [696] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(118), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(120), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(10), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [719] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(122), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(124), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(18), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [742] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(126), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(128), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(14), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [765] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(130), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(132), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(9), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [788] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(134), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(136), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(8), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [811] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(140), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(7), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [834] = 5,
    ACTIONS(80), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(84), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(142), 2,
      sym_identifier,
      sym_int_literal,
    ACTIONS(144), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(13), 4,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_boolean_literal,
  [857] = 4,
    ACTIONS(148), 1,
      anon_sym_elif,
    ACTIONS(151), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(146), 7,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [877] = 2,
    ACTIONS(155), 1,
      anon_sym_RBRACE,
    ACTIONS(153), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [891] = 2,
    ACTIONS(159), 1,
      anon_sym_RBRACE,
    ACTIONS(157), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [905] = 2,
    ACTIONS(163), 1,
      anon_sym_RBRACE,
    ACTIONS(161), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [919] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(41), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [936] = 4,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
    ACTIONS(169), 1,
      anon_sym_fn,
    ACTIONS(172), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(41), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [953] = 2,
    ACTIONS(177), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [965] = 2,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    ACTIONS(179), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [977] = 2,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    ACTIONS(183), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [989] = 2,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(187), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1001] = 2,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1013] = 2,
    ACTIONS(193), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1025] = 2,
    ACTIONS(197), 1,
      anon_sym_RBRACE,
    ACTIONS(195), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1037] = 2,
    STATE(65), 1,
      sym__type,
    ACTIONS(199), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1047] = 2,
    STATE(70), 1,
      sym__type,
    ACTIONS(201), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1057] = 2,
    STATE(58), 1,
      sym__type,
    ACTIONS(203), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1067] = 2,
    STATE(78), 1,
      sym__type,
    ACTIONS(205), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1077] = 2,
    STATE(63), 1,
      sym__type,
    ACTIONS(207), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1087] = 1,
    ACTIONS(209), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1094] = 1,
    ACTIONS(155), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1101] = 1,
    ACTIONS(185), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1108] = 1,
    ACTIONS(163), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1115] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(213), 1,
      anon_sym_RPAREN,
    STATE(60), 1,
      aux_sym_parameter_list_repeat1,
  [1125] = 3,
    ACTIONS(215), 1,
      anon_sym_COMMA,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [1135] = 3,
    ACTIONS(211), 1,
      anon_sym_COMMA,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(59), 1,
      aux_sym_parameter_list_repeat1,
  [1145] = 2,
    ACTIONS(222), 1,
      anon_sym_LPAREN,
    STATE(73), 1,
      sym_parameter_list,
  [1152] = 2,
    ACTIONS(224), 1,
      sym_identifier,
    ACTIONS(226), 1,
      anon_sym_RPAREN,
  [1159] = 1,
    ACTIONS(228), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1164] = 2,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(45), 1,
      sym_block,
  [1171] = 2,
    ACTIONS(230), 1,
      anon_sym_LBRACE,
    STATE(54), 1,
      sym_block,
  [1178] = 1,
    ACTIONS(232), 1,
      sym_identifier,
  [1182] = 1,
    ACTIONS(234), 1,
      sym_type_specifier,
  [1186] = 1,
    ACTIONS(236), 1,
      anon_sym_DASH_GT,
  [1190] = 1,
    ACTIONS(238), 1,
      anon_sym_DASH_GT,
  [1194] = 1,
    ACTIONS(240), 1,
      anon_sym_EQ,
  [1198] = 1,
    ACTIONS(242), 1,
      sym_type_specifier,
  [1202] = 1,
    ACTIONS(244), 1,
      anon_sym_DASH_GT,
  [1206] = 1,
    ACTIONS(246), 1,
      anon_sym_DASH_GT,
  [1210] = 1,
    ACTIONS(248), 1,
      anon_sym_EQ,
  [1214] = 1,
    ACTIONS(250), 1,
      sym_type_specifier,
  [1218] = 1,
    ACTIONS(252), 1,
      sym_identifier,
  [1222] = 1,
    ACTIONS(254), 1,
      ts_builtin_sym_end,
  [1226] = 1,
    ACTIONS(256), 1,
      anon_sym_EQ,
  [1230] = 1,
    ACTIONS(258), 1,
      sym_identifier,
  [1234] = 1,
    ACTIONS(260), 1,
      sym_type_specifier,
  [1238] = 1,
    ACTIONS(262), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 30,
  [SMALL_STATE(4)] = 60,
  [SMALL_STATE(5)] = 90,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 150,
  [SMALL_STATE(8)] = 173,
  [SMALL_STATE(9)] = 192,
  [SMALL_STATE(10)] = 213,
  [SMALL_STATE(11)] = 244,
  [SMALL_STATE(12)] = 275,
  [SMALL_STATE(13)] = 294,
  [SMALL_STATE(14)] = 321,
  [SMALL_STATE(15)] = 352,
  [SMALL_STATE(16)] = 371,
  [SMALL_STATE(17)] = 396,
  [SMALL_STATE(18)] = 424,
  [SMALL_STATE(19)] = 452,
  [SMALL_STATE(20)] = 480,
  [SMALL_STATE(21)] = 508,
  [SMALL_STATE(22)] = 531,
  [SMALL_STATE(23)] = 554,
  [SMALL_STATE(24)] = 577,
  [SMALL_STATE(25)] = 602,
  [SMALL_STATE(26)] = 625,
  [SMALL_STATE(27)] = 648,
  [SMALL_STATE(28)] = 673,
  [SMALL_STATE(29)] = 696,
  [SMALL_STATE(30)] = 719,
  [SMALL_STATE(31)] = 742,
  [SMALL_STATE(32)] = 765,
  [SMALL_STATE(33)] = 788,
  [SMALL_STATE(34)] = 811,
  [SMALL_STATE(35)] = 834,
  [SMALL_STATE(36)] = 857,
  [SMALL_STATE(37)] = 877,
  [SMALL_STATE(38)] = 891,
  [SMALL_STATE(39)] = 905,
  [SMALL_STATE(40)] = 919,
  [SMALL_STATE(41)] = 936,
  [SMALL_STATE(42)] = 953,
  [SMALL_STATE(43)] = 965,
  [SMALL_STATE(44)] = 977,
  [SMALL_STATE(45)] = 989,
  [SMALL_STATE(46)] = 1001,
  [SMALL_STATE(47)] = 1013,
  [SMALL_STATE(48)] = 1025,
  [SMALL_STATE(49)] = 1037,
  [SMALL_STATE(50)] = 1047,
  [SMALL_STATE(51)] = 1057,
  [SMALL_STATE(52)] = 1067,
  [SMALL_STATE(53)] = 1077,
  [SMALL_STATE(54)] = 1087,
  [SMALL_STATE(55)] = 1094,
  [SMALL_STATE(56)] = 1101,
  [SMALL_STATE(57)] = 1108,
  [SMALL_STATE(58)] = 1115,
  [SMALL_STATE(59)] = 1125,
  [SMALL_STATE(60)] = 1135,
  [SMALL_STATE(61)] = 1145,
  [SMALL_STATE(62)] = 1152,
  [SMALL_STATE(63)] = 1159,
  [SMALL_STATE(64)] = 1164,
  [SMALL_STATE(65)] = 1171,
  [SMALL_STATE(66)] = 1178,
  [SMALL_STATE(67)] = 1182,
  [SMALL_STATE(68)] = 1186,
  [SMALL_STATE(69)] = 1190,
  [SMALL_STATE(70)] = 1194,
  [SMALL_STATE(71)] = 1198,
  [SMALL_STATE(72)] = 1202,
  [SMALL_STATE(73)] = 1206,
  [SMALL_STATE(74)] = 1210,
  [SMALL_STATE(75)] = 1214,
  [SMALL_STATE(76)] = 1218,
  [SMALL_STATE(77)] = 1222,
  [SMALL_STATE(78)] = 1226,
  [SMALL_STATE(79)] = 1230,
  [SMALL_STATE(80)] = 1234,
  [SMALL_STATE(81)] = 1238,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(81),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(28),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(29),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(30),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 4),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 5),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [126] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [134] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(31),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 3, .production_id = 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(76),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 5),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 5),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, .production_id = 3),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, .production_id = 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 7),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 6),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 6),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 5),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [215] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(66),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 4),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 6),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 5),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [254] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_miac(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
