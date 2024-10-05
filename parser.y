%{
    #include <stdio.h>
    extern int yylineno;
%}


%union {
    char* str;
    int num;
}

%start program
%token LET VAR CONST CLASS CONSTRUCTOR PRIVATE PUBLIC PROTECTED IDENTIFIER CLASS_IDENTIFIER NUMBER VOID STRING BOOLEAN ANY CONSOLE_LOG LBRACKET RBRACKET LBRACE RBRACE SINGLE_QUOTE DOUBLE_QUOTE COMMA LPARENTHESES RPARENTHESES IF ELSE WHILE DO DOT TRY CATCH FINALLY SWITCH CASE THROW NEW RETURN DEFAULT
%token THIS FUNCTION PROMISE
%token COLON SEMICOLON ASSIGN ADD MINUS
%token <str> STRING_LITERAL
%token <num> NUMBER_LITERAL FLOAT_LITERAL
%token BOOLEAN_LITERAL ERROR_LITERAL

%%
program: commands
;

//////////////// declararations ////////////////


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

variable_types:
    LET
    | VAR
    | CONST
;    


console_log_declarations:
    CONSOLE_LOG LPARENTHESES STRING_LITERAL RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES IDENTIFIER RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES IDENTIFIER ADD expressions RPARENTHESES SEMICOLON
    | CONSOLE_LOG LPARENTHESES STRING_LITERAL ADD expressions RPARENTHESES SEMICOLON
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

all_possible_variables_types:
    NUMBER
    | STRING
    | BOOLEAN
    | ANY
    | BOOLEAN_LITERAL
    | LBRACE RBRACE
    | VOID
;


number_declaration: 
    variable_types IDENTIFIER COLON NUMBER ASSIGN NUMBER_LITERAL SEMICOLON;

array_of_numbers_declaration: 
    variable_types IDENTIFIER COLON NUMBER LBRACKET RBRACKET ASSIGN array_of_numbers SEMICOLON;

float_declaration: 
    variable_types IDENTIFIER COLON NUMBER ASSIGN FLOAT_LITERAL SEMICOLON;

array_of_floats_declaration: 
    variable_types IDENTIFIER COLON NUMBER LBRACKET RBRACKET ASSIGN array_of_floats SEMICOLON;

boolean_declaration: 
    variable_types IDENTIFIER COLON BOOLEAN ASSIGN BOOLEAN_LITERAL SEMICOLON;

array_of_booleans_declaration: 
    variable_types IDENTIFIER COLON BOOLEAN LBRACKET RBRACKET ASSIGN array_of_booleans SEMICOLON;

string_declaration: 
    variable_types IDENTIFIER COLON STRING ASSIGN STRING_LITERAL SEMICOLON;

array_of_strings_declaration: 
    variable_types IDENTIFIER COLON STRING LBRACKET RBRACKET ASSIGN array_of_strings SEMICOLON;

object_declaration: 
    variable_types IDENTIFIER COLON ANY ASSIGN LBRACE object_attribution RBRACE SEMICOLON
;

array_of_objects_declaration: 
    variable_types IDENTIFIER COLON ANY LBRACKET RBRACKET ASSIGN array_of_objects SEMICOLON
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
    | IDENTIFIER DOT access_object
    | IDENTIFIER LBRACKET STRING_LITERAL RBRACKET access_object_nested
    | IDENTIFIER LBRACKET STRING_LITERAL RBRACKET 
;

access_object_nested:
    DOT IDENTIFIER
    | LBRACKET STRING_LITERAL RBRACKET 
    | DOT IDENTIFIER DOT access_object
    | LBRACKET STRING_LITERAL RBRACKET access_object_nested
;

access_class:
    THIS DOT IDENTIFIER
    | THIS DOT IDENTIFIER DOT access_object
    | THIS LBRACKET STRING_LITERAL RBRACKET access_object_nested
    | THIS LBRACKET STRING_LITERAL RBRACKET 
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
    | declaration commands
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
    | function_declarartion
    | RETURN expressions SEMICOLON
    | class_declarations 
;

expressions: 
    STRING_LITERAL
    | NUMBER_LITERAL
    | FLOAT_LITERAL
    | BOOLEAN_LITERAL
    | STRING_LITERAL COLON ERROR_LITERAL
    | access_object
    | access_class
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

function_declarartion:
    FUNCTION IDENTIFIER LPARENTHESES function_parameters RPARENTHESES COLON all_possible_variables_types LBRACE commands RBRACE
;

function_parameters:
    /* empty */
    | IDENTIFIER COLON all_possible_variables_types
    | IDENTIFIER COLON all_possible_variables_types COMMA function_parameters
;

class_declarations: 
    CLASS CLASS_IDENTIFIER LBRACE class_attributes constructor_definition class_attributes RBRACE
;

class_attributes:
    class_attribute_declaration class_attributes
    | class_function_declarartion class_attributes
    | /* empty */
;

class_attribute_declaration:
    access_modifiers IDENTIFIER COLON all_possible_variables_types initialize_class_attribute_value SEMICOLON
    | IDENTIFIER COLON all_possible_variables_types initialize_class_attribute_value SEMICOLON
;

initialize_class_attribute_value:
    ASSIGN all_possible_variables 
    | /* empty */
;

access_modifiers: 
    PUBLIC
    | PRIVATE
    | PROTECTED
;

constructor_definition:
    CONSTRUCTOR LPARENTHESES function_parameters RPARENTHESES LBRACE set_property_with_this RBRACE
    | /* empty */
;

set_property_with_this:
    THIS DOT IDENTIFIER ASSIGN IDENTIFIER SEMICOLON set_property_with_this
    | /* empty */
;

class_function_declarartion:
    IDENTIFIER LPARENTHESES function_parameters RPARENTHESES COLON all_possible_variables_types LBRACE commands RBRACE
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
