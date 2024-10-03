/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    LET = 258,
    IDENTIFIER = 259,
    NUMBER = 260,
    VOID = 261,
    STRING = 262,
    BOOLEAN = 263,
    ANY = 264,
    CONSOLE_LOG = 265,
    LBRACKET = 266,
    RBRACKET = 267,
    LBRACE = 268,
    RBRACE = 269,
    SINGLE_QUOTE = 270,
    DOUBLE_QUOTE = 271,
    COMMA = 272,
    LPARENTHESES = 273,
    RPARENTHESES = 274,
    IF = 275,
    ELSE = 276,
    WHILE = 277,
    DO = 278,
    DOT = 279,
    TRY = 280,
    CATCH = 281,
    FINALLY = 282,
    SWITCH = 283,
    CASE = 284,
    THROW = 285,
    NEW = 286,
    RETURN = 287,
    DEFAULT = 288,
    THIS = 289,
    FUNCTION = 290,
    PROMISE = 291,
    COLON = 292,
    SEMICOLON = 293,
    ASSIGN = 294,
    ADD = 295,
    MINUS = 296,
    STRING_LITERAL = 297,
    NUMBER_LITERAL = 298,
    FLOAT_LITERAL = 299,
    BOOLEAN_LITERAL = 300,
    ERROR_LITERAL = 301
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 6 "parser.y" /* yacc.c:1909  */

    char* str;
    int num;

#line 106 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
