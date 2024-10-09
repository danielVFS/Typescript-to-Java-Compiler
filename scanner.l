%{
#include "parser.tab.h"
char *stringpool(char *);
extern FILE * output;
%}
%option yylineno

NUMBER [0-9]*
FLOAT [0-9]*"."[0-9]+
ID [a-z][0-9a-zA-Z]*
CLASS_ID [A-Z][0-9a-zA-Z]*
STRING_LITERAL_WITH_SINGLE_QUOTE \'[^\']*\'
STRING_LITERAL_WITH_DOUBLE_QUOTE \"[^"]*\"
STRING_LITERAL_CRASIS_QUOTE \`[^`]*\`
TRUE true
FALSE false
ERROR [A-Z][a-zA-Z]*

%%
{NUMBER}            { printf("Reconhecido: NUMBER_LITERAL (%s)\n", yytext); yylval.yint = atoi(yytext); return(NUMBER_LITERAL);}
{FLOAT}             { printf("Reconhecido: FLOAT_LITERAL (%s)\n", yytext); yylval.yfloat = atof(yytext); return (FLOAT_LITERAL);}
{TRUE}              { printf("Reconhecido: TRUE_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (BOOLEAN_LITERAL);}
{FALSE}             { printf("Reconhecido: FALSE_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (BOOLEAN_LITERAL);}
{STRING_LITERAL_WITH_SINGLE_QUOTE}    { printf("Reconhecido: STRING_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (STRING_LITERAL);}
{STRING_LITERAL_WITH_DOUBLE_QUOTE}    { printf("Reconhecido: STRING_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (STRING_LITERAL);}
{STRING_LITERAL_CRASIS_QUOTE}         { printf("Reconhecido: STRING_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (STRING_LITERAL);}
{ERROR}               { printf("Reconhecido: ERROR_LITERAL (%s)\n", yytext); yylval.ystr = stringpool(yytext); return (ERROR_LITERAL);}
"="                 { printf("Reconhecido: ASSIGN\n"); return(ASSIGN);}
number              { printf("Reconhecido: NUMBER\n"); return(NUMBER);}
string              { printf("Reconhecido: STRING\n"); return(STRING);}
boolean             { printf("Reconhecido: BOOLEAN\n"); return(BOOLEAN);}
void                { printf("Reconhecido: VOID\n"); return(VOID);}
any                 { printf("Reconhecido: ANY\n"); return(ANY);}
let                 { printf("Reconhecido: LET\n"); return(LET);}
var                 { printf("Reconhecido: VAR\n"); return(VAR);}
const                 { printf("Reconhecido: CONST\n"); return(CONST);}
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
case                { printf("Reconhecido: CASE\n"); return(CASE);}
function            { printf("Reconhecido: FUNCTION\n"); return(FUNCTION);}
Promise             { printf("Reconhecido: PROMISE\n"); return(PROMISE);}
this                { printf("Reconhecido: THIS\n"); return(THIS);}
class               { printf("Reconhecido: CLASS\n"); return(CLASS);}
private             { printf("Reconhecido: PRIVATE\n"); return(PRIVATE);}
public              { printf("Reconhecido: PUBLIC\n"); return(PUBLIC);}
protected           { printf("Reconhecido: PROTECTED\n"); return(PROTECTED);}
constructor         { printf("Reconhecido: CONSTRUCTOR\n"); return(CONSTRUCTOR);}
instanceof          { printf("Reconhecido: INSTANCEOF\n"); return(INSTANCEOF);}
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
{ID}                { printf("Reconhecido: IDENTIFIER (%s)\n", yytext); yylval.ystr = stringpool(yytext); return(IDENTIFIER);}
{CLASS_ID}          { printf("Reconhecido: CLASS_IDENTIFIER (%s)\n", yytext); yylval.ystr = stringpool(yytext); return(CLASS_IDENTIFIER);}
"\\"[ a-z]*\n 
"\n"                { fprintf(output,"\n"); /*incrementa sozinho lineno*/ }
[ \t]+              
.                   { printf("Reconhecido: caractere desconhecido (%c)\n", yytext[0]); return(yytext[0]);}
%%
