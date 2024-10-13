/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "parser.y" /* yacc.c:339  */

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

    char* replace_grave_with_quotes(char* str) {
        char* first_grave = strchr(str, '`');
        char* last_grave = strrchr(str, '`');

        if (!first_grave || !last_grave || first_grave == last_grave) {
            return str;
        }

        int new_len = strlen(str) + 1;
        if (first_grave) {
            new_len -= 1;
        }
        if (last_grave) {
            new_len -= 1;
        }
        
        char* new_str = (char*)malloc(new_len);
        if (!new_str) {
            return NULL;
        }

        strncpy(new_str, str, first_grave - str);
        new_str[first_grave - str] = '"';

        strncat(new_str, first_grave + 1, last_grave - first_grave - 1);

        new_str[strlen(new_str)] = '"';
        new_str[strlen(new_str) + 1] = '\0';

        strcat(new_str, last_grave + 1);

        return new_str;
    }

#line 120 "parser.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.tab.h".  */
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
    VAR = 258,
    CONST = 259,
    CLASS = 260,
    CONSTRUCTOR = 261,
    PRIVATE = 262,
    PUBLIC = 263,
    PROTECTED = 264,
    NUMBER = 265,
    VOID = 266,
    STRING = 267,
    BOOLEAN = 268,
    ANY = 269,
    CONSOLE_LOG = 270,
    LBRACKET = 271,
    RBRACKET = 272,
    LBRACE = 273,
    RBRACE = 274,
    SINGLE_QUOTE = 275,
    DOUBLE_QUOTE = 276,
    COMMA = 277,
    LPARENTHESES = 278,
    RPARENTHESES = 279,
    IF = 280,
    ELSE = 281,
    WHILE = 282,
    DO = 283,
    DOT = 284,
    TRY = 285,
    CATCH = 286,
    FINALLY = 287,
    SWITCH = 288,
    CASE = 289,
    THROW = 290,
    NEW = 291,
    RETURN = 292,
    DEFAULT = 293,
    THIS = 294,
    FUNCTION = 295,
    PROMISE = 296,
    INSTANCEOF = 297,
    FOR = 298,
    BREAK = 299,
    CONTINUE = 300,
    OF = 301,
    COLON = 302,
    SEMICOLON = 303,
    ASSIGN = 304,
    ADD = 305,
    MINUS = 306,
    IDENTIFIER = 307,
    CLASS_IDENTIFIER = 308,
    LET = 309,
    STRING_LITERAL = 310,
    NUMBER_LITERAL = 311,
    FLOAT_LITERAL = 312,
    BOOLEAN_LITERAL = 313
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 55 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 225 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 242 "parser.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  52
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  173
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  538

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   313

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    64,    66,     2,
       2,     2,    61,     2,     2,     2,     2,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      59,     2,    60,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    63,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    65,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    77,    77,    83,    84,    88,    88,    89,    90,    91,
      92,    93,    94,    98,    98,    98,   102,   103,   104,   105,
     110,   111,   112,   116,   116,   117,   121,   125,   125,   129,
     129,   130,   134,   135,   136,   137,   138,   139,   140,   141,
     145,   146,   147,   148,   149,   150,   156,   160,   161,   164,
     165,   169,   170,   176,   180,   181,   181,   187,   191,   192,
     192,   198,   198,   199,   199,   205,   206,   207,   208,   209,
     210,   210,   211,   211,   212,   212,   213,   213,   214,   215,
     216,   222,   222,   226,   226,   230,   230,   231,   234,   234,
     238,   238,   242,   242,   243,   246,   246,   250,   250,   251,
     254,   254,   258,   258,   259,   263,   264,   268,   269,   269,
     270,   274,   274,   278,   279,   283,   284,   288,   288,   292,
     292,   293,   297,   301,   301,   302,   302,   303,   303,   304,
     304,   304,   305,   309,   313,   313,   319,   326,   327,   328,
     332,   333,   333,   333,   334,   334,   334,   334,   335,   335,
     335,   336,   337,   337,   337,   338,   339,   339,   340,   341,
     341,   342,   342,   346,   346,   346,   346,   350,   350,   351,
     355,   355,   355,   355,   359,   359,   359,   360,   364,   368,
     369,   373,   373,   373,   377,   377,   378,   378,   378,   383,
     383,   384,   384,   385,   385,   386,   386,   387,   387,   391,
     392,   395,   396,   397,   398,   399,   400,   400,   401,   401,
     402,   403,   403,   404,   404,   405,   405,   406,   406,   407,
     407,   408,   408,   409,   409,   410,   410,   411,   411,   412,
     412,   413,   413,   414,   414,   415,   415,   419,   423,   424,
     428,   428,   428,   432,   432,   433,   433,   438,   438,   438,
     442,   442,   443,   446,   447,   447,   450,   452,   452,   456,
     456,   457,   463,   463,   467,   468,   469,   473,   473,   474,
     474,   478,   479,   483,   484,   485,   489,   489,   489,   490,
     494,   494,   495,   499,   499,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "VAR", "CONST", "CLASS", "CONSTRUCTOR",
  "PRIVATE", "PUBLIC", "PROTECTED", "NUMBER", "VOID", "STRING", "BOOLEAN",
  "ANY", "CONSOLE_LOG", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE",
  "SINGLE_QUOTE", "DOUBLE_QUOTE", "COMMA", "LPARENTHESES", "RPARENTHESES",
  "IF", "ELSE", "WHILE", "DO", "DOT", "TRY", "CATCH", "FINALLY", "SWITCH",
  "CASE", "THROW", "NEW", "RETURN", "DEFAULT", "THIS", "FUNCTION",
  "PROMISE", "INSTANCEOF", "FOR", "BREAK", "CONTINUE", "OF", "COLON",
  "SEMICOLON", "ASSIGN", "ADD", "MINUS", "IDENTIFIER", "CLASS_IDENTIFIER",
  "LET", "STRING_LITERAL", "NUMBER_LITERAL", "FLOAT_LITERAL",
  "BOOLEAN_LITERAL", "'<'", "'>'", "'*'", "'/'", "'^'", "'%'", "'|'",
  "'&'", "$accept", "program", "optional_semicolon", "declaration", "$@1",
  "instance_new_class", "$@2", "$@3", "possible_declarations",
  "variable_types", "console_log_declarations", "$@4",
  "console_log_left_common", "console_log_right_common", "$@5",
  "console_log_declaration_with_add", "$@6", "all_possible_variables",
  "all_possible_variables_types", "number_declaration",
  "number_or_array_declaration", "number_or_float_declaration",
  "array_of_numbers_and_floats_declaration", "string_declaration",
  "string_or_array_of_strings_declaration", "$@7", "boolean_declaration",
  "boolean_or_array_of_booleans_declaration", "$@8", "object_declaration",
  "$@9", "$@10", "object_attribution", "$@11", "$@12", "$@13", "$@14",
  "array_of_numbers", "$@15", "array_of_numbers_only_values", "$@16",
  "numbers", "$@17", "array_of_floats", "$@18",
  "array_of_floats_only_values", "$@19", "floats", "$@20",
  "array_of_booleans", "$@21", "booleans", "$@22", "array_of_strings",
  "$@23", "strings", "$@24", "increment_decrement_variable",
  "access_object", "$@25", "access_object_on_bracket", "$@26",
  "acess_more_objects_on_bracket", "access_object_nested",
  "access_identifier_on_object_nested", "$@27",
  "nested_dot_identifier_on_object", "$@28",
  "access_bracket_on_object_nested", "cases_of_switch_case", "$@29",
  "$@30", "$@31", "$@32", "$@33", "returns_of_switch",
  "default_case_of_switch_case", "$@34", "set_value_on_class", "commands",
  "command", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40", "$@41",
  "$@42", "$@43", "$@44", "$@45", "$@46", "if_declaration", "$@47", "$@48",
  "$@49", "else_declaration", "$@50", "try_finally_declaration", "$@51",
  "$@52", "$@53", "catch_declararation", "$@54", "$@55", "catch_error",
  "error_to_catch", "for_declaration", "$@56", "$@57", "for_options",
  "$@58", "$@59", "$@60", "for_comparations", "$@61", "$@62", "$@63",
  "$@64", "$@65", "for_comparations_right_comparasion", "expressions",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "assign_expression",
  "compare_type_and_value_expressions", "function_declarartion", "$@81",
  "$@82", "return_of_function_declaration", "$@83", "$@84",
  "call_a_function", "$@85", "$@86", "call_a_function_one_more_values",
  "$@87", "function_values", "$@88", "function_parameters", "$@89",
  "function_parameters_one_or_more", "$@90", "class_declarations", "$@91",
  "class_attributes", "class_attribute_declaration", "$@92", "$@93",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@94", "$@95", "set_property_with_this",
  "$@96", "class_function_declarartion", "$@97", "$@98", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,    60,
      62,    42,    47,    94,    37,   124,    38
};
# endif

#define YYPACT_NINF -426

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-426)))

#define YYTABLE_NINF -101

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      22,  -426,  -426,   -19,    13,    15,    47,    57,    59,    56,
      45,  -426,    58,    49,    80,  -426,  -426,    88,  -426,   137,
      22,  -426,    97,  -426,   104,   106,  -426,  -426,    22,  -426,
    -426,  -426,  -426,  -426,  -426,   152,  -426,  -426,  -426,  -426,
    -426,  -426,   102,    28,   132,   146,  -426,   106,   106,  -426,
     136,   141,  -426,  -426,   138,     6,  -426,   144,  -426,  -426,
    -426,  -426,  -426,    28,    28,    22,    22,    28,   172,  -426,
    -426,  -426,  -426,  -426,  -426,   299,   148,  -426,   149,  -426,
    -426,    52,  -426,  -426,   162,   157,   150,  -426,   144,  -426,
     182,    12,    65,   117,   189,   190,   151,  -426,    28,   177,
    -426,  -426,   178,   187,  -426,  -426,  -426,  -426,   173,   171,
    -426,    28,   191,   192,   193,    89,  -426,  -426,  -426,  -426,
     225,  -426,  -426,  -426,  -426,   195,    29,   232,   198,   182,
      28,  -426,  -426,  -426,  -426,  -426,    31,   245,    12,   200,
      12,   235,   237,   229,  -426,   240,    28,   169,   208,    28,
      28,  -426,    28,  -426,    28,    28,    28,    28,    28,  -426,
      28,  -426,    28,   333,   106,   212,   236,  -426,   206,   207,
     213,   210,  -426,   242,   247,    -1,     7,    14,   223,   226,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   218,   106,
    -426,   211,   251,    12,  -426,   238,  -426,  -426,  -426,   253,
     255,  -426,   239,  -426,  -426,  -426,   333,   333,    28,   333,
      28,   333,   333,   333,   333,   333,    28,   333,    28,   333,
    -426,   211,  -426,   115,   269,   275,   272,   276,   274,   289,
     285,   291,    52,  -426,  -426,   292,    66,  -426,   293,   256,
     106,   295,   257,   106,   296,   298,   105,  -426,  -426,   192,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,   294,   211,    22,
      22,  -426,   300,   286,   290,  -426,   333,   333,   333,   333,
    -426,    11,   267,   270,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,   305,  -426,   106,    52,   279,  -426,  -426,
     106,   297,  -426,  -426,   302,  -426,  -426,  -426,  -426,   287,
     288,  -426,  -426,  -426,  -426,   317,   303,   192,  -426,  -426,
     324,   325,    28,  -426,   327,    77,   315,   106,   332,  -426,
     211,  -426,   331,  -426,   206,   207,   213,   210,  -426,  -426,
     345,   340,  -426,  -426,  -426,   318,   318,   354,  -426,   326,
      52,   106,   348,   303,  -426,  -426,   271,   322,  -426,   329,
     330,   338,   198,   341,   359,  -426,  -426,  -426,    22,   361,
     362,   106,  -426,  -426,  -426,  -426,    52,  -426,   343,   106,
    -426,  -426,   371,   373,   355,   382,   384,  -426,   375,   211,
    -426,  -426,   372,   106,   379,  -426,    70,   383,    22,   369,
     374,   377,   363,   378,  -426,   192,   389,  -426,  -426,   357,
    -426,   106,   206,   207,  -426,  -426,  -426,  -426,  -426,   133,
     106,   106,  -426,  -426,   398,  -426,  -426,   399,  -426,   106,
     365,   366,  -426,   402,   403,  -426,  -426,  -426,   386,  -426,
    -426,  -426,    22,    22,    83,   106,  -426,   404,   408,   318,
     405,   406,   407,   409,   410,  -426,  -426,   198,  -426,   387,
    -426,  -426,  -426,  -426,  -426,  -426,    52,    52,    52,  -426,
      52,   411,   414,   385,   390,   391,   392,  -426,  -426,   416,
    -426,  -426,  -426,  -426,   318,  -426,    22,   412,   417,    22,
      22,   106,  -426,  -426,  -426,    52,   106,  -426,  -426,  -426,
     -28,  -426,   -28,   -28,   112,   419,  -426,   318,   318,   318,
     318,  -426,   426,   394,  -426,   428,   429,   290,  -426,  -426,
     -28,  -426,  -426,  -426,   -28,  -426,  -426,   420,  -426,  -426,
    -426,  -426,  -426,   400,  -426,  -426,  -426,  -426,  -426,  -426,
     401,    22,  -426,   431,   106,  -426,   387,  -426
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     139,    21,    22,     0,     0,     0,     0,     0,     0,     0,
       0,   156,     0,     0,     0,   159,   161,     0,    20,     0,
     139,    10,     0,     7,     0,     4,     9,     2,   139,   140,
     151,   158,    11,   155,    12,     0,    26,   163,   141,   144,
     170,   152,     0,     0,     0,     0,   181,     4,     4,   247,
       0,     0,     1,   138,     5,   107,    23,    31,   110,     3,
       8,   137,   262,     0,     0,   139,   139,     0,     0,   235,
     201,   202,   203,   204,   205,     4,     0,   240,     0,   160,
     162,     0,   105,   106,     0,     0,     0,   108,    31,    29,
       0,   266,     0,     0,     0,     0,     0,   148,     0,     0,
     215,   217,   206,   211,   219,   221,   223,   225,   227,   231,
     157,     0,     0,   256,     0,    83,    35,    32,    33,    34,
     252,    37,    38,    39,    36,     0,     0,     0,     0,     0,
       0,    27,    25,   274,   273,   275,     0,   279,   266,     0,
     266,     0,     0,     0,   171,     0,     0,     0,   239,     0,
       0,   208,     0,   213,     0,     0,     0,     0,     0,   229,
       0,   233,     0,   210,     4,     0,     0,   182,     0,     0,
       0,     0,   250,     0,     0,     0,     0,     0,     0,     0,
       6,    16,    17,    18,    19,   111,   109,    24,     0,     4,
     283,    45,     0,   266,   264,     0,   265,   164,   142,     0,
     177,   153,     0,   236,   238,   237,   216,   218,     0,   207,
       0,   212,   220,   222,   224,   226,     0,   228,     0,   232,
     136,    45,   241,     0,    87,     0,    94,     0,    99,     0,
     104,     0,     0,   248,    13,     0,     0,    46,     0,     0,
       4,     0,     0,     4,     0,     0,   114,    30,    28,   256,
      40,    44,    41,    42,    43,   269,   276,     0,    45,   139,
     139,   145,     0,     0,   132,   149,   209,   214,   230,   234,
     257,     0,     0,     0,   183,    85,    84,    92,    91,    97,
      96,   102,   101,   253,   251,     4,     0,     0,    49,    50,
       4,     0,    54,    53,     0,    58,    57,    61,    63,     0,
       0,   112,   113,   115,   116,     0,   272,   256,   263,   267,
       0,     0,     0,   174,     0,   129,     0,     4,   261,   245,
      45,   242,     0,   186,     0,     0,     0,     0,   254,   249,
       0,     0,    48,    55,    59,    80,    80,     0,   117,     0,
       0,     4,     0,   272,   165,   143,     0,     0,   172,     0,
       0,     0,     0,     0,     0,   150,   259,   258,   139,     0,
       0,     4,    86,    93,    98,   103,     0,    14,    81,     4,
      51,    52,     0,     0,     0,     0,     0,   122,   121,    45,
     271,   270,     0,     4,   169,   146,     0,     0,   139,     0,
       0,     0,     0,     0,   154,   256,     0,   243,   184,     0,
     255,     4,     0,     0,    47,   100,    56,    95,    60,     0,
       4,     4,   119,   118,     0,   277,   268,     0,   166,     4,
       0,     0,   178,     0,     0,   125,   123,   127,     0,   134,
     260,   246,   139,   139,   197,     4,    15,     0,     0,    80,
      65,    66,    67,    68,    69,    62,    64,     0,   284,   282,
     167,   147,   180,   179,   175,   173,     0,     0,     0,   130,
       0,     0,     0,   189,   193,     0,     0,    82,    89,     0,
      70,    72,    74,    76,    80,   120,   139,     0,     0,   139,
     139,     4,   126,   124,   128,     0,     4,   244,   185,   191,
       0,   195,     0,     0,     0,     0,    79,    80,    80,    80,
      80,    78,     0,     0,   278,     0,     0,   132,   131,   135,
       0,   200,   199,   190,     0,   194,   198,     0,    71,    73,
      75,    77,   285,     0,   168,   176,   133,   192,   196,   187,
       0,   139,   280,     0,     4,   188,   282,   281
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -426,  -426,   -44,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -115,  -426,   364,  -426,   -79,  -214,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -326,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -312,  -426,  -426,  -426,  -426,  -426,  -308,  -426,    78,
    -426,   128,  -426,    85,  -426,   131,  -426,   -11,   -23,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,   -46,
    -426,  -426,  -426,  -426,  -426,  -425,  -426,  -426,  -426,   -20,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -374,   -58,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,    -3,  -426,
    -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,  -426,
    -426,  -273,  -426,  -238,  -426,  -426,  -426,  -426,  -426,  -122,
    -426,  -426,  -426,   120,  -426,  -426,  -426,  -426,   -72,  -426,
    -426,  -426,  -426
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    60,    20,    85,    21,   286,   401,   180,    22,
      23,    88,    24,   132,   189,    90,   130,   481,   255,   181,
     237,   290,   369,   182,   240,   372,   183,   243,   373,   184,
     335,   336,   375,   497,   498,   499,   500,   370,   402,   121,
     168,   225,   324,   371,   403,   122,   169,   227,   325,   123,
     170,   229,   326,   124,   171,   231,   327,    25,    74,   128,
      58,   246,   301,   302,   303,   378,   413,   447,   304,   316,
     457,   456,   458,   352,   485,   482,   354,   460,    26,    27,
      28,    64,   260,    65,   312,   419,   146,   317,    67,   264,
      43,    47,    48,    29,    63,   259,   384,   418,   479,    30,
      66,   200,   388,   263,   347,   480,   387,   422,    31,    78,
     223,   274,   433,   361,   531,   435,   490,   510,   492,   514,
     465,   513,    75,   152,   208,   154,   210,   149,   150,   155,
     156,   157,   158,   160,   216,   162,   218,    98,   111,   205,
      32,   113,   271,   321,   432,   358,    33,    81,   285,   173,
     232,   284,   366,   166,   318,   357,   395,    34,    91,   137,
     138,   343,   306,   341,   139,   193,   307,   449,   478,   534,
     140,   249,   476
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    57,   120,    79,    80,    92,    93,   270,    61,    96,
     376,   305,   362,   330,   187,   235,   194,   363,   196,   133,
     134,   135,    86,   238,   511,     1,     2,     3,   512,   319,
     241,   110,   483,   484,    35,    87,    36,     4,    37,   175,
     147,   176,   177,   178,   309,    94,    95,     5,   236,     6,
       7,    69,     8,   163,   190,     9,   239,    10,   320,    11,
     508,    12,    13,   242,   136,    14,    15,    16,   115,   342,
      38,   257,   188,   247,    17,    39,    18,    40,   191,    41,
      55,    42,   179,    70,    71,    72,    73,    44,   202,   141,
     437,   206,   207,   400,   209,   438,   211,   212,   213,   214,
     215,    45,   217,    46,   219,   186,   359,   116,   117,   118,
     119,    49,   420,   469,    99,   100,   101,   421,   515,   516,
     220,   299,   288,   289,   102,   103,   104,   105,   106,   107,
     108,   109,   349,   350,   300,   351,   527,    52,    50,    51,
     528,   142,   463,   464,  -100,   248,   -90,   -95,   501,    54,
     266,   439,   267,   283,    59,    68,    55,   430,   268,    56,
     269,   272,    50,    51,   273,   414,    99,   100,   101,    77,
      62,   518,   519,   520,   521,   145,   102,   103,   104,   105,
     106,   107,   108,   109,    76,    55,    82,    84,   440,   441,
     442,   443,    83,   203,    89,    97,   293,   112,   125,   296,
      99,   100,   101,   114,   126,   127,   131,   283,   143,   144,
     102,   103,   104,   105,   106,   107,   108,   109,    99,   100,
     101,   250,   251,   252,   253,   254,   148,   151,   102,   103,
     104,   105,   106,   107,   108,   109,   153,   161,   159,   310,
     311,   329,   131,   164,   165,   167,   332,   172,   174,   185,
      55,   192,   195,   197,   346,   198,   199,   204,   201,   221,
     222,   380,   224,   265,   226,   230,   233,    99,   100,   101,
     234,   228,   244,   355,   256,   245,   261,   102,   103,   104,
     105,   106,   107,   108,   109,   258,   262,   283,    99,   100,
     101,   275,   276,   278,   277,   385,   279,   381,   102,   103,
     104,   105,   106,   107,   108,   109,   280,   281,   282,   287,
     291,   292,   294,   308,   297,   295,   298,   399,   314,   322,
      99,   100,   101,   313,   315,   404,   323,   328,   331,   392,
     102,   103,   104,   105,   106,   107,   108,   109,   396,   416,
     338,   339,   337,   344,   345,   348,   333,    59,    99,   100,
     101,   334,   340,   353,   356,   360,   368,   436,   102,   103,
     104,   105,   106,   107,   108,   109,   445,   446,   424,   367,
     374,   377,   382,   379,   386,   451,   389,   390,   394,   397,
     398,   486,    99,   100,   101,   391,   444,   405,   393,   407,
     415,   466,   102,   103,   104,   105,   106,   107,   108,   109,
     -88,   410,   409,   411,   412,   417,   425,   423,   431,   434,
     428,   426,   461,   462,   427,   429,   448,   450,   452,   453,
     454,   467,   455,   459,   475,   468,   477,   470,   471,   472,
     487,   473,   474,   488,   489,   496,   504,   507,   529,   491,
      99,   503,   509,   517,   494,   522,   523,   524,   525,   530,
     535,   408,   129,   532,   364,   495,   502,   406,   365,   505,
     506,   526,   493,   383,   537,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     536,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   533
};

static const yytype_int16 yycheck[] =
{
      20,    24,    81,    47,    48,    63,    64,   221,    28,    67,
     336,   249,   324,   286,   129,    16,   138,   325,   140,     7,
       8,     9,    16,    16,    52,     3,     4,     5,    56,    18,
      16,    75,   457,   458,    53,    29,    23,    15,    23,    10,
      98,    12,    13,    14,   258,    65,    66,    25,    49,    27,
      28,    23,    30,   111,    23,    33,    49,    35,    47,    37,
     485,    39,    40,    49,    52,    43,    44,    45,    16,   307,
      23,   193,   130,   188,    52,    18,    54,    18,    47,    23,
      52,    36,    53,    55,    56,    57,    58,    29,   146,    24,
     402,   149,   150,   366,   152,   403,   154,   155,   156,   157,
     158,    52,   160,    23,   162,   128,   320,    55,    56,    57,
      58,    23,    42,   439,    49,    50,    51,    47,   492,   493,
     164,    16,    56,    57,    59,    60,    61,    62,    63,    64,
      65,    66,    55,    56,    29,    58,   510,     0,    50,    51,
     514,    24,    59,    60,    55,   189,    57,    58,   474,    52,
     208,    18,   210,   232,    48,    53,    52,   395,   216,    55,
     218,    46,    50,    51,    49,   379,    49,    50,    51,    23,
      18,   497,   498,   499,   500,    24,    59,    60,    61,    62,
      63,    64,    65,    66,    52,    52,    50,    49,    55,    56,
      57,    58,    51,    24,    50,    23,   240,    49,    36,   243,
      49,    50,    51,    54,    47,    55,    24,   286,    19,    19,
      59,    60,    61,    62,    63,    64,    65,    66,    49,    50,
      51,    10,    11,    12,    13,    14,    49,    49,    59,    60,
      61,    62,    63,    64,    65,    66,    49,    66,    65,   259,
     260,   285,    24,    52,    52,    52,   290,    22,    53,    17,
      52,     6,    52,    18,   312,    18,    27,    49,    18,    47,
      24,   340,    56,    24,    57,    55,    24,    49,    50,    51,
      23,    58,    49,   317,    23,    49,    23,    59,    60,    61,
      62,    63,    64,    65,    66,    47,    31,   366,    49,    50,
      51,    22,    17,    17,    22,    24,    22,   341,    59,    60,
      61,    62,    63,    64,    65,    66,    17,    22,    17,    17,
      17,    55,    17,    19,    18,    58,    18,   361,    32,    52,
      49,    50,    51,    23,    34,   369,    56,    22,    49,   352,
      59,    60,    61,    62,    63,    64,    65,    66,   358,   383,
      52,    24,    55,    19,    19,    18,    49,    48,    49,    50,
      51,    49,    49,    38,    22,    24,    16,   401,    59,    60,
      61,    62,    63,    64,    65,    66,   410,   411,   388,    24,
      52,    17,    24,    47,    52,   419,    47,    47,    19,    18,
      18,   460,    49,    50,    51,    47,   409,    16,    47,    16,
      18,   435,    59,    60,    61,    62,    63,    64,    65,    66,
      57,    19,    47,    19,    29,    26,    37,    24,    19,    52,
      47,    37,   432,   433,    37,    37,    18,    18,    53,    53,
      18,    17,    19,    37,   447,    17,    39,    22,    22,    22,
      19,    22,    22,    19,    49,    19,    19,   481,    18,    49,
      49,    29,   486,    24,    52,    19,    52,    19,    19,    49,
      19,   373,    88,    52,   326,   466,   476,   372,   327,   479,
     480,   507,   465,   343,   536,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     534,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   531
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    43,    44,    45,    52,    54,    68,
      70,    72,    76,    77,    79,   124,   145,   146,   147,   160,
     166,   175,   207,   213,   224,    53,    23,    23,    23,    18,
      18,    23,    36,   157,    29,    52,    23,   158,   159,    23,
      50,    51,     0,   146,    52,    52,    55,   125,   127,    48,
      69,   146,    18,   161,   148,   150,   167,   155,    53,    23,
      55,    56,    57,    58,   125,   189,    52,    23,   176,    69,
      69,   214,    50,    51,    49,    71,    16,    29,    78,    50,
      82,   225,   189,   189,   146,   146,   189,    23,   204,    49,
      50,    51,    59,    60,    61,    62,    63,    64,    65,    66,
      69,   205,    49,   208,    54,    16,    55,    56,    57,    58,
      84,   106,   112,   116,   120,    36,    47,    55,   126,    82,
      83,    24,    80,     7,     8,     9,    52,   226,   227,   231,
     237,    24,    24,    19,    19,    24,   153,   189,    49,   194,
     195,    49,   190,    49,   192,   196,   197,   198,   199,    65,
     200,    66,   202,   189,    52,    52,   220,    52,   107,   113,
     117,   121,    22,   216,    53,    10,    12,    13,    14,    53,
      75,    86,    90,    93,    96,    17,   125,    80,   189,    81,
      23,    47,     6,   232,   226,    52,   226,    18,    18,    27,
     168,    18,   189,    24,    49,   206,   189,   189,   191,   189,
     193,   189,   189,   189,   189,   189,   201,   189,   203,   189,
      69,    47,    24,   177,    56,   108,    57,   114,    58,   118,
      55,   122,   217,    24,    23,    16,    49,    87,    16,    49,
      91,    16,    49,    94,    49,    49,   128,    80,    69,   238,
      10,    11,    12,    13,    14,    85,    23,   226,    47,   162,
     149,    23,    31,   170,   156,    24,   189,   189,   189,   189,
      85,   209,    46,    49,   178,    22,    17,    22,    17,    22,
      17,    22,    17,    84,   218,   215,    73,    17,    56,    57,
      88,    17,    55,    69,    17,    58,    69,    18,    18,    16,
      29,   129,   130,   131,   135,   220,   229,   233,    19,    85,
     146,   146,   151,    23,    32,    34,   136,   154,   221,    18,
      47,   210,    52,    56,   109,   115,   119,   123,    22,    69,
     218,    49,    69,    49,    49,    97,    98,    55,    52,    24,
      49,   230,   220,   228,    19,    19,   189,   171,    18,    55,
      56,    58,   140,    38,   143,    69,    22,   222,   212,    85,
      24,   180,   108,   114,   118,   122,   219,    24,    16,    89,
     104,   110,    92,    95,    52,    99,    99,    17,   132,    47,
      84,    69,    24,   230,   163,    24,    52,   173,   169,    47,
      47,    47,   125,    47,    19,   223,   146,    18,    18,    69,
     218,    74,   105,   111,    69,    16,   120,    16,   116,    47,
      19,    19,    29,   133,    85,    18,    69,    26,   164,   152,
      42,    47,   174,    24,   146,    37,    37,    37,    47,    37,
     220,    19,   211,   179,    52,   182,    69,   108,   114,    18,
      55,    56,    57,    58,   125,    69,    69,   134,    18,   234,
      18,    69,    53,    53,    18,    19,   138,   137,   139,    37,
     144,   146,   146,    59,    60,   187,    69,    17,    17,    99,
      22,    22,    22,    22,    22,   125,   239,    39,   235,   165,
     172,    84,   142,   142,   142,   141,    84,    19,    19,    49,
     183,    49,   185,   205,    52,   124,    19,   100,   101,   102,
     103,    99,   146,    29,    19,   146,   146,    69,   142,    69,
     184,    52,    56,   188,   186,   188,   188,    24,    99,    99,
      99,    99,    19,    52,    19,    19,   136,   188,   188,    18,
      49,   181,    52,   146,   236,    19,    69,   235
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    71,    70,    70,    70,    70,
      70,    70,    70,    73,    74,    72,    75,    75,    75,    75,
      76,    76,    76,    78,    77,    77,    79,    81,    80,    83,
      82,    82,    84,    84,    84,    84,    84,    84,    84,    84,
      85,    85,    85,    85,    85,    85,    86,    87,    87,    88,
      88,    89,    89,    90,    91,    92,    91,    93,    94,    95,
      94,    97,    96,    98,    96,    99,    99,    99,    99,    99,
     100,    99,   101,    99,   102,    99,   103,    99,    99,    99,
      99,   105,   104,   107,   106,   109,   108,   108,   111,   110,
     113,   112,   115,   114,   114,   117,   116,   119,   118,   118,
     121,   120,   123,   122,   122,   124,   124,   125,   126,   125,
     125,   128,   127,   129,   129,   130,   130,   132,   131,   134,
     133,   133,   135,   137,   136,   138,   136,   139,   136,   140,
     141,   136,   136,   142,   144,   143,   145,   146,   146,   146,
     147,   148,   149,   147,   150,   151,   152,   147,   153,   154,
     147,   147,   155,   156,   147,   147,   157,   147,   147,   158,
     147,   159,   147,   161,   162,   163,   160,   165,   164,   164,
     167,   168,   169,   166,   171,   172,   170,   170,   173,   174,
     174,   176,   177,   175,   179,   178,   180,   181,   178,   183,
     182,   184,   182,   185,   182,   186,   182,   187,   182,   188,
     188,   189,   189,   189,   189,   189,   190,   189,   191,   189,
     189,   192,   189,   193,   189,   194,   189,   195,   189,   196,
     189,   197,   189,   198,   189,   199,   189,   200,   189,   201,
     189,   202,   189,   203,   189,   204,   189,   205,   206,   206,
     208,   209,   207,   211,   210,   212,   210,   214,   215,   213,
     217,   216,   216,   218,   219,   218,   220,   221,   220,   223,
     222,   222,   225,   224,   226,   226,   226,   228,   227,   229,
     227,   230,   230,   231,   231,   231,   233,   234,   232,   232,
     236,   235,   235,   238,   239,   237
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     0,     0,     5,     1,     2,     1,
       1,     1,     1,     0,     0,    11,     1,     1,     1,     1,
       1,     1,     1,     0,     5,     4,     2,     0,     3,     0,
       4,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     5,     3,     1,
       1,     1,     1,     3,     2,     0,     5,     3,     2,     0,
       5,     0,     7,     0,     7,     3,     3,     3,     3,     3,
       0,     6,     0,     6,     0,     6,     0,     6,     5,     5,
       0,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     1,     3,     3,     1,     0,     4,
       1,     0,     6,     1,     0,     1,     1,     0,     4,     0,
       3,     0,     3,     0,     6,     0,     6,     0,     6,     0,
       0,     7,     0,     3,     0,     6,     6,     2,     2,     0,
       1,     0,     0,     9,     0,     0,     0,    12,     0,     0,
       9,     1,     0,     0,    10,     1,     0,     4,     1,     0,
       3,     0,     3,     0,     0,     0,    11,     0,     5,     0,
       0,     0,     0,    12,     0,     0,     9,     0,     2,     2,
       2,     0,     0,     7,     0,     7,     0,     0,    12,     0,
       4,     0,     5,     0,     4,     0,     5,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     0,     4,     0,     5,
       3,     0,     4,     0,     5,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       5,     0,     4,     0,     5,     0,     4,     3,     1,     0,
       0,     0,     8,     0,     6,     0,     4,     0,     0,     8,
       0,     3,     0,     1,     0,     4,     0,     0,     5,     0,
       3,     0,     0,     8,     2,     2,     0,     0,     7,     0,
       6,     2,     0,     1,     1,     1,     0,     0,     9,     0,
       0,     8,     0,     0,     0,    11
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 84 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";"); }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 116 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", replace_grave_with_quotes((yyvsp[0].ystr))); }
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 121 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 129 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 134 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 135 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 136 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 137 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 145 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 146 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 147 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 148 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 149 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 150 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 164 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 165 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 180 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 181 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 191 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 192 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 198 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 205 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 206 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 207 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 208 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 210 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 211 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 213 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 222 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 222 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 226 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 226 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 230 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 231 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 234 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 234 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 238 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 238 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 242 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 243 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 246 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 246 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 250 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 251 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 254 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 254 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 258 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 259 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 263 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++", (yyvsp[-2].ystr)); }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 264 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--", (yyvsp[-2].ystr)); }
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 268 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 269 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 274 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 288 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 292 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 297 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 301 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 302 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 303 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 304 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 304 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 313 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 319 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 335 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 335 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 339 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 341 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "break"); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "continue"); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 350 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 350 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 355 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 355 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 355 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 355 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 364 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 368 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 369 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "for ("); }
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "let %s ", (yyvsp[0].ystr)); }
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 377 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "of %s){", (yyvsp[-2].ystr)); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 377 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "= %d",(yyvsp[0].yint)); }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 383 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s < ", (yyvsp[-1].ystr)); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 384 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s <=", (yyvsp[-2].ystr)); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 385 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s > ", (yyvsp[-1].ystr)); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 386 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s >=", (yyvsp[-2].ystr)); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 387 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 387 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 391 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 392 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 395 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 396 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 397 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 398 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 400 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 401 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 402 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 403 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 404 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 405 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 406 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 407 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 408 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 409 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 410 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 411 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 412 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 413 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 414 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 415 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 415 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 419 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 428 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public static void %s(", (yyvsp[-1].ystr)); }
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 428 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 432 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 432 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 433 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 433 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 438 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 248:
#line 438 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 442 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 447 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 452 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 259:
#line 456 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 463 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 463 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 473 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 474 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 483 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 274:
#line 484 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 275:
#line 485 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 489 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 489 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 489 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 280:
#line 494 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 283:
#line 499 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 284:
#line 499 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 285:
#line 499 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2711 "parser.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 505 "parser.y" /* yacc.c:1906  */

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
