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
    VAR = 259,
    CONST = 260,
    CLASS = 261,
    CONSTRUCTOR = 262,
    PRIVATE = 263,
    PUBLIC = 264,
    PROTECTED = 265,
    IDENTIFIER = 266,
    CLASS_IDENTIFIER = 267,
    NUMBER = 268,
    VOID = 269,
    STRING = 270,
    BOOLEAN = 271,
    ANY = 272,
    CONSOLE_LOG = 273,
    LBRACKET = 274,
    RBRACKET = 275,
    LBRACE = 276,
    RBRACE = 277,
    SINGLE_QUOTE = 278,
    DOUBLE_QUOTE = 279,
    COMMA = 280,
    LPARENTHESES = 281,
    RPARENTHESES = 282,
    IF = 283,
    ELSE = 284,
    WHILE = 285,
    DO = 286,
    DOT = 287,
    TRY = 288,
    CATCH = 289,
    FINALLY = 290,
    SWITCH = 291,
    CASE = 292,
    THROW = 293,
    NEW = 294,
    RETURN = 295,
    DEFAULT = 296,
    THIS = 297,
    FUNCTION = 298,
    PROMISE = 299,
    COLON = 300,
    SEMICOLON = 301,
    ASSIGN = 302,
    ADD = 303,
    MINUS = 304,
    STRING_LITERAL = 305,
    NUMBER_LITERAL = 306,
    FLOAT_LITERAL = 307,
    BOOLEAN_LITERAL = 308,
    ERROR_LITERAL = 309
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "parser.y" /* yacc.c:1909  */

    char* str;
    int num;

#line 114 "parser.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
