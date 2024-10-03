%{
    #include <stdio.h>
    extern int yylineno;
%}

%union {
    char* str;
    int num;
}

%start program
%token LET IDENTIFIER NUMBER STRING BOOLEAN ANY CONSOLE_LOG LBRACKET RBRACKET LBRACE RBRACE SINGLE_QUOTE DOUBLE_QUOTE COMMA LPARENTHESES RPARENTHESES IF
%token COLON SEMICOLON ASSIGN
%token <str> STRING_LITERAL
%token <num> NUMBER_LITERAL FLOAT_LITERAL
%token BOOLEAN_LITERAL

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

;

console_log_declarations:
    CONSOLE_LOG LPARENTHESES STRING_LITERAL RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON 
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
    | IDENTIFIER COLON STRING_LITERAL COMMA object_attribution
    | IDENTIFIER COLON NUMBER_LITERAL COMMA object_attribution 
    | IDENTIFIER COLON FLOAT_LITERAL COMMA object_attribution 
    | IDENTIFIER COLON BOOLEAN_LITERAL COMMA object_attribution 
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

//////////////// commands ////////////////

commands :
    command commands
    | /* empty */
;

command : 
    IF exp LBRACE commands RBRACE
;


exp : 
    STRING_LITERAL
    | NUMBER_LITERAL
    | FLOAT_LITERAL
    | BOOLEAN_LITERAL
    | IDENTIFIER
    | exp '<' exp
    | exp '<' ASSIGN exp
    | exp ASSIGN ASSIGN exp
    | exp ASSIGN ASSIGN ASSIGN exp
    | exp '>' exp
    | exp '>' ASSIGN exp
    | exp '+' exp
    | exp '-' exp
    | exp '*' exp
    | exp '/' exp
    | exp '^' exp
    | LPARENTHESES exp RPARENTHESES
;




%%
main( int argc, char *argv[] )
{
 if ( yyparse () == 0) printf("codigo sem erros");
}

yyerror (char *s) /* Called by yyparse on error */

{
printf ("%s  na linha %d\n", s, yylineno );
}
