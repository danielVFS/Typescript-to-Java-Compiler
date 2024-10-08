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
    #include <ctype.h>
    #include <stdbool.h>
    #include "sym.h"
    #define ASSERT(x,y) if(!(x)) printf("%s na  linha %d\n",(y),yylineno)
    extern int yylineno;
    FILE * output;

#line 76 "parser.tab.c" /* yacc.c:339  */

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
    COLON = 297,
    SEMICOLON = 298,
    ASSIGN = 299,
    ADD = 300,
    MINUS = 301,
    IDENTIFIER = 302,
    CLASS_IDENTIFIER = 303,
    LET = 304,
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
#line 11 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 177 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 194 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  58
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   514

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  57
/* YYNRULES -- Number of rules.  */
#define YYNRULES  168
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  415

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    60,    62,     2,
       2,     2,    57,     2,     2,     2,     2,    58,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      55,     2,    56,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    54,    55,    56,    60,
      61,    61,    61,    62,    63,    64,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    80,    81,    82,    83,    84,
      85,    86,    91,    95,    98,   102,   105,   109,   112,   116,
     119,   120,   124,   128,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   146,   150,   151,   154,
     158,   159,   162,   166,   167,   170,   174,   175,   178,   182,
     183,   187,   188,   192,   193,   193,   194,   195,   199,   200,
     201,   202,   206,   207,   208,   209,   213,   214,   215,   216,
     220,   227,   228,   229,   233,   234,   235,   236,   236,   236,
     237,   238,   239,   240,   241,   242,   243,   244,   245,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   260,   261,   261,   262,   263,   264,   265,   266,   267,
     268,   269,   270,   271,   272,   276,   280,   281,   285,   286,
     288,   290,   291,   295,   299,   300,   301,   305,   306,   310,
     311,   315,   316,   317,   321,   322,   326,   327,   331
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
  "PROMISE", "COLON", "SEMICOLON", "ASSIGN", "ADD", "MINUS", "IDENTIFIER",
  "CLASS_IDENTIFIER", "LET", "STRING_LITERAL", "NUMBER_LITERAL",
  "FLOAT_LITERAL", "BOOLEAN_LITERAL", "ERROR_LITERAL", "'<'", "'>'", "'*'",
  "'/'", "'^'", "'%'", "'|'", "'&'", "$accept", "program", "declaration",
  "variable_types", "console_log_declarations", "$@1", "$@2",
  "all_possible_variables", "all_possible_variables_types",
  "number_declaration", "array_of_numbers_declaration",
  "float_declaration", "array_of_floats_declaration",
  "boolean_declaration", "array_of_booleans_declaration",
  "string_declaration", "array_of_strings_declaration",
  "object_declaration", "array_of_objects_declaration",
  "instance_new_class", "object_attribution", "array_of_numbers",
  "numbers", "array_of_floats", "floats", "array_of_booleans", "booleans",
  "array_of_strings", "strings", "array_of_objects", "objects",
  "increment_decrement_variable", "access_object", "$@3",
  "access_object_nested", "access_class", "cases_of_switch_case",
  "default_case_of_switch_case", "commands", "command", "$@4", "$@5",
  "expressions", "$@6", "$@7", "function_declarartion", "call_a_function",
  "function_values", "function_parameters", "class_declarations",
  "class_attributes", "class_attribute_declaration",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "set_property_with_this",
  "class_function_declarartion", YY_NULLPTR
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
     305,   306,   307,   308,   309,    60,    62,    42,    47,    94,
      37,   124,    38
};
# endif

#define YYPACT_NINF -268

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-268)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     110,  -268,  -268,   -34,    44,   337,    59,    65,   104,   337,
      58,   337,   -23,   -10,  -268,   112,   110,    84,  -268,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -268,  -268,   110,  -268,  -268,  -268,   118,    41,   337,    31,
      74,    97,  -268,  -268,  -268,  -268,  -268,    40,  -268,   110,
     110,   108,   102,   363,   128,    11,   131,   127,  -268,  -268,
     -12,  -268,     2,    -1,    42,   130,   158,   200,   133,   138,
     141,  -268,   139,   110,   148,   337,   337,   330,   150,   337,
     337,   337,   337,   312,   188,   337,   176,   177,   174,   187,
    -268,   178,    67,   179,  -268,  -268,  -268,  -268,   122,  -268,
    -268,  -268,  -268,  -268,   185,   186,    94,   194,  -268,  -268,
    -268,    -5,   225,     2,   189,     2,   337,   190,   337,  -268,
     191,  -268,   215,   213,   230,   201,  -268,   247,   352,   371,
     371,   337,   371,  -268,   337,   371,   371,   371,   371,   337,
     371,   337,   371,   219,   222,   236,   111,   231,   337,   226,
     248,   249,   251,   260,   262,   270,   271,   277,   278,   254,
     279,    11,   256,  -268,  -268,     1,     4,     6,     7,   253,
     266,   178,    28,   290,     2,  -268,   273,  -268,   246,  -268,
     265,   292,  -268,    76,   201,    76,  -268,   291,   337,   371,
     371,   337,   371,   371,   371,   300,   337,   337,   286,   287,
     289,   294,   318,   288,    28,   296,   269,   301,   302,   303,
    -268,  -268,  -268,  -268,   162,   317,   319,   316,  -268,   325,
     120,   340,   308,   344,   313,   350,   353,   360,   345,   346,
    -268,  -268,  -268,  -268,  -268,   366,  -268,   335,   178,   374,
      28,   351,   354,   355,   361,   348,  -268,  -268,  -268,    98,
     371,   371,  -268,   371,   142,   364,   373,   375,   376,  -268,
     357,   392,    28,  -268,  -268,  -268,  -268,   179,   412,   413,
     414,   415,   416,   421,    11,   397,   398,   400,   401,   402,
     404,   405,   407,   408,   179,   179,    11,   399,  -268,    11,
     410,   424,  -268,   335,  -268,  -268,  -268,   428,   422,   110,
     337,   110,   110,    11,    11,    11,    11,  -268,   178,   436,
     437,   179,   179,   179,   179,   179,  -268,  -268,  -268,   439,
    -268,  -268,   441,  -268,   442,  -268,   443,   444,   445,   438,
      28,  -268,  -268,   447,   417,    76,   201,   448,   161,   449,
     450,   418,   423,   427,   429,  -268,   110,  -268,  -268,  -268,
    -268,  -268,  -268,   123,   430,   431,   269,   432,   303,   433,
     421,   434,   435,   440,   446,   453,   451,  -268,  -268,  -268,
    -268,   110,  -268,   452,   174,   174,   174,  -268,   460,  -268,
    -268,  -268,  -268,   463,  -268,  -268,  -268,  -268,   110,   456,
     462,   467,   464,  -268,  -268,  -268,  -268,  -268,   468,   454,
    -268,   465,   110,  -268,   455,   470,   473,   457,   110,  -268,
     459,   474,   451,  -268,  -268
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     103,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,   103,     0,    13,     3,
       8,     4,     9,     6,    11,     5,    10,     7,    12,    15,
      14,     2,   103,   115,   116,   118,     0,     0,     0,     0,
      83,   119,   120,   121,   122,   124,   125,     0,   107,   103,
     103,     0,     0,     0,     0,     0,     0,     0,     1,   102,
       0,   101,   156,    83,     0,     0,     0,     0,     0,     0,
       0,    84,     0,   103,     0,     0,     0,     0,   130,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
     117,   150,     0,    65,    32,    26,    28,    30,     0,    27,
      29,    31,    33,    34,     0,     0,     0,     0,   162,   161,
     163,     0,   165,   156,     0,   156,     0,     0,     0,    21,
       0,   144,     0,    92,     0,     0,   123,     0,     0,   134,
     135,     0,   126,   132,     0,   136,   137,   138,   139,     0,
     140,     0,   142,     0,     0,     0,     0,     0,     0,     0,
       0,    77,    68,    71,    74,     0,     0,     0,     0,     0,
       0,     0,     0,    81,    82,     0,     0,     0,     0,     0,
       0,   150,     0,     0,   156,   154,     0,   155,     0,    19,
       0,     0,    25,    95,     0,    87,    85,   104,     0,   128,
     127,     0,   131,   141,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      66,    69,    72,    75,     0,    80,   148,     0,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      35,    41,    36,    37,    38,     0,    39,   160,   150,     0,
       0,     0,     0,     0,     0,     0,    94,    93,    86,     0,
     129,   133,   108,   110,     0,     0,     0,     0,     0,   114,
       0,   151,     0,    76,    67,    70,    73,    65,    54,    55,
      56,    57,    58,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    65,    65,     0,     0,    40,     0,
       0,     0,   153,   160,    23,    24,    22,     0,    88,   103,
       0,   103,   103,     0,     0,     0,     0,   111,   150,     0,
       0,    65,    65,    65,    65,    65,    79,   149,   147,     0,
      42,    44,     0,    48,     0,    46,     0,     0,     0,     0,
       0,   159,   158,     0,     0,    89,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   152,   103,    64,    59,    60,
      61,    62,    63,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   167,   157,    91,    90,
     105,   103,   109,   112,    99,    99,    99,   100,     0,    43,
      45,    49,    47,     0,    52,    50,    51,    53,   103,     0,
       0,     0,     0,    97,    96,    98,   145,    78,     0,     0,
     164,     0,   103,   168,     0,     0,     0,     0,   103,   113,
       0,     0,   167,   106,   166
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -268,  -268,  -268,  -268,  -268,  -268,  -268,   -52,  -197,  -268,
    -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,  -268,
    -259,   175,   293,   184,   297,   171,   298,   192,   304,  -268,
    -267,  -268,   -36,  -268,  -180,  -268,  -246,  -268,   -16,  -268,
    -268,  -268,    -7,  -268,  -268,  -268,  -268,  -215,  -159,  -268,
     -94,  -268,   203,  -268,  -268,    85,  -268
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    65,   181,   216,   237,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     160,    99,   155,   100,   156,   101,   157,   102,   158,   361,
     103,    30,    45,   125,   246,    46,   147,   202,    31,    32,
      85,   301,    47,   134,   191,    33,    34,   217,   150,    35,
     112,   113,   290,   114,   174,   390,   115
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      59,    66,    51,    98,    53,   248,   316,   261,   310,   108,
     109,   110,   229,    55,    36,    70,    61,   219,   171,   175,
     221,   177,   223,   225,    54,   327,   328,    92,    71,    93,
     106,    67,   107,    86,    87,    56,    57,   172,   230,   231,
     232,   233,   234,   293,   116,   220,   235,    68,   222,   111,
     224,   226,   348,   349,   350,   351,   352,   127,    73,   317,
      69,    94,    95,    96,    97,   309,   117,    37,   129,   130,
     132,   329,   135,   136,   137,   138,   140,   142,   143,   291,
     239,   236,    48,    49,    74,    75,    76,   118,    63,   186,
      70,    64,   244,   383,    52,    77,    78,    79,    80,    81,
      82,    83,    84,    71,   165,   245,   166,   167,   168,   178,
     200,   180,    58,     1,     2,     3,   299,   151,   152,   153,
     154,   189,    50,   300,   190,     4,    88,   192,   393,   394,
     395,    60,   193,   365,   194,     5,    62,     6,     7,    72,
       8,   203,   169,     9,   161,    10,   162,    11,   247,   345,
      12,    91,    74,    75,    76,   368,    89,    13,    40,    14,
     302,   198,   199,    77,    78,    79,    80,    81,    82,    83,
      84,   277,   278,   105,   152,   153,   104,   119,   272,   371,
     267,   250,   120,   122,   251,   123,    74,    75,    76,   253,
     254,   124,   128,   126,   133,   144,   145,    77,    78,    79,
      80,    81,    82,    83,    84,    74,    75,    76,   146,    40,
     148,    38,   268,   269,   270,   271,    77,    78,    79,    80,
      81,    82,    83,    84,   121,   149,   159,    39,   163,   164,
     170,   173,   183,   179,   182,    40,   176,   331,    41,    42,
      43,    44,   184,   195,    74,    75,    76,   185,    40,   196,
     141,   341,   342,   343,   344,    77,    78,    79,    80,    81,
      82,    83,    84,    74,    75,    76,   187,   197,   204,   201,
     241,   206,   205,   207,    77,    78,    79,    80,    81,    82,
      83,    84,   208,   337,   209,   339,   340,   210,   211,   242,
      74,    75,    76,   338,   212,   213,   214,   227,   215,   218,
     369,    77,    78,    79,    80,    81,    82,    83,    84,    74,
      75,    76,   260,   238,   228,   240,   243,   249,   252,   151,
      77,    78,    79,    80,    81,    82,    83,    84,   255,   256,
     378,   257,    74,    75,    76,    38,   258,   259,   262,   273,
     275,   274,   276,    77,    78,    79,    80,    81,    82,    83,
      84,    39,   152,    38,   153,   391,   154,   279,   280,    40,
      38,   281,    41,    42,    43,    44,   282,   283,   286,    39,
     287,   284,   398,   139,   131,    38,    39,    40,   285,   289,
      41,    42,    43,    44,    40,   288,   406,    41,    42,    43,
      44,    39,   411,   292,   294,   298,   188,   295,   296,    40,
     307,   303,    41,    42,    43,    44,    90,    74,    75,    76,
     304,   297,   305,   306,   308,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    77,    78,    79,    80,
      81,    82,    83,    84,   311,   312,   313,   314,   315,    93,
     318,   330,   319,   320,   321,   335,   322,   323,   333,   324,
     325,   336,   326,   332,   346,   353,   347,   356,   358,   360,
     367,   374,   364,   362,   363,   366,   375,   370,   372,   373,
     376,   388,   377,   379,   380,   381,   382,   384,   385,   396,
     397,   400,   402,   386,   392,   399,   401,   403,   408,   387,
     389,   405,   409,   413,   354,   359,   334,   414,     0,   407,
     264,   404,   412,   355,   410,   265,     0,   266,     0,     0,
     263,     0,     0,     0,   357
};

static const yytype_int16 yycheck[] =
{
      16,    37,     9,    55,    11,   185,   273,   204,   267,     7,
       8,     9,   171,    23,    48,    16,    32,    16,    23,   113,
      16,   115,    16,    16,    47,   284,   285,    16,    29,    18,
      42,    38,    44,    49,    50,    45,    46,    42,    10,    11,
      12,    13,    14,   240,    45,    44,    18,    16,    44,    47,
      44,    44,   311,   312,   313,   314,   315,    73,    18,   274,
      29,    50,    51,    52,    53,   262,    24,    23,    75,    76,
      77,   286,    79,    80,    81,    82,    83,    84,    85,   238,
     174,    53,    23,    18,    44,    45,    46,    45,    47,   125,
      16,    50,    16,   360,    36,    55,    56,    57,    58,    59,
      60,    61,    62,    29,    10,    29,    12,    13,    14,   116,
     146,   118,     0,     3,     4,     5,    18,    50,    51,    52,
      53,   128,    18,    25,   131,    15,    18,   134,   374,   375,
     376,    47,   139,   330,   141,    25,    18,    27,    28,    42,
      30,   148,    48,    33,    22,    35,    24,    37,   184,   308,
      40,    23,    44,    45,    46,   335,    54,    47,    47,    49,
      18,    50,    51,    55,    56,    57,    58,    59,    60,    61,
      62,    51,    52,    46,    51,    52,    45,    47,   214,    18,
      18,   188,    24,    50,   191,    47,    44,    45,    46,   196,
     197,    50,    44,    54,    44,    19,    19,    55,    56,    57,
      58,    59,    60,    61,    62,    44,    45,    46,    34,    47,
      23,    23,    50,    51,    52,    53,    55,    56,    57,    58,
      59,    60,    61,    62,    24,    47,    47,    39,    43,    43,
      36,     6,    17,    43,    43,    47,    47,   289,    50,    51,
      52,    53,    29,    24,    44,    45,    46,    17,    47,    27,
      62,   303,   304,   305,   306,    55,    56,    57,    58,    59,
      60,    61,    62,    44,    45,    46,    19,    31,    42,    38,
      24,    22,    24,    22,    55,    56,    57,    58,    59,    60,
      61,    62,    22,   299,    22,   301,   302,    17,    17,    24,
      44,    45,    46,   300,    17,    17,    42,    44,    19,    43,
     336,    55,    56,    57,    58,    59,    60,    61,    62,    44,
      45,    46,    24,    23,    48,    42,    24,    26,    18,    50,
      55,    56,    57,    58,    59,    60,    61,    62,    42,    42,
     346,    42,    44,    45,    46,    23,    42,    19,    42,    22,
      24,    22,    17,    55,    56,    57,    58,    59,    60,    61,
      62,    39,    51,    23,    52,   371,    53,    17,    50,    47,
      23,    17,    50,    51,    52,    53,    53,    17,    23,    39,
      24,    18,   388,    61,    44,    23,    39,    47,    18,    44,
      50,    51,    52,    53,    47,    19,   402,    50,    51,    52,
      53,    39,   408,    19,    43,    47,    44,    43,    43,    47,
      43,    37,    50,    51,    52,    53,    43,    44,    45,    46,
      37,    50,    37,    37,    22,    44,    45,    46,    55,    56,
      57,    58,    59,    60,    61,    62,    55,    56,    57,    58,
      59,    60,    61,    62,    22,    22,    22,    22,    22,    18,
      43,    42,    44,    43,    43,    17,    44,    43,    24,    44,
      43,    29,    44,    43,    18,    16,    19,    16,    16,    16,
      43,    43,    24,    19,    19,    18,    43,    19,    19,    19,
      43,    18,    43,    43,    43,    43,    43,    43,    43,    19,
      17,    19,    18,    43,    32,    29,    19,    19,    18,    43,
      39,    26,    19,    19,   319,   324,   293,   412,    -1,    44,
     207,    47,    43,   319,    47,   208,    -1,   209,    -1,    -1,
     206,    -1,    -1,    -1,   322
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    40,    47,    49,    64,    65,    66,    67,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      94,   101,   102,   108,   109,   112,    48,    23,    23,    39,
      47,    50,    51,    52,    53,    95,    98,   105,    23,    18,
      18,   105,    36,   105,    47,    23,    45,    46,     0,   101,
      47,   101,    18,    47,    50,    68,    95,   105,    16,    29,
      16,    29,    42,    18,    44,    45,    46,    55,    56,    57,
      58,    59,    60,    61,    62,   103,   101,   101,    18,    54,
      43,    23,    16,    18,    50,    51,    52,    53,    70,    84,
      86,    88,    90,    93,    45,    46,    42,    44,     7,     8,
       9,    47,   113,   114,   116,   119,    45,    24,    45,    47,
      24,    24,    50,    47,    50,    96,    54,   101,    44,   105,
     105,    44,   105,    44,   106,   105,   105,   105,   105,    61,
     105,    62,   105,   105,    19,    19,    34,    99,    23,    47,
     111,    50,    51,    52,    53,    85,    87,    89,    91,    47,
      83,    22,    24,    43,    43,    10,    12,    13,    14,    48,
      36,    23,    42,     6,   117,   113,    47,   113,   105,    43,
     105,    69,    43,    17,    29,    17,    95,    19,    44,   105,
     105,   107,   105,   105,   105,    24,    27,    31,    50,    51,
      95,    38,   100,   105,    42,    24,    22,    22,    22,    22,
      17,    17,    17,    17,    42,    19,    70,   110,    43,    16,
      44,    16,    44,    16,    44,    16,    44,    44,    48,   111,
      10,    11,    12,    13,    14,    18,    53,    71,    23,   113,
      42,    24,    24,    24,    16,    29,    97,    95,    97,    26,
     105,   105,    18,   105,   105,    42,    42,    42,    42,    19,
      24,    71,    42,    91,    85,    87,    89,    18,    50,    51,
      52,    53,    95,    22,    22,    24,    17,    51,    52,    17,
      50,    17,    53,    17,    18,    18,    23,    24,    19,    44,
     115,   111,    19,    71,    43,    43,    43,    50,    47,    18,
      25,   104,    18,    37,    37,    37,    37,    43,    22,    71,
      83,    22,    22,    22,    22,    22,    93,   110,    43,    44,
      43,    43,    44,    43,    44,    43,    44,    83,    83,   110,
      42,    70,    43,    24,   115,    17,    29,   101,   105,   101,
     101,    70,    70,    70,    70,   111,    18,    19,    83,    83,
      83,    83,    83,    16,    84,    86,    16,    90,    16,    88,
      16,    92,    19,    19,    24,    71,    18,    43,    97,    95,
      19,    18,    19,    19,    43,    43,    43,    43,   101,    43,
      43,    43,    43,    93,    43,    43,    43,    43,    18,    39,
     118,   101,    32,    99,    99,    99,    19,    17,   101,    29,
      19,    19,    18,    19,    47,    26,   101,    44,    18,    19,
      47,   101,    43,    19,   118
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      68,    69,    67,    67,    67,    67,    70,    70,    70,    70,
      70,    70,    70,    70,    70,    71,    71,    71,    71,    71,
      71,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    80,    81,    82,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    85,    85,    86,
      87,    87,    88,    89,    89,    90,    91,    91,    92,    93,
      93,    94,    94,    95,    96,    95,    95,    95,    97,    97,
      97,    97,    98,    98,    98,    98,    99,    99,    99,    99,
     100,   101,   101,   101,   102,   102,   102,   103,   104,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   105,
     105,   105,   105,   105,   105,   105,   105,   105,   105,   105,
     106,   105,   107,   105,   105,   105,   105,   105,   105,   105,
     105,   105,   105,   105,   105,   108,   109,   109,   110,   110,
     111,   111,   111,   112,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   116,   117,   117,   118,   118,   119
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       0,     0,     7,     7,     7,     5,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     7,     9,     7,     9,     7,     9,     7,     9,
       9,     9,     9,     9,     3,     3,     3,     3,     3,     5,
       5,     5,     5,     5,     5,     0,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     5,
       3,     4,     4,     1,     0,     4,     5,     4,     2,     3,
       4,     4,     3,     5,     5,     4,     7,     7,     7,     0,
       5,     2,     2,     0,     5,     9,    15,     0,     0,     9,
       6,     7,     9,    13,     6,     1,     1,     3,     1,     1,
       1,     1,     1,     3,     1,     1,     3,     4,     4,     5,
       0,     4,     0,     5,     3,     3,     3,     3,     3,     3,
       3,     4,     3,     4,     3,    10,     5,     7,     1,     3,
       0,     3,     5,     7,     2,     2,     0,     6,     5,     2,
       0,     1,     1,     1,     7,     0,     7,     0,     9
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
        case 20:
#line 61 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.pritln("); }
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 61 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 61 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 91 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d;", (yyvsp[-5].ystr), (yyvsp[-1].yint));}
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f;", (yyvsp[-5].ystr), (yyvsp[-1].yfloat));}
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 105 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s;", (yyvsp[-5].ystr), (yyvsp[-1].ystr));}
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 112 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s;", (yyvsp[-5].ystr), (yyvsp[-1].ystr));}
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 193 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 236 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 236 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 236 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 249 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 250 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 260 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 261 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1674 "parser.tab.c" /* yacc.c:1646  */
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
#line 334 "parser.y" /* yacc.c:1906  */

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
