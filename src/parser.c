#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 91
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 14
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 12

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
  sym_call_expression = 57,
  sym_parameter_list = 58,
  sym_parameter = 59,
  sym_block = 60,
  sym_boolean_literal = 61,
  aux_sym_source_file_repeat1 = 62,
  aux_sym_if_statement_repeat1 = 63,
  aux_sym_call_expression_repeat1 = 64,
  aux_sym_parameter_list_repeat1 = 65,
  aux_sym_block_repeat1 = 66,
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
  [sym_call_expression] = "call_expression",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_if_statement_repeat1] = "if_statement_repeat1",
  [aux_sym_call_expression_repeat1] = "call_expression_repeat1",
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
  [sym_call_expression] = sym_call_expression,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_if_statement_repeat1] = aux_sym_if_statement_repeat1,
  [aux_sym_call_expression_repeat1] = aux_sym_call_expression_repeat1,
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
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
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
  [aux_sym_call_expression_repeat1] = {
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
  field_arguments = 1,
  field_body = 2,
  field_condition = 3,
  field_lhs = 4,
  field_mutability_specifier = 5,
  field_name = 6,
  field_op = 7,
  field_operand = 8,
  field_operator = 9,
  field_parameters = 10,
  field_return_type = 11,
  field_rhs = 12,
  field_type = 13,
  field_value = 14,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_arguments] = "arguments",
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
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 2},
  [4] = {.index = 8, .length = 4},
  [5] = {.index = 12, .length = 1},
  [6] = {.index = 13, .length = 3},
  [7] = {.index = 16, .length = 2},
  [8] = {.index = 18, .length = 2},
  [9] = {.index = 20, .length = 1},
  [10] = {.index = 21, .length = 3},
  [11] = {.index = 24, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
    {field_type, 2},
  [2] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [6] =
    {field_operand, 1},
    {field_operator, 0},
  [8] =
    {field_mutability_specifier, 0},
    {field_name, 1},
    {field_type, 3},
    {field_value, 5},
  [12] =
    {field_name, 0},
  [13] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [16] =
    {field_body, 2},
    {field_condition, 1},
  [18] =
    {field_arguments, 2},
    {field_name, 0},
  [20] =
    {field_operator, 1},
  [21] =
    {field_arguments, 2},
    {field_arguments, 3},
    {field_name, 0},
  [24] =
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
  [15] = 13,
  [16] = 16,
  [17] = 17,
  [18] = 14,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 27,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 29,
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
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 57,
  [61] = 52,
  [62] = 62,
  [63] = 45,
  [64] = 47,
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
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 82,
  [89] = 77,
  [90] = 87,
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
      if (lookahead == '0') ADVANCE(38);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(7);
      if (lookahead == '&') ADVANCE(4);
      if (lookahead == '(') ADVANCE(30);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '*') ADVANCE(20);
      if (lookahead == '+') ADVANCE(19);
      if (lookahead == ',') ADVANCE(31);
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
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(41);
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
      if (lookahead == '.') ADVANCE(40);
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
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_int_literal);
      if (lookahead == '.') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_float_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(40);
      END_STATE();
    case 41:
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
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 2},
  [24] = {.lex_state = 2},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 2},
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
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 5},
  [79] = {.lex_state = 5},
  [80] = {.lex_state = 5},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 5},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
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
    [sym_source_file] = STATE(85),
    [sym__definition] = STATE(48),
    [sym_function_definition] = STATE(48),
    [sym_variable_declaration] = STATE(48),
    [aux_sym_source_file_repeat1] = STATE(48),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_fn] = ACTIONS(5),
    [anon_sym_var] = ACTIONS(7),
    [anon_sym_const] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(9), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [24] = 2,
    ACTIONS(17), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(15), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [45] = 2,
    ACTIONS(21), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(19), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [66] = 2,
    ACTIONS(25), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(23), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [87] = 6,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 5,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [116] = 5,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(37), 6,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [143] = 4,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 10,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [168] = 2,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [189] = 3,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(39), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(37), 12,
      anon_sym_DASH,
      anon_sym_PLUS,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_AMP_AMP,
      anon_sym_PIPE_PIPE,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [212] = 2,
    ACTIONS(43), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(41), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [233] = 2,
    ACTIONS(47), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(45), 14,
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
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_LBRACE,
      sym_terminator,
  [254] = 7,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(59), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(18), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [284] = 7,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(61), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(17), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [314] = 7,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(63), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(14), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [344] = 9,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      aux_sym_call_expression_repeat1,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [378] = 7,
    ACTIONS(71), 1,
      sym_identifier,
    ACTIONS(77), 1,
      anon_sym_if,
    ACTIONS(80), 1,
      anon_sym_while,
    ACTIONS(83), 1,
      anon_sym_return,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    ACTIONS(74), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(17), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [408] = 7,
    ACTIONS(49), 1,
      sym_identifier,
    ACTIONS(53), 1,
      anon_sym_if,
    ACTIONS(55), 1,
      anon_sym_while,
    ACTIONS(57), 1,
      anon_sym_return,
    ACTIONS(88), 1,
      anon_sym_RBRACE,
    ACTIONS(51), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(17), 8,
      sym__declaration,
      sym__statement,
      sym_variable_declaration,
      sym_assignment_statement,
      sym_if_statement,
      sym_while_statement,
      sym_return_statement,
      aux_sym_block_repeat1,
  [438] = 7,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(90), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [467] = 8,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(43), 1,
      sym_block,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [498] = 8,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(55), 1,
      sym_block,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [529] = 8,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(46), 1,
      sym_block,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [560] = 7,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_RPAREN,
    ACTIONS(100), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(102), 2,
      sym_float_literal,
      sym_string_literal,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(16), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [589] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(106), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(108), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(22), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [615] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(110), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(112), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(6), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [641] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(114), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(116), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(19), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [667] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(118), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(120), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(32), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [693] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(122), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(124), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(29), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [719] = 7,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(126), 1,
      sym_terminator,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [747] = 7,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(128), 1,
      sym_terminator,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [775] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(130), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(132), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(3), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [801] = 7,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(134), 1,
      sym_terminator,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [829] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(138), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(20), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [855] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(140), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(142), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(21), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [881] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(144), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(146), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(37), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [907] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(148), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(150), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(30), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [933] = 7,
    ACTIONS(35), 1,
      anon_sym_AMP_AMP,
    ACTIONS(65), 1,
      anon_sym_PIPE_PIPE,
    ACTIONS(152), 1,
      sym_terminator,
    ACTIONS(27), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(29), 2,
      anon_sym_STAR,
      anon_sym_SLASH,
    ACTIONS(33), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(31), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [961] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(154), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(156), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(10), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [987] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(158), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(160), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(9), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [1013] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(162), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(164), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(8), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [1039] = 6,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(166), 1,
      sym_int_literal,
    ACTIONS(96), 2,
      anon_sym_DASH,
      anon_sym_BANG,
    ACTIONS(104), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(168), 2,
      sym_float_literal,
      sym_string_literal,
    STATE(7), 5,
      sym__expression,
      sym_unary_expression,
      sym_binary_expression,
      sym_call_expression,
      sym_boolean_literal,
  [1065] = 6,
    ACTIONS(172), 1,
      anon_sym_elif,
    ACTIONS(174), 1,
      anon_sym_else,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(56), 1,
      sym_else_statement,
    STATE(44), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(170), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1090] = 6,
    ACTIONS(172), 1,
      anon_sym_elif,
    ACTIONS(174), 1,
      anon_sym_else,
    ACTIONS(180), 1,
      anon_sym_RBRACE,
    STATE(53), 1,
      sym_else_statement,
    STATE(42), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(178), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1115] = 4,
    ACTIONS(184), 1,
      anon_sym_elif,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(44), 2,
      sym_elif_statement,
      aux_sym_if_statement_repeat1,
    ACTIONS(182), 7,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1135] = 2,
    ACTIONS(191), 1,
      anon_sym_RBRACE,
    ACTIONS(189), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1149] = 2,
    ACTIONS(195), 1,
      anon_sym_RBRACE,
    ACTIONS(193), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1163] = 2,
    ACTIONS(199), 1,
      anon_sym_RBRACE,
    ACTIONS(197), 8,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_elif,
      anon_sym_else,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1177] = 4,
    ACTIONS(5), 1,
      anon_sym_fn,
    ACTIONS(201), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(49), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [1194] = 4,
    ACTIONS(203), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 1,
      anon_sym_fn,
    ACTIONS(208), 2,
      anon_sym_var,
      anon_sym_const,
    STATE(49), 4,
      sym__definition,
      sym_function_definition,
      sym_variable_declaration,
      aux_sym_source_file_repeat1,
  [1211] = 2,
    ACTIONS(213), 1,
      anon_sym_RBRACE,
    ACTIONS(211), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1223] = 2,
    ACTIONS(217), 1,
      anon_sym_RBRACE,
    ACTIONS(215), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1235] = 2,
    ACTIONS(221), 1,
      anon_sym_RBRACE,
    ACTIONS(219), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1247] = 2,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(170), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1259] = 2,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    ACTIONS(223), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1271] = 2,
    ACTIONS(229), 1,
      anon_sym_RBRACE,
    ACTIONS(227), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1283] = 2,
    ACTIONS(233), 1,
      anon_sym_RBRACE,
    ACTIONS(231), 6,
      anon_sym_var,
      anon_sym_const,
      anon_sym_if,
      anon_sym_while,
      anon_sym_return,
      sym_identifier,
  [1295] = 2,
    STATE(82), 1,
      sym__type,
    ACTIONS(235), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1305] = 2,
    STATE(73), 1,
      sym__type,
    ACTIONS(237), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1315] = 2,
    STATE(76), 1,
      sym__type,
    ACTIONS(239), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1325] = 2,
    STATE(88), 1,
      sym__type,
    ACTIONS(241), 4,
      anon_sym_i32,
      anon_sym_f32,
      anon_sym_string,
      anon_sym_bool,
  [1335] = 1,
    ACTIONS(221), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1342] = 1,
    ACTIONS(243), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1349] = 1,
    ACTIONS(191), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1356] = 1,
    ACTIONS(199), 4,
      ts_builtin_sym_end,
      anon_sym_fn,
      anon_sym_var,
      anon_sym_const,
  [1363] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(247), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [1373] = 3,
    ACTIONS(245), 1,
      anon_sym_COMMA,
    ACTIONS(249), 1,
      anon_sym_RPAREN,
    STATE(65), 1,
      aux_sym_parameter_list_repeat1,
  [1383] = 3,
    ACTIONS(251), 1,
      anon_sym_COMMA,
    ACTIONS(254), 1,
      anon_sym_RPAREN,
    STATE(67), 1,
      aux_sym_parameter_list_repeat1,
  [1393] = 3,
    ACTIONS(256), 1,
      sym_identifier,
    ACTIONS(258), 1,
      anon_sym_RPAREN,
    STATE(66), 1,
      sym_parameter,
  [1403] = 3,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(260), 1,
      anon_sym_RPAREN,
    STATE(70), 1,
      aux_sym_call_expression_repeat1,
  [1413] = 3,
    ACTIONS(90), 1,
      anon_sym_RPAREN,
    ACTIONS(262), 1,
      anon_sym_COMMA,
    STATE(70), 1,
      aux_sym_call_expression_repeat1,
  [1423] = 2,
    ACTIONS(265), 1,
      anon_sym_LPAREN,
    STATE(79), 1,
      sym_parameter_list,
  [1430] = 2,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
    STATE(50), 1,
      sym_block,
  [1437] = 2,
    ACTIONS(267), 1,
      anon_sym_LBRACE,
    STATE(62), 1,
      sym_block,
  [1444] = 2,
    ACTIONS(256), 1,
      sym_identifier,
    STATE(75), 1,
      sym_parameter,
  [1451] = 1,
    ACTIONS(254), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1456] = 1,
    ACTIONS(269), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [1461] = 1,
    ACTIONS(271), 1,
      sym_type_specifier,
  [1465] = 1,
    ACTIONS(273), 1,
      anon_sym_DASH_GT,
  [1469] = 1,
    ACTIONS(275), 1,
      anon_sym_DASH_GT,
  [1473] = 1,
    ACTIONS(277), 1,
      anon_sym_DASH_GT,
  [1477] = 1,
    ACTIONS(279), 1,
      sym_type_specifier,
  [1481] = 1,
    ACTIONS(281), 1,
      anon_sym_EQ,
  [1485] = 1,
    ACTIONS(283), 1,
      sym_identifier,
  [1489] = 1,
    ACTIONS(285), 1,
      anon_sym_EQ,
  [1493] = 1,
    ACTIONS(287), 1,
      ts_builtin_sym_end,
  [1497] = 1,
    ACTIONS(289), 1,
      anon_sym_DASH_GT,
  [1501] = 1,
    ACTIONS(291), 1,
      sym_identifier,
  [1505] = 1,
    ACTIONS(293), 1,
      anon_sym_EQ,
  [1509] = 1,
    ACTIONS(295), 1,
      sym_type_specifier,
  [1513] = 1,
    ACTIONS(297), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 45,
  [SMALL_STATE(5)] = 66,
  [SMALL_STATE(6)] = 87,
  [SMALL_STATE(7)] = 116,
  [SMALL_STATE(8)] = 143,
  [SMALL_STATE(9)] = 168,
  [SMALL_STATE(10)] = 189,
  [SMALL_STATE(11)] = 212,
  [SMALL_STATE(12)] = 233,
  [SMALL_STATE(13)] = 254,
  [SMALL_STATE(14)] = 284,
  [SMALL_STATE(15)] = 314,
  [SMALL_STATE(16)] = 344,
  [SMALL_STATE(17)] = 378,
  [SMALL_STATE(18)] = 408,
  [SMALL_STATE(19)] = 438,
  [SMALL_STATE(20)] = 467,
  [SMALL_STATE(21)] = 498,
  [SMALL_STATE(22)] = 529,
  [SMALL_STATE(23)] = 560,
  [SMALL_STATE(24)] = 589,
  [SMALL_STATE(25)] = 615,
  [SMALL_STATE(26)] = 641,
  [SMALL_STATE(27)] = 667,
  [SMALL_STATE(28)] = 693,
  [SMALL_STATE(29)] = 719,
  [SMALL_STATE(30)] = 747,
  [SMALL_STATE(31)] = 775,
  [SMALL_STATE(32)] = 801,
  [SMALL_STATE(33)] = 829,
  [SMALL_STATE(34)] = 855,
  [SMALL_STATE(35)] = 881,
  [SMALL_STATE(36)] = 907,
  [SMALL_STATE(37)] = 933,
  [SMALL_STATE(38)] = 961,
  [SMALL_STATE(39)] = 987,
  [SMALL_STATE(40)] = 1013,
  [SMALL_STATE(41)] = 1039,
  [SMALL_STATE(42)] = 1065,
  [SMALL_STATE(43)] = 1090,
  [SMALL_STATE(44)] = 1115,
  [SMALL_STATE(45)] = 1135,
  [SMALL_STATE(46)] = 1149,
  [SMALL_STATE(47)] = 1163,
  [SMALL_STATE(48)] = 1177,
  [SMALL_STATE(49)] = 1194,
  [SMALL_STATE(50)] = 1211,
  [SMALL_STATE(51)] = 1223,
  [SMALL_STATE(52)] = 1235,
  [SMALL_STATE(53)] = 1247,
  [SMALL_STATE(54)] = 1259,
  [SMALL_STATE(55)] = 1271,
  [SMALL_STATE(56)] = 1283,
  [SMALL_STATE(57)] = 1295,
  [SMALL_STATE(58)] = 1305,
  [SMALL_STATE(59)] = 1315,
  [SMALL_STATE(60)] = 1325,
  [SMALL_STATE(61)] = 1335,
  [SMALL_STATE(62)] = 1342,
  [SMALL_STATE(63)] = 1349,
  [SMALL_STATE(64)] = 1356,
  [SMALL_STATE(65)] = 1363,
  [SMALL_STATE(66)] = 1373,
  [SMALL_STATE(67)] = 1383,
  [SMALL_STATE(68)] = 1393,
  [SMALL_STATE(69)] = 1403,
  [SMALL_STATE(70)] = 1413,
  [SMALL_STATE(71)] = 1423,
  [SMALL_STATE(72)] = 1430,
  [SMALL_STATE(73)] = 1437,
  [SMALL_STATE(74)] = 1444,
  [SMALL_STATE(75)] = 1451,
  [SMALL_STATE(76)] = 1456,
  [SMALL_STATE(77)] = 1461,
  [SMALL_STATE(78)] = 1465,
  [SMALL_STATE(79)] = 1469,
  [SMALL_STATE(80)] = 1473,
  [SMALL_STATE(81)] = 1477,
  [SMALL_STATE(82)] = 1481,
  [SMALL_STATE(83)] = 1485,
  [SMALL_STATE(84)] = 1489,
  [SMALL_STATE(85)] = 1493,
  [SMALL_STATE(86)] = 1497,
  [SMALL_STATE(87)] = 1501,
  [SMALL_STATE(88)] = 1505,
  [SMALL_STATE(89)] = 1509,
  [SMALL_STATE(90)] = 1513,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2, .production_id = 3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 5, .production_id = 10),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 5, .production_id = 10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 4, .production_id = 8),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 6),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 3, .production_id = 5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(84),
  [74] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(90),
  [77] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(33),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(34),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(35),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [136] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [158] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [162] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [166] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 7),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 7),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_if_statement_repeat1, 2), SHIFT_REPEAT(24),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_if_statement_repeat1, 2),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_elif_statement, 3, .production_id = 7),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_elif_statement, 3, .production_id = 7),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(83),
  [208] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(87),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_statement, 2, .production_id = 11),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_statement, 2, .production_id = 11),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment_statement, 4, .production_id = 9),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment_statement, 4, .production_id = 9),
  [219] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variable_declaration, 7, .production_id = 4),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variable_declaration, 7, .production_id = 4),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 7),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 7),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 5, .production_id = 7),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 5, .production_id = 7),
  [235] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [237] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [239] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [241] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_definition, 6, .production_id = 2),
  [245] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [247] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [249] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2), SHIFT_REPEAT(74),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameter_list_repeat1, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [262] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_call_expression_repeat1, 2), SHIFT_REPEAT(26),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 1),
  [271] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [287] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter_list, 4),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
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
