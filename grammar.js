const
    precenence = {
        unary: 6,
        multiplicative: 5,
        additive: 4,
        comparative: 3,
        and: 2,
        or: 1,
    },

    multiplicative_operators = ["*", "/"],
    additive_operators = ["+", "-"],
    comparative_operators = ["==", "!=", "<", "<=", ">", ">="],
    assignment_operators = ["="]

module.exports = grammar({
    name: "miac",

    word: $ => $.identifier,

    rules: {
        source_file: $ => repeat(choice(
            $._definition,
            $.variable_declaration,
        )),

        _definition: $ => choice(
            $.function_definition,
        ),

        _declaration: $ => choice(
            $.variable_declaration,
        ),

        _type: $ => choice(
            "i32",
            "f32",
            "string",
            "bool",
        ),

        _statement: $ => choice(
            $._declaration,
            $.assignment_statement,
            $.if_statement,
            $.while_statement,
            $.return_statement,
        ),

        _expression: $ => choice(
            $.identifier,
            $.unary_expression,
            $.binary_expression,
            $.call_expression,
            $.int_literal,
            $.float_literal,
            $.string_literal,
            $.boolean_literal,
        ),

        function_definition: $ => seq(
            "fn",
            field("name", $.identifier),
            field("parameters", $.parameter_list),
            "->",
            field("return_type", $._type),
            field("body", $.block),
        ),

        variable_declaration: $ => seq(
            field("mutability_specifier", choice("var", "const")),
            field("name", $.identifier),
            $.type_specifier,
            field("type", $._type),
            "=",
            field("value", $._expression),
            $.terminator,
        ),

        assignment_statement: $ => seq(
            $.identifier,
            field("operator", choice(...assignment_operators)),
            $._expression,
            $.terminator,
        ),

        if_statement: $ => seq(
            "if",
            field("condition", $._expression),
            field("body", $.block),
            optional(repeat($.elif_statement)),
            optional($.else_statement),
        ),

        elif_statement: $ => seq(
            "elif",
            field("condition", $._expression),
            field("body", $.block),
        ),

        else_statement: $ => seq(
            "else",
            field("body", $.block),
        ),

        while_statement: $ => seq(
            "while",
            field("condition", $._expression),
            field("body", $.block),
        ),

        return_statement: $ => seq(
            "return",
            $._expression,
            $.terminator,
        ),

        unary_expression: $ => prec(precenence.unary, seq(
            field("operator", choice("-", "!")),
            field("operand", $._expression),
        )),

        binary_expression: $ => {
            const variants = [
                [ precenence.additive, choice(...additive_operators) ],
                [ precenence.multiplicative, choice(...multiplicative_operators) ],
                [ precenence.comparative, choice(...comparative_operators) ],
                [ precenence.and, "&&" ],
                [ precenence.or, "||" ],
            ]

            return choice(...variants.map(([ p, op ]) => 
                prec.left(p, seq(
                    field("lhs", $._expression),
                    field("op", op),
                    field("rhs", $._expression),
                ))
            ));
        },

        call_expression: $ => prec(0, seq(
            field("name", $.identifier),
            "(",
            field("arguments", 
                sepBy(",", $._expression)
            ),
            ")",
        )),

        parameter_list: $ => seq(
            "(",
            sepBy(",", $.parameter),
            ")",
        ),

        parameter: $ => seq(
            field("name", $.identifier),
            $.type_specifier,
            field("type", $._type),
        ),

        block: $ => seq(
            "{",
            repeat($._statement),
            "}",
        ),

        type_specifier: _ => ":",
        terminator: _ => ";",
        identifier: _ => /[a-zA-Z_][a-zA-Z0-9_]*/,
        int_literal: _ => /[1-9][0-9]*|0/,
        float_literal: _ => /[0-9]+\.[0-9]*/,
        string_literal: _ => /"[^"]*"/,
        boolean_literal: _ => choice("true", "false"),
    }
});

function sepBy(separator, rule) {
    return optional(seq(rule, repeat(seq(separator, rule))));
}
