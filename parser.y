%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>
    #include "sym.h"
    #define ASSERT(x,y) if(!(x)) printf("%s na  linha %d\n",(y),yylineno)
    extern int yylineno;
    FILE * output;

    char identifierDefined[100];

   char* remove_quotes(char* str) {
        int len = strlen(str);
        str[len-1] = '\0';
        return stringpool(str+1);
    }
%}

%union {
    char * ystr;
    int   yint;
    float yfloat;
}

%start program
%token VAR CONST CLASS CONSTRUCTOR PRIVATE PUBLIC PROTECTED NUMBER VOID STRING BOOLEAN ANY CONSOLE_LOG LBRACKET RBRACKET LBRACE RBRACE SINGLE_QUOTE DOUBLE_QUOTE COMMA LPARENTHESES RPARENTHESES IF ELSE WHILE DO DOT TRY CATCH FINALLY SWITCH CASE THROW NEW RETURN DEFAULT
%token THIS FUNCTION PROMISE INSTANCEOF FOR BREAK CONTINUE OF
%token COLON SEMICOLON ASSIGN ADD MINUS
%token <ystr> IDENTIFIER
%token <ystr> CLASS_IDENTIFIER
%token <ystr> LET
%token <ystr> STRING_LITERAL
%token <yint> NUMBER_LITERAL
%token <yfloat> FLOAT_LITERAL
%token <ystr> BOOLEAN_LITERAL

%type <ystr> error_to_catch
%type <ystr> all_possible_variables_types

%%
program: commands
;

//////////////// declararations ////////////////


declaration:
    variable_types IDENTIFIER {strcpy(identifierDefined,$2);} COLON possible_declarations
    | console_log_declarations
    | increment_decrement_variable SEMICOLON { fprintf(output, ";"); }
    | set_value_on_class
    | instance_new_class
    | function_declarartion
    | class_declarations 
;

instance_new_class:
    variable_types IDENTIFIER ASSIGN NEW CLASS_IDENTIFIER LPARENTHESES { fprintf(output, "%s %s = new %s(", $5, $2, $5); } function_values RPARENTHESES SEMICOLON { fprintf(output, ");"); } ;

possible_declarations:
    number_declaration
    | string_declaration
    | boolean_declaration
    | object_declaration
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
    CONSOLE_LOG LPARENTHESES { fprintf(output, "System.out.println("); }
;

console_log_right_common:
    RPARENTHESES SEMICOLON { fprintf(output, ");"); }
;

console_log_declaration_with_add:
    ADD { fprintf(output, " + "); } expressions console_log_right_common
    | /* empty */
;

all_possible_variables:
    NUMBER_LITERAL { fprintf(output,"%d", $1);}
    | FLOAT_LITERAL { fprintf(output,"%d", $1);}
    | BOOLEAN_LITERAL { fprintf(output,"%s", $1);}
    | STRING_LITERAL { fprintf(output,"%s", $1);}
    | array_of_strings
    | array_of_numbers_only_values
    | array_of_floats_only_values
    | array_of_booleans
;

all_possible_variables_types:
    NUMBER { $$ = "int"; }
    | STRING { $$ = "String"; }
    | BOOLEAN { $$ = "boolean"; }
    | ANY { $$ = "void"; }
    | VOID { $$ = "void"; } 
    | /* empty */ { $$ = "void"; } 
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
    | LBRACKET RBRACKET ASSIGN { fprintf(output,"boolean[] %s =", identifierDefined);} array_of_booleans
;

////////

object_declaration:
    ANY ASSIGN LBRACE { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); } object_attribution RBRACE SEMICOLON
    | CLASS_IDENTIFIER ASSIGN LBRACE { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", $1, identifierDefined); } object_attribution RBRACE SEMICOLON
;

////////

object_attribution:
    IDENTIFIER COLON STRING_LITERAL { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, $1, $3); }
    | IDENTIFIER COLON NUMBER_LITERAL { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, $1, $3); }
    | IDENTIFIER COLON FLOAT_LITERAL { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, $1, $3); }
    | IDENTIFIER COLON BOOLEAN_LITERAL { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, $1, $3); }
    | IDENTIFIER COLON access_object
    | IDENTIFIER COLON STRING_LITERAL COMMA { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, $1, $3); } object_attribution
    | IDENTIFIER COLON NUMBER_LITERAL COMMA { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, $1, $3); } object_attribution 
    | IDENTIFIER COLON FLOAT_LITERAL COMMA { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, $1, $3); } object_attribution 
    | IDENTIFIER COLON BOOLEAN_LITERAL COMMA { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, $1, $3); } object_attribution 
    | IDENTIFIER COLON access_object COMMA object_attribution
    | IDENTIFIER COLON LBRACE object_attribution RBRACE
    | /* empty */
;

////////

array_of_numbers:
    LBRACKET { fprintf(output, "int[] %s = {", identifierDefined); } numbers RBRACKET { fprintf(output, "}"); }
;

array_of_numbers_only_values:
    LBRACKET { fprintf(output, "{"); } numbers RBRACKET { fprintf(output, "}"); }
;

numbers:
    NUMBER_LITERAL COMMA { fprintf(output, "%d,", $1); } numbers
    | NUMBER_LITERAL { fprintf(output, "%d", $1); }

array_of_floats:
    LBRACKET { fprintf(output, "double[] %s = {", identifierDefined); } floats RBRACKET { fprintf(output, "}"); }
;

array_of_floats_only_values:
    LBRACKET { fprintf(output, "{"); } floats RBRACKET { fprintf(output, "}"); }
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


increment_decrement_variable:
    IDENTIFIER ADD ADD { fprintf(output, "%s++", $1); }
    | IDENTIFIER MINUS MINUS { fprintf(output, "%s--", $1); }
;

access_object:
    IDENTIFIER { fprintf(output, "%s", $1); }
    | IDENTIFIER DOT { fprintf(output, "%s.", $1); } access_object 
    | access_object_on_bracket 
;

access_object_on_bracket:
    IDENTIFIER LBRACKET STRING_LITERAL RBRACKET { fprintf(output, "%s.%s", $1, remove_quotes($3)); } acess_more_objects_on_bracket
;

acess_more_objects_on_bracket:
    access_object_nested
    | /* empty */
;

access_object_nested:
    access_identifier_on_object_nested
    | access_bracket_on_object_nested
;

access_identifier_on_object_nested:
    DOT IDENTIFIER { fprintf(output, ".%s", $2); } nested_dot_identifier_on_object
;

nested_dot_identifier_on_object:
    DOT { fprintf(output, "."); } access_object
    | /* empty */
;

access_bracket_on_object_nested:
    LBRACKET STRING_LITERAL RBRACKET { fprintf(output, ".%s", remove_quotes($2)); }
;

cases_of_switch_case:
    CASE NUMBER_LITERAL COLON RETURN { fprintf(output, "case %d: return ", $2); } returns_of_switch
    | CASE STRING_LITERAL COLON RETURN { fprintf(output, "case %s: return ", $2); } returns_of_switch
    | CASE BOOLEAN_LITERAL COLON RETURN { fprintf(output, "case %s: return ", $2); } returns_of_switch
    | CASE { fprintf(output, "case "); } access_object COLON RETURN { fprintf(output, ": return" ); } returns_of_switch
    | /* empty */
;

returns_of_switch:
    all_possible_variables SEMICOLON { fprintf(output, ";"); } cases_of_switch_case
;

default_case_of_switch_case: 
    DEFAULT COLON RETURN { fprintf(output, "default: return "); } all_possible_variables SEMICOLON { fprintf(output, ";"); }
;

//////

set_value_on_class: 
    THIS DOT IDENTIFIER ASSIGN IDENTIFIER SEMICOLON { fprintf(output, "this.%s = %s", $3, $5); } ;
;


//////////////// commands ////////////////

commands :
    command commands
    | declaration commands
    | /* empty */
;

command : 
    if_declaration
    | WHILE LPARENTHESES { fprintf(output, "while("); } expressions RPARENTHESES LBRACE { fprintf(output, "){"); } commands RBRACE { fprintf(output, "}"); }
    | DO LBRACE { fprintf(output, "do {"); } commands RBRACE WHILE LPARENTHESES { fprintf(output, "} while("); } expressions RPARENTHESES SEMICOLON { fprintf(output, ");"); }
    | THROW NEW CLASS_IDENTIFIER LPARENTHESES { fprintf(output, "throw new %s(", $3); } expressions RPARENTHESES SEMICOLON { fprintf(output, ");"); }
    | try_finally_declaration
    | SWITCH LPARENTHESES { fprintf(output, "while("); } expressions RPARENTHESES LBRACE { fprintf(output, "){"); } cases_of_switch_case default_case_of_switch_case RBRACE { fprintf(output, "}"); }
    | call_a_function
    | RETURN { fprintf(output, "return "); } expressions SEMICOLON { fprintf(output, ";"); }
    | for_declaration
    | BREAK SEMICOLON { fprintf(output, "break;"); }
    | CONTINUE SEMICOLON { fprintf(output, "continue;"); }
;

if_declaration: 
    IF LPARENTHESES { fprintf(output, "if("); } expressions RPARENTHESES LBRACE { fprintf(output, "){"); } commands RBRACE { fprintf(output, "}"); } else_declaration
;

else_declaration:
    ELSE LBRACE { fprintf(output, "else{"); } commands RBRACE { fprintf(output, "}"); }
    | /* empty */
;

try_finally_declaration:
    TRY LBRACE { fprintf(output, "try {"); } commands RBRACE { fprintf(output, "}"); } catch_declararation FINALLY LBRACE { fprintf(output, "finally {"); } commands RBRACE { fprintf(output, "}"); }
;

catch_declararation:
    CATCH LPARENTHESES { fprintf(output, "catch ("); } catch_error RPARENTHESES LBRACE { fprintf(output, "){"); } commands RBRACE { fprintf(output, "}"); }
    | /* empty */
;

catch_error: 
    IDENTIFIER error_to_catch { fprintf(output, "%s %s", $2, $1); }
;

error_to_catch:
    COLON CLASS_IDENTIFIER {$$ = $2;}
    | INSTANCEOF CLASS_IDENTIFIER {$$ = $2;}
;

for_declaration:
    FOR LPARENTHESES { fprintf(output, "for ("); } LET IDENTIFIER { fprintf(output, "let %s ", $5); } for_options 
;

for_options:
    OF IDENTIFIER RPARENTHESES LBRACE { fprintf(output, "of %s){", $2); } commands RBRACE { fprintf(output, "}"); }
    | ASSIGN NUMBER_LITERAL SEMICOLON { fprintf(output, "= %d;",$2); } for_comparations SEMICOLON { fprintf(output, ";"); } increment_decrement_variable RPARENTHESES LBRACE { fprintf(output, "){"); } commands RBRACE { fprintf(output, "}"); }
;


for_comparations: 
    IDENTIFIER '<' { fprintf(output, "%s < ", $1); } for_comparations_right_comparasion
    | IDENTIFIER '<' ASSIGN { fprintf(output, "%s <=", $1); } for_comparations_right_comparasion
    | IDENTIFIER '>' { fprintf(output, "%s > ", $1); } for_comparations_right_comparasion
    | IDENTIFIER '>' ASSIGN { fprintf(output, "%s >=", $1); } for_comparations_right_comparasion
    | IDENTIFIER { fprintf(output, "%s", $1); } assign_expression for_comparations_right_comparasion { fprintf(output, ")"); }
;

for_comparations_right_comparasion:
    NUMBER_LITERAL { fprintf(output, "%d", $1); } 
    | IDENTIFIER { fprintf(output, "%s", $1); } 

expressions: 
    STRING_LITERAL { fprintf(output, "%s", $1); }
    | NUMBER_LITERAL { fprintf(output, "%d", $1); }
    | FLOAT_LITERAL { fprintf(output, "%d", $1); }
    | BOOLEAN_LITERAL { fprintf(output, "%s", $1); }
    | access_object
    | expressions '<' { fprintf(output, "<"); } expressions
    | expressions '<' ASSIGN { fprintf(output, "<="); } expressions
    | expressions assign_expression expressions { fprintf(output, ")"); }
    | expressions '>' { fprintf(output, ">"); } expressions
    | expressions '>' ASSIGN { fprintf(output, ">="); } expressions
    | expressions ADD { fprintf(output, "+"); } expressions 
    | expressions MINUS { fprintf(output, "-"); }  expressions
    | expressions '*' { fprintf(output, "*"); }  expressions
    | expressions '/' { fprintf(output, "/"); }  expressions
    | expressions '^' { fprintf(output, "^"); }  expressions
    | expressions '%' { fprintf(output, "%"); }  expressions
    | expressions '|' { fprintf(output, "|"); }  expressions
    | expressions '|' '|' { fprintf(output, "||"); }  expressions
    | expressions '&' { fprintf(output, "&"); }  expressions
    | expressions '&' '&' { fprintf(output, "&&"); }  expressions
    | LPARENTHESES { fprintf(output, "("); } expressions RPARENTHESES { fprintf(output, ")"); }
;

assign_expression:
    ASSIGN ASSIGN compare_type_and_value_expressions { fprintf(output, ".equals("); }
;

compare_type_and_value_expressions:
    ASSIGN
    | /* empty */
;

function_declarartion:
    FUNCTION IDENTIFIER LPARENTHESES { fprintf(output, "public static void %s(", $2); } function_parameters RPARENTHESES { fprintf(output, ")"); } return_of_function_declaration
;

return_of_function_declaration:
    COLON all_possible_variables_types LBRACE { fprintf(output, "{"); } commands RBRACE { fprintf(output, "}"); }
    | LBRACE { fprintf(output, "{"); } commands RBRACE { fprintf(output, "}"); } 
;


call_a_function:
    IDENTIFIER LPARENTHESES { fprintf(output, "%s(", $1); } all_possible_variables call_a_function_one_more_values RPARENTHESES SEMICOLON { fprintf(output, ");"); }
;

call_a_function_one_more_values:
    COMMA { fprintf(output, ","); } function_values
    | /* empty */

function_values:
    all_possible_variables
    | all_possible_variables COMMA { fprintf(output, ","); } function_values


function_parameters:
    /* empty */
    | IDENTIFIER COLON all_possible_variables_types { fprintf(output, "%s %s", $3, $1); } function_parameters_one_or_more
;

function_parameters_one_or_more: 
    COMMA { fprintf(output, ", "); } function_parameters
    | /* empty */
;

///////////

class_declarations: 
    CLASS CLASS_IDENTIFIER LBRACE { fprintf(output, "public class %s {", $2); } class_attributes constructor_definition class_attributes RBRACE { fprintf(output, "}"); }
;

class_attributes:
    class_attribute_declaration class_attributes
    | class_function_declarartion class_attributes
    | /* empty */
;

class_attribute_declaration:
    access_modifiers IDENTIFIER COLON all_possible_variables_types { fprintf(output, " %s %s", $4, $2); } initialize_class_attribute_value SEMICOLON { fprintf(output, ";"); }
    | IDENTIFIER COLON all_possible_variables_types { fprintf(output, "public %s %s", $3, $1); } initialize_class_attribute_value SEMICOLON { fprintf(output, ";"); }
;

initialize_class_attribute_value:
    ASSIGN all_possible_variables 
    | /* empty */
;

access_modifiers: 
    PUBLIC { fprintf(output, "public"); }
    | PRIVATE { fprintf(output, "private"); }
    | PROTECTED { fprintf(output, "protected"); }
;

constructor_definition:
    CONSTRUCTOR LPARENTHESES { fprintf(output, "Public constructor("); } function_parameters RPARENTHESES LBRACE {fprintf(output, "){");} set_property_with_this RBRACE { fprintf(output, "}"); }
    | /* empty */
;

set_property_with_this:
    THIS DOT IDENTIFIER ASSIGN IDENTIFIER SEMICOLON  { fprintf(output, "this.%s = %s;", $3, $5); } set_property_with_this
    | /* empty */
;

class_function_declarartion:
    IDENTIFIER LPARENTHESES { fprintf(output, "%s(", $1); } function_parameters RPARENTHESES COLON all_possible_variables_types LBRACE { fprintf(output, "): %s {", $7); } commands RBRACE { fprintf(output, "}"); }
;

///////////

    
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
