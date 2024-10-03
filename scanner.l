%{
#include "parser.tab.h"
%}
%option yylineno

NUMBER [0-9]*
FLOAT [0-9]*"."[0-9]+
ID [a-z][0-9a-z]*
STRING_LITERAL_WITH_SINGLE_QUOTE \'[^\']*\'
STRING_LITERAL_WITH_DOUBLE_QUOTE \"[^"]*\"
TRUE true
FALSE false 

%%
{NUMBER}            { printf("Reconhecido: NUMBER_LITERAL (%s)\n", yytext); return(NUMBER_LITERAL);}
{FLOAT}             { printf("Reconhecido: FLOAT_LITERAL (%s)\n", yytext); return (FLOAT_LITERAL);}
{TRUE}              { printf("Reconhecido: TRUE_LITERAL (%s)\n", yytext); return (BOOLEAN_LITERAL);}
{FALSE}             { printf("Reconhecido: FALSE_LITERAL (%s)\n", yytext); return (BOOLEAN_LITERAL);}
{STRING_LITERAL_WITH_SINGLE_QUOTE}    { printf("Reconhecido: STRING_LITERAL (%s)\n", yytext); return (STRING_LITERAL);}
{STRING_LITERAL_WITH_DOUBLE_QUOTE}    { printf("Reconhecido: STRING_LITERAL (%s)\n", yytext); return (STRING_LITERAL);}
Error               { printf("Reconhecido: ERROR_LITERAL (%s)\n", yytext); return (ERROR_LITERAL);}
"="                 { printf("Reconhecido: ASSIGN\n"); return(ASSIGN);}
number              { printf("Reconhecido: NUMBER\n"); return(NUMBER);}
string              { printf("Reconhecido: STRING\n"); return(STRING);}
boolean             { printf("Reconhecido: BOOLEAN\n"); return(BOOLEAN);}
any                 { printf("Reconhecido: ANY\n"); return(ANY);}
let                 { printf("Reconhecido: LET\n"); return(LET);}
if                  { printf("Reconhecido: IF\n"); return(IF);}
else                { printf("Reconhecido: ELSE\n"); return(ELSE);}
while               { printf("Reconhecido: WHILE\n"); return(WHILE);}
do                  { printf("Reconhecido: DO\n"); return(DO);}
try                 { printf("Reconhecido: TRY\n"); return(TRY);}
catch               { printf("Reconhecido: CATCH\n"); return(CATCH);}
finally             { printf("Reconhecido: FINALLY\n"); return(FINALLY);}
switch              { printf("Reconhecido: SWITCH\n"); return(SWITCH);}
case                { printf("Reconhecido: SWITCH\n"); return(CASE);}
throw               { printf("Reconhecido: THROW\n"); return(THROW);}
new                 { printf("Reconhecido: NEW\n"); return(NEW);}
return              { printf("Reconhecido: RETURN\n"); return(RETURN);}
default             { printf("Reconhecido: DEFAULT\n"); return(DEFAULT);}
case             { printf("Reconhecido: CASE\n"); return(CASE);}
":"                 { printf("Reconhecido: COLON\n"); return (COLON); }
";"                 { printf("Reconhecido: SEMICOLON\n"); return (SEMICOLON); }
"console.log"       { printf("Reconhecido: CONSOLE_LOG\n"); return (CONSOLE_LOG); }
"["                 { printf("Reconhecido: LBRACKET\n"); return (LBRACKET); }
"]"                 { printf("Reconhecido: RBRACKET\n"); return (RBRACKET); }
"{"                 { printf("Reconhecido: LBRACE\n"); return (LBRACE); }
"}"                 { printf("Reconhecido: RBRACE\n"); return (RBRACE); }
"("                 { printf("Reconhecido: LPARENTHESES\n"); return (LPARENTHESES); }
")"                 { printf("Reconhecido: RPARENTHESES\n"); return (RPARENTHESES); }
","                 { printf("Reconhecido: COMMA\n"); return (COMMA); }
"'"                 { printf("Reconhecido: SINGLE_QUOTE\n"); return SINGLE_QUOTE; }
"+"                 { printf("Reconhecido: ADD\n"); return ADD; }
"-"                 { printf("Reconhecido: MINUS\n"); return MINUS; }
"."                 { printf("Reconhecido: DOT\n"); return DOT; }
"\""                { printf("Reconhecido: DOUBLE_QUOTE\n");return DOUBLE_QUOTE; }
{ID}                { printf("Reconhecido: IDENTIFIER (%s)\n", yytext); return(IDENTIFIER);}
"\\\\"[ a-z]*\n     { /*comentário/ }
"\n"                { /*incrementa sozinho lineno*/ }
[ \t]+              { /*ignorar espaços em branco*/ }
.                   { printf("Reconhecido: caractere desconhecido (%c)\n", yytext[0]); return(yytext[0]);}
%%