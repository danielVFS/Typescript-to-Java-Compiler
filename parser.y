%{
    #include <stdio.h>
    extern int yylineno;
%}
%start begin
%token LET INTEGER IN ID SKIP IF FI THEN ELSE END WHILE DO READ WRITE NUMERO
%token ATRIB  REAL
%left '-' '+'
%left '*' '/'
%right '^'

%%
begin : LET  declarations IN commands END
;

declarations : tipo idlist ';' declarations
|  /*epslon*/
;

idlist : ID
| ID ',' idlist

tipo : REAL
| INTEGER
;

commands : /* empty */
|  command ';' commands
;

command : SKIP
| READ ID
| WRITE exp
| ID ATRIB exp
| IF exp THEN commands FI
| WHILE exp DO commands END
;

exp : REAL
| NUMERO
| ID
| exp '<' exp
| exp '=' exp
| exp '>' exp
| exp '+' exp
| exp '-' exp
| exp '*' exp
| exp '/' exp
| exp '^' exp
| '(' exp ')'
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
