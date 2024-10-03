%{
    #include <stdio.h>
    extern int yylineno;
%}

%union {
    char* str;
    int num;
}

%start program
%token LET IDENTIFIER NUMBER STRING BOOLEAN ANY CONSOLE_LOG LBRACKET RBRACKET LBRACE RBRACE SINGLE_QUOTE DOUBLE_QUOTE COMMA LPARENTHESES RPARENTHESES IF ELSE WHILE DO DOT TRY CATCH FINALLY SWITCH CASE THROW NEW RETURN DEFAULT
%token COLON SEMICOLON ASSIGN ADD MINUS
%token <str> STRING_LITERAL
%token <num> NUMBER_LITERAL FLOAT_LITERAL
%token BOOLEAN_LITERAL ERROR_LITERAL

%%
program:
    declarations commands
;

//////////////// declararations ////////////////

declarations:
    declarations declaration
    | declaration
;

declaration:
    number_declaration
    | float_declaration
    | string_declaration
    | boolean_declaration
    | object_declaration
    | array_of_numbers_declaration
    | array_of_floats_declaration
    | array_of_strings_declaration
    | array_of_booleans_declaration
    | array_of_objects_declaration
    | console_log_declarations
    | increment_decrement_variable

;

console_log_declarations:
    CONSOLE_LOG LPARENTHESES STRING_LITERAL RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES IDENTIFIER ADD expressions RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES access_object RPARENTHESES SEMICOLON
;

all_possible_variables:
    NUMBER_LITERAL
    | array_of_numbers
    | FLOAT_LITERAL
    | array_of_floats
    | BOOLEAN_LITERAL
    | array_of_booleans
    | STRING_LITERAL
    | array_of_strings
    | objects
;


number_declaration: 
    LET IDENTIFIER COLON NUMBER ASSIGN NUMBER_LITERAL SEMICOLON;

array_of_numbers_declaration: 
    LET IDENTIFIER COLON NUMBER LBRACKET RBRACKET ASSIGN array_of_numbers SEMICOLON;

float_declaration: 
    LET IDENTIFIER COLON NUMBER ASSIGN FLOAT_LITERAL SEMICOLON;

array_of_floats_declaration: 
    LET IDENTIFIER COLON NUMBER LBRACKET RBRACKET ASSIGN array_of_floats SEMICOLON;

boolean_declaration: 
    LET IDENTIFIER COLON BOOLEAN ASSIGN BOOLEAN_LITERAL SEMICOLON;

array_of_booleans_declaration: 
    LET IDENTIFIER COLON BOOLEAN LBRACKET RBRACKET ASSIGN array_of_booleans SEMICOLON;

string_declaration: 
    LET IDENTIFIER COLON STRING ASSIGN STRING_LITERAL SEMICOLON;

array_of_strings_declaration: 
    LET IDENTIFIER COLON STRING LBRACKET RBRACKET ASSIGN array_of_strings SEMICOLON;

object_declaration: 
    LET IDENTIFIER COLON ANY ASSIGN LBRACE object_attribution RBRACE SEMICOLON
;

array_of_objects_declaration: 
    LET IDENTIFIER COLON ANY LBRACKET RBRACKET ASSIGN array_of_objects SEMICOLON
;

object_attribution:
    IDENTIFIER COLON STRING_LITERAL
    | IDENTIFIER COLON NUMBER_LITERAL
    | IDENTIFIER COLON FLOAT_LITERAL
    | IDENTIFIER COLON BOOLEAN_LITERAL
    | IDENTIFIER COLON access_object
    | IDENTIFIER COLON STRING_LITERAL COMMA object_attribution
    | IDENTIFIER COLON NUMBER_LITERAL COMMA object_attribution 
    | IDENTIFIER COLON FLOAT_LITERAL COMMA object_attribution 
    | IDENTIFIER COLON BOOLEAN_LITERAL COMMA object_attribution 
    | IDENTIFIER COLON access_object COMMA object_attribution
    | IDENTIFIER COLON LBRACE object_attribution RBRACE
    | /* empty */
;

array_of_numbers:
    LBRACKET numbers RBRACKET
;

numbers:
    NUMBER_LITERAL COMMA numbers
    | NUMBER_LITERAL

array_of_floats:
    LBRACKET floats RBRACKET
;

floats:
    FLOAT_LITERAL COMMA floats
    | FLOAT_LITERAL

array_of_booleans:
    LBRACKET booleans RBRACKET
;

booleans:
    BOOLEAN_LITERAL COMMA booleans
    | BOOLEAN_LITERAL

array_of_strings:
    LBRACKET strings RBRACKET
;

strings:
    STRING_LITERAL COMMA strings
    | STRING_LITERAL

array_of_objects:
    LBRACKET objects RBRACKET
;

objects:
    LBRACE object_attribution RBRACE COMMA objects
    | LBRACE object_attribution RBRACE
;

increment_decrement_variable:
    IDENTIFIER ADD ADD SEMICOLON
    | IDENTIFIER MINUS MINUS SEMICOLON
;

access_object:
    IDENTIFIER
    | IDENTIFIER DOT IDENTIFIER
    | IDENTIFIER DOT IDENTIFIER DOT access_object
    | IDENTIFIER LBRACKET STRING_LITERAL RBRACKET access_object_nested
;

access_object_nested:
    /* empty */
    | DOT IDENTIFIER access_object_nested
    | LBRACKET STRING_LITERAL RBRACKET access_object_nested
;

cases_of_switch_case:
    CASE NUMBER_LITERAL COLON RETURN all_possible_variables SEMICOLON cases_of_switch_case
    | CASE STRING_LITERAL COLON RETURN all_possible_variables SEMICOLON cases_of_switch_case
    | CASE access_object COLON RETURN all_possible_variables SEMICOLON cases_of_switch_case
    | /* empty */
;

default_case_of_switch_case: 
    DEFAULT COLON RETURN all_possible_variables SEMICOLON
;

//////////////// commands ////////////////

commands :
    command commands
    | declarations commands
    | /* empty */
;

command : 
    IF expressions LBRACE commands RBRACE
    | IF expressions LBRACE commands RBRACE ELSE LBRACE commands RBRACE
    | IF expressions LBRACE commands RBRACE ELSE IF expressions LBRACE commands RBRACE ELSE LBRACE commands RBRACE
    | WHILE expressions LBRACE commands RBRACE
    | DO LBRACE commands RBRACE WHILE expressions
    | THROW NEW ERROR_LITERAL LPARENTHESES expressions RPARENTHESES SEMICOLON
    | TRY LBRACE commands RBRACE CATCH expressions LBRACE commands RBRACE
    | TRY LBRACE commands RBRACE CATCH expressions LBRACE commands RBRACE FINALLY LBRACE commands RBRACE
    | SWITCH expressions LBRACE cases_of_switch_case default_case_of_switch_case RBRACE
;


expressions: 
    STRING_LITERAL
    | NUMBER_LITERAL
    | FLOAT_LITERAL
    | BOOLEAN_LITERAL
    | IDENTIFIER
    | STRING_LITERAL COLON ERROR_LITERAL
    | access_object
    | expressions '<' expressions
    | expressions '<' ASSIGN expressions
    | expressions ASSIGN ASSIGN expressions
    | expressions ASSIGN ASSIGN ASSIGN expressions
    | expressions '>' expressions
    | expressions '>' ASSIGN expressions
    | expressions ADD expressions
    | expressions MINUS expressions
    | expressions '*' expressions
    | expressions '/' expressions
    | expressions '^' expressions
    | expressions '%' expressions
    | expressions '|' expressions
    | expressions '|' '|' expressions
    | expressions '&' expressions
    | expressions '&' '&' expressions
    | LPARENTHESES expressions RPARENTHESES
;




%%
main( int argc, char *argv[] )
{
 if ( yyparse () == 0) printf("codigo sem erros \n");
}

yyerror (char *s) /* Called by yyparse on error */

{
printf ("%s  na linha %d\n", s, yylineno );
}
