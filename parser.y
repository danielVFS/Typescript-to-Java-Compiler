%{
    #include <stdio.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>
    #include "sym.h"
    #define ASSERT(x,y) if(!(x)) printf("%s na  linha %d\n",(y),yylineno)
    extern int yylineno;
    FILE * output;

    char identifierDefined[100];
%}

%union {
    char * ystr;
    int   yint;
    float yfloat;
}

%start program
%token VAR CONST CLASS CONSTRUCTOR PRIVATE PUBLIC PROTECTED NUMBER VOID STRING BOOLEAN ANY CONSOLE_LOG LBRACKET RBRACKET LBRACE RBRACE SINGLE_QUOTE DOUBLE_QUOTE COMMA LPARENTHESES RPARENTHESES IF ELSE WHILE DO DOT TRY CATCH FINALLY SWITCH CASE THROW NEW RETURN DEFAULT
%token THIS FUNCTION PROMISE
%token COLON SEMICOLON ASSIGN ADD MINUS
%token <ystr> IDENTIFIER
%token <ystr> CLASS_IDENTIFIER
%token <ystr> LET
%token <ystr> STRING_LITERAL
%token <yint> NUMBER_LITERAL
%token <yfloat> FLOAT_LITERAL
%token <ystr> BOOLEAN_LITERAL
%token ERROR_LITERAL

%%
program: commands
;

//////////////// declararations ////////////////


declaration:
    variable_types IDENTIFIER {strcpy(identifierDefined,$2);} COLON possible_declarations
    | console_log_declarations
    | increment_decrement_variable
    | instance_new_class
;

possible_declarations:
    number_declaration
    | string_declaration
    | boolean_declaration
;


variable_types:
    LET 
    | VAR 
    | CONST
;   

console_log_declarations:
    console_log_left_common STRING_LITERAL { fprintf(output, "%s", $2); } console_log_declaration_with_add console_log_right_common
    | console_log_left_common access_object console_log_declaration_with_add console_log_right_common
;

console_log_left_common:
    CONSOLE_LOG LPARENTHESES { fprintf(output, "System.out.pritln("); }
;

console_log_right_common:
    RPARENTHESES SEMICOLON { fprintf(output, ");"); }
;

console_log_declaration_with_add:
    ADD { fprintf(output, " + "); } expressions console_log_right_common
    | /* empty */
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

////////

number_declaration: 
    NUMBER number_or_array_declaration
;

number_or_array_declaration:
    LBRACKET RBRACKET ASSIGN array_of_numbers_and_floats_declaration SEMICOLON { fprintf(output,";");}
    | ASSIGN number_or_float_declaration SEMICOLON { fprintf(output,";");}

number_or_float_declaration:
    NUMBER_LITERAL { fprintf(output,"int %s = %d", identifierDefined, $1);}
    | FLOAT_LITERAL { fprintf(output,"double %s = %f", identifierDefined, $1);}
;

array_of_numbers_and_floats_declaration:
    array_of_numbers
    | array_of_floats 
;

////////

string_declaration: 
    STRING string_or_array_of_strings_declaration SEMICOLON { fprintf(output,";");}
;

string_or_array_of_strings_declaration:
    ASSIGN STRING_LITERAL { fprintf(output,"String %s = %s", identifierDefined, $2);}
    | LBRACKET RBRACKET ASSIGN { fprintf(output,"String[] %s =", identifierDefined);} array_of_strings
;

////////

boolean_declaration: 
    BOOLEAN boolean_or_array_of_booleans_declaration SEMICOLON { fprintf(output,";");}
;

boolean_or_array_of_booleans_declaration:
    ASSIGN BOOLEAN_LITERAL { fprintf(output,"boolean %s = %s", identifierDefined, $2);}
    | LBRACKET RBRACKET ASSIGN { fprintf(output,"booleans[] %s =", identifierDefined);} array_of_booleans
;

////////

object_declaration: 
    variable_types IDENTIFIER COLON ANY ASSIGN LBRACE object_attribution RBRACE SEMICOLON
    | variable_types IDENTIFIER COLON CLASS_IDENTIFIER ASSIGN LBRACE object_attribution RBRACE SEMICOLON
;

array_of_objects_declaration:
    variable_types IDENTIFIER COLON ANY LBRACKET RBRACKET ASSIGN array_of_objects SEMICOLON
;

////////

instance_new_class:
    variable_types IDENTIFIER ASSIGN NEW CLASS_IDENTIFIER LPARENTHESES function_values RPARENTHESES SEMICOLON;

////////

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

////////

array_of_numbers:
    LBRACKET { fprintf(output, "int[] %s = {", identifierDefined); } numbers RBRACKET { fprintf(output, "}"); }
;

numbers:
    NUMBER_LITERAL COMMA { fprintf(output, "%d,", $1); } numbers
    | NUMBER_LITERAL { fprintf(output, "%d", $1); }

array_of_floats:
    LBRACKET { fprintf(output, "double[] %s = {", identifierDefined); } floats RBRACKET { fprintf(output, "}"); }
;

floats:
    FLOAT_LITERAL COMMA { fprintf(output, "%f,", $1); } floats
    | FLOAT_LITERAL  { fprintf(output, "%f,", $1); }

array_of_booleans:
    LBRACKET { fprintf(output, "{"); } booleans RBRACKET { fprintf(output, "}"); }
;

booleans:
    BOOLEAN_LITERAL COMMA { fprintf(output, "%s,", $1); } booleans
    | BOOLEAN_LITERAL { fprintf(output, "%s", $1); }

array_of_strings:
    LBRACKET { fprintf(output, "{"); } strings RBRACKET { fprintf(output, "}"); }
;

strings:
    STRING_LITERAL COMMA { fprintf(output, "%s,", $1); } strings
    | STRING_LITERAL { fprintf(output, "%s", $1); }

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
    IDENTIFIER { fprintf(output, "%s", $1); }
    | IDENTIFIER DOT { fprintf(output, "%s.", $1); } access_object 
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
    | WHILE LPARENTHESES { fprintf(output, "while("); } expressions RPARENTHESES LBRACE { fprintf(output, "){"); } commands RBRACE { fprintf(output, "}"); }
    | DO LBRACE commands RBRACE WHILE expressions
    | THROW NEW ERROR_LITERAL LPARENTHESES expressions RPARENTHESES SEMICOLON
    | TRY LBRACE commands RBRACE CATCH expressions LBRACE commands RBRACE
    | TRY LBRACE commands RBRACE CATCH expressions LBRACE commands RBRACE FINALLY LBRACE commands RBRACE
    | SWITCH expressions LBRACE cases_of_switch_case default_case_of_switch_case RBRACE
    | function_declarartion
    | call_a_function
    | RETURN expressions SEMICOLON
    | class_declarations 
;

expressions: 
    STRING_LITERAL { fprintf(output, "%s", $1); }
    | NUMBER_LITERAL { fprintf(output, "%d", $1); }
    | FLOAT_LITERAL
    | BOOLEAN_LITERAL
    | STRING_LITERAL COLON ERROR_LITERAL
    | access_object
    | access_class
    | expressions '<' expressions
    | expressions '<' ASSIGN expressions
    | expressions ASSIGN ASSIGN expressions
    | expressions ASSIGN ASSIGN ASSIGN expressions
    | expressions '>' { fprintf(output, ">"); } expressions
    | expressions '>' ASSIGN { fprintf(output, ">="); } expressions
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

call_a_function:
    IDENTIFIER LPARENTHESES all_possible_variables RPARENTHESES SEMICOLON
    | IDENTIFIER LPARENTHESES all_possible_variables COMMA function_values RPARENTHESES SEMICOLON
;

function_values:
    all_possible_variables
    | all_possible_variables COMMA function_values

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
    init_stringpool(10000);
    output = fopen("output.java","w");
    if ( yyparse () == 0) printf("codigo sem erros \n");
}

yyerror (char *s) /* Called by yyparse on error */

{
printf ("%s  na linha %d\n", s, yylineno );
}
