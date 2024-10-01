%{
#include "parser.tab.h"
%}
%option yylineno
DIGIT [0-9]
ID [a-z][0-9a-z]*

%%
{DIGIT}*"."{DIGIT}+ { return(REAL);}
{DIGIT}+ { return(NUMERO);}
":="     { return(ATRIB);}
integer { return(INTEGER);}
real    { return(REAL);}
if      { return(IF);}
fi      { return(FI);}
then    { return(THEN);}
end     { return(END);}
skip    { return(SKIP);}
let     { return(LET);}
in      { return(IN);}
do      { return(DO);}
while   { return(WHILE);}
read    { return(READ);}
write   { return(WRITE);}
{ID}    { return(ID);}
"\\\\"[ a-z]*\n
"\n"     {  /*incrementa sozinho lineno*/ }
[ \t]+
.       { return(yytext[0]);}
%%