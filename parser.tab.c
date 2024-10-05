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
    extern int yylineno;

#line 71 "parser.tab.c" /* yacc.c:339  */

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
#line 7 "parser.y" /* yacc.c:355  */

    char* str;
    int num;

#line 171 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 188 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  160
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  399

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
       0,    21,    21,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    44,    45,    46,    51,
      52,    53,    54,    55,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    71,    72,    73,    74,    75,    76,    77,
      82,    85,    88,    91,    94,    97,   100,   103,   106,   110,
     114,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   132,   136,   137,   140,   144,   145,   148,
     152,   153,   156,   160,   161,   164,   168,   169,   173,   174,
     178,   179,   180,   181,   185,   186,   187,   188,   192,   193,
     194,   195,   199,   200,   201,   202,   206,   213,   214,   215,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,   230,   231,   235,   236,   237,   238,   239,   240,   241,
     242,   243,   244,   245,   246,   247,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   262,   266,   267,
     271,   272,   274,   276,   277,   281,   285,   286,   287,   291,
     292,   296,   297,   301,   302,   303,   307,   308,   312,   313,
     317
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "LET", "VAR", "CONST", "CLASS",
  "CONSTRUCTOR", "PRIVATE", "PUBLIC", "PROTECTED", "IDENTIFIER",
  "CLASS_IDENTIFIER", "NUMBER", "VOID", "STRING", "BOOLEAN", "ANY",
  "CONSOLE_LOG", "LBRACKET", "RBRACKET", "LBRACE", "RBRACE",
  "SINGLE_QUOTE", "DOUBLE_QUOTE", "COMMA", "LPARENTHESES", "RPARENTHESES",
  "IF", "ELSE", "WHILE", "DO", "DOT", "TRY", "CATCH", "FINALLY", "SWITCH",
  "CASE", "THROW", "NEW", "RETURN", "DEFAULT", "THIS", "FUNCTION",
  "PROMISE", "COLON", "SEMICOLON", "ASSIGN", "ADD", "MINUS",
  "STRING_LITERAL", "NUMBER_LITERAL", "FLOAT_LITERAL", "BOOLEAN_LITERAL",
  "ERROR_LITERAL", "'<'", "'>'", "'*'", "'/'", "'^'", "'%'", "'|'", "'&'",
  "$accept", "program", "declaration", "variable_types",
  "console_log_declarations", "all_possible_variables",
  "all_possible_variables_types", "number_declaration",
  "array_of_numbers_declaration", "float_declaration",
  "array_of_floats_declaration", "boolean_declaration",
  "array_of_booleans_declaration", "string_declaration",
  "array_of_strings_declaration", "object_declaration",
  "array_of_objects_declaration", "instance_new_class",
  "object_attribution", "array_of_numbers", "numbers", "array_of_floats",
  "floats", "array_of_booleans", "booleans", "array_of_strings", "strings",
  "array_of_objects", "objects", "increment_decrement_variable",
  "access_object", "access_object_nested", "access_class",
  "cases_of_switch_case", "default_case_of_switch_case", "commands",
  "command", "expressions", "function_declarartion", "call_a_function",
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

#define YYPACT_NINF -241

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-241)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     302,  -241,  -241,  -241,    84,   128,   -11,   121,   121,     5,
       7,   121,    -7,   121,    90,   116,   302,   107,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,
    -241,  -241,   302,  -241,  -241,  -241,   110,   115,    85,    89,
      -1,    12,   121,    16,    99,  -241,  -241,  -241,  -241,  -241,
     131,   148,   302,   302,   177,    87,   386,   129,  -241,  -241,
     -27,  -241,   210,   178,   153,  -241,  -241,  -241,  -241,    -3,
    -241,  -241,  -241,  -241,  -241,   124,   135,    14,    -6,   172,
     125,   189,   304,   161,   201,   168,   302,   176,   121,   121,
      53,    72,   121,   121,   121,   121,     8,     3,   302,   205,
     221,   219,   231,  -241,   247,   200,   220,  -241,  -241,  -241,
      52,   253,   210,   250,   210,   238,   239,   244,   245,   251,
     252,   254,   255,   228,   256,   115,   230,  -241,  -241,   233,
     121,   234,   121,   235,   257,  -241,  -241,   263,   259,  -241,
     264,   109,   402,   402,   121,   402,   121,   402,   402,   402,
     402,   402,   121,   402,   121,   402,   265,   274,   260,     1,
     268,   121,   240,   266,    20,    21,    47,    80,   298,   247,
      96,   285,   210,  -241,   267,  -241,   269,   270,   262,   271,
    -241,  -241,  -241,  -241,   132,   290,   291,   295,  -241,  -241,
     330,  -241,   346,  -241,    83,    83,   189,   288,   121,   402,
     402,   402,   402,   402,  -241,   121,   121,   273,   280,   281,
     282,   306,   369,    96,   284,   314,    29,   316,   287,   319,
     293,   323,   326,   318,   321,  -241,  -241,  -241,  -241,  -241,
     327,  -241,   303,   247,   332,    96,  -241,  -241,  -241,  -241,
     153,   333,   342,   343,   344,   347,   334,   115,   325,   328,
     329,   331,   371,  -241,  -241,  -241,     2,   402,   402,   193,
     340,   357,   358,   359,  -241,   337,   375,    96,   362,   338,
     364,   365,   367,   368,   373,   374,   153,   115,   366,  -241,
     115,   376,   387,  -241,   303,   398,   153,   153,   153,   153,
     153,  -241,  -241,  -241,  -241,  -241,   403,   404,   302,   121,
     302,   115,   115,   115,   115,  -241,   247,   416,   419,  -241,
    -241,   420,  -241,   421,  -241,   433,   431,   427,    96,  -241,
    -241,   434,   410,  -241,  -241,  -241,  -241,  -241,  -241,    83,
     189,   443,   241,   444,   422,   423,   424,   425,  -241,   302,
      78,   426,   428,   269,   429,   271,   430,   334,   432,   435,
     436,   446,   437,  -241,  -241,  -241,  -241,   302,   438,   219,
     219,   219,  -241,   455,  -241,  -241,  -241,  -241,   460,  -241,
    -241,  -241,   302,   451,   462,   463,   465,  -241,  -241,  -241,
    -241,  -241,   466,   476,  -241,   461,   302,  -241,   442,   470,
     471,   481,   302,  -241,   448,   473,   437,  -241,  -241
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      99,    16,    17,    18,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,    13,     3,
       8,     4,     9,     6,    11,     5,    10,     7,    12,    15,
      14,     2,    99,   109,   110,   112,     0,     0,     0,     0,
       0,    80,     0,     0,   113,   114,   115,   116,   118,   119,
       0,     0,    99,    99,     0,     0,     0,     0,     1,    98,
       0,    97,   148,     0,    62,    30,    24,    26,    28,     0,
      25,    27,    29,    31,    32,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    99,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    99,     0,
       0,    95,     0,   111,   142,     0,     0,   154,   153,   155,
       0,   157,   148,     0,   148,    74,    65,    68,    71,     0,
       0,     0,     0,     0,     0,     0,     0,    78,    79,     0,
       0,     0,     0,     0,     0,    81,   136,     0,    88,   117,
       0,     0,   126,   127,     0,   120,     0,   124,   128,   129,
     130,   131,     0,   132,     0,   134,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   142,
       0,     0,   148,   146,     0,   147,     0,     0,     0,     0,
      63,    66,    69,    72,     0,    77,   140,     0,   138,    20,
       0,    19,     0,    23,    83,    91,     0,   100,     0,   122,
     121,   125,   133,   135,   103,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,    39,    34,    35,    36,
       0,    37,   152,   142,     0,     0,    73,    64,    67,    70,
      62,    51,    52,    53,    54,    55,     0,     0,     0,     0,
       0,     0,     0,    82,    90,    89,     0,   123,   104,     0,
       0,     0,     0,     0,   108,     0,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    62,     0,     0,    38,
       0,     0,     0,   145,   152,     0,    62,    62,    62,    62,
      62,    76,   141,   139,    21,    22,     0,    84,    99,     0,
      99,     0,     0,     0,     0,   105,   142,     0,     0,    40,
      42,     0,    46,     0,    44,     0,     0,     0,     0,   151,
     150,     0,     0,    61,    56,    57,    58,    59,    60,    85,
       0,     0,     0,     0,     0,     0,     0,     0,   144,    99,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   159,   149,    87,    86,   101,    99,   106,    95,
      95,    95,    96,     0,    41,    43,    47,    45,     0,    49,
      48,    50,    99,     0,     0,     0,     0,    93,    92,    94,
     137,    75,     0,     0,   156,     0,    99,   160,     0,     0,
       0,     0,    99,   107,     0,     0,   159,   102,   158
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -241,  -241,  -241,  -241,  -241,   -36,  -210,  -241,  -241,  -241,
    -241,  -241,  -241,  -241,  -241,  -241,  -241,  -241,  -213,   188,
     320,   190,   322,   186,   324,   191,   335,  -241,  -240,  -241,
     -38,  -190,  -241,  -114,  -241,   -16,  -241,    -4,  -241,  -241,
    -230,  -161,  -241,  -101,  -241,   217,  -241,  -241,   108,  -241
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,   186,   232,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   124,    70,
     119,    71,   120,    72,   121,    73,   122,   348,    74,    30,
      48,   253,    49,   160,   211,    31,    32,    50,    33,    34,
     187,   163,    35,   111,   112,   281,   113,   172,   374,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      59,    69,    79,   266,    51,   254,   291,    54,   224,    56,
      77,   173,    41,   175,    41,    40,    61,   292,   105,    41,
     106,   131,   125,   298,   126,   284,    52,   285,    53,    42,
     299,    80,    55,    80,    42,    83,    99,   100,    82,   215,
     217,   129,   132,   135,    81,    43,    81,   317,    84,    78,
      43,   207,   208,    44,    45,    46,    47,   307,    44,    45,
      46,    47,   130,   316,    41,   154,   219,   216,   218,   152,
     140,   234,   282,   324,   325,   326,   327,   328,   169,    42,
     269,   270,   156,    41,   142,   143,   145,   147,   148,   149,
     150,   151,   153,   155,   220,    43,    36,   170,    42,   221,
     144,    57,   251,    44,    45,    46,    47,   368,   351,   225,
     226,   227,   228,   229,    43,   252,    58,   230,    60,   146,
      41,   209,    44,    45,    46,    47,   190,   222,   192,   116,
     117,    62,    41,    75,    63,    42,    64,   199,    76,   354,
     200,   102,   201,    41,    85,   338,   245,    42,   202,   231,
     203,    43,    86,   240,    37,   104,   198,   212,   255,    44,
      45,    46,    47,    43,   123,    65,    66,    67,    68,    98,
     127,    44,    45,    46,    47,   134,    38,    39,    87,    88,
      89,   128,   241,   242,   243,   244,    90,    91,    92,    93,
      94,    95,    96,    97,   257,    87,    88,    89,   101,   133,
      41,   258,   259,    90,    91,    92,    93,    94,    95,    96,
      97,   137,   138,   164,   300,   165,   166,   167,   107,   108,
     109,   110,   139,   141,    87,    88,    89,   157,   115,   116,
     117,   118,    90,    91,    92,    93,    94,    95,    96,    97,
      87,    88,    89,   158,   319,   377,   378,   379,    90,    91,
      92,    93,    94,    95,    96,    97,   159,   161,   162,   168,
     171,   174,   357,   176,   177,   334,   335,   336,   337,   178,
     179,   180,   181,   184,   182,   183,   188,   194,   185,   189,
     191,   193,   331,   195,   333,   213,   197,   204,    87,    88,
      89,   196,   355,   214,   206,   332,    90,    91,    92,    93,
      94,    95,    96,    97,   205,     1,     2,     3,     4,   210,
     223,   233,   235,     5,   117,   246,   247,   256,   260,   115,
       6,   116,   248,   363,   118,   261,   262,   263,   264,   267,
       7,   136,     8,     9,   268,    10,   271,   272,    11,   273,
      12,   375,    13,   275,   277,    14,   274,   276,   278,   279,
     280,    87,    88,    89,   283,    64,   382,   249,   286,    90,
      91,    92,    93,    94,    95,    96,    97,   287,   288,   289,
     390,   293,   290,   250,   294,   295,   395,    87,    88,    89,
     301,   296,   297,   305,   309,    90,    91,    92,    93,    94,
      95,    96,    97,    87,    88,    89,   265,   302,   303,   304,
     306,    90,    91,    92,    93,    94,    95,    96,    97,   308,
     310,   318,   311,   312,   321,   313,    87,    88,    89,   314,
     323,   315,   320,   329,    90,    91,    92,    93,    94,    95,
      96,    97,   103,    87,    88,    89,   330,   339,   340,   343,
     345,    90,    91,    92,    93,    94,    95,    96,    97,    87,
      88,    89,   347,   349,   350,   352,   353,    90,    91,    92,
      93,    94,    95,    96,    97,   356,   358,   372,   359,   360,
     361,   362,   364,   376,   365,   366,   367,   380,   369,   373,
     381,   370,   371,   383,   384,   385,   386,   388,   387,   391,
     389,   392,   394,   393,   396,   397,   341,   237,   342,   346,
     238,   322,   344,   239,   398,     0,     0,     0,     0,     0,
       0,   236
};

static const yytype_int16 yycheck[] =
{
      16,    37,    40,   213,     8,   195,   246,    11,   169,    13,
      11,   112,    11,   114,    11,    26,    32,   247,    45,    11,
      47,    27,    25,    21,    27,   235,    21,   240,    21,    26,
      28,    19,    39,    19,    26,    19,    52,    53,    42,    19,
      19,    27,    48,    81,    32,    42,    32,   277,    32,    50,
      42,    50,    51,    50,    51,    52,    53,   267,    50,    51,
      52,    53,    48,   276,    11,    62,    19,    47,    47,    61,
      86,   172,   233,   286,   287,   288,   289,   290,    26,    26,
      51,    52,    98,    11,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    47,    42,    12,    45,    26,    19,
      47,    11,    19,    50,    51,    52,    53,   347,   318,    13,
      14,    15,    16,    17,    42,    32,     0,    21,    11,    47,
      11,   159,    50,    51,    52,    53,   130,    47,   132,    51,
      52,    21,    11,    48,    19,    26,    21,   141,    49,   329,
     144,    54,   146,    11,    45,   306,   184,    26,   152,    53,
     154,    42,    21,    21,    26,    26,    47,   161,   196,    50,
      51,    52,    53,    42,    11,    50,    51,    52,    53,    21,
      46,    50,    51,    52,    53,    50,    48,    49,    47,    48,
      49,    46,    50,    51,    52,    53,    55,    56,    57,    58,
      59,    60,    61,    62,   198,    47,    48,    49,    21,    27,
      11,   205,   206,    55,    56,    57,    58,    59,    60,    61,
      62,    50,    11,    13,    21,    15,    16,    17,     8,     9,
      10,    11,    54,    47,    47,    48,    49,    22,    50,    51,
      52,    53,    55,    56,    57,    58,    59,    60,    61,    62,
      47,    48,    49,    22,   280,   359,   360,   361,    55,    56,
      57,    58,    59,    60,    61,    62,    37,    26,    11,    39,
       7,    11,    21,    25,    25,   301,   302,   303,   304,    25,
      25,    20,    20,    45,    20,    20,    46,    20,    22,    46,
      46,    46,   298,    20,   300,    45,    22,    22,    47,    48,
      49,    32,   330,    27,    34,   299,    55,    56,    57,    58,
      59,    60,    61,    62,    30,     3,     4,     5,     6,    41,
      12,    26,    45,    11,    52,    25,    25,    29,    45,    50,
      18,    51,    27,   339,    53,    45,    45,    45,    22,    45,
      28,    27,    30,    31,    20,    33,    20,    50,    36,    20,
      38,   357,    40,    20,    26,    43,    53,    21,    27,    22,
      47,    47,    48,    49,    22,    21,   372,    27,    25,    55,
      56,    57,    58,    59,    60,    61,    62,    25,    25,    25,
     386,    46,    25,    27,    46,    46,   392,    47,    48,    49,
      40,    50,    11,    46,    46,    55,    56,    57,    58,    59,
      60,    61,    62,    47,    48,    49,    27,    40,    40,    40,
      25,    55,    56,    57,    58,    59,    60,    61,    62,    47,
      46,    45,    47,    46,    27,    47,    47,    48,    49,    46,
      22,    47,    46,    20,    55,    56,    57,    58,    59,    60,
      61,    62,    46,    47,    48,    49,    32,    21,    19,    19,
      19,    55,    56,    57,    58,    59,    60,    61,    62,    47,
      48,    49,    19,    22,    27,    21,    46,    55,    56,    57,
      58,    59,    60,    61,    62,    22,    22,    21,    46,    46,
      46,    46,    46,    35,    46,    46,    46,    22,    46,    42,
      20,    46,    46,    32,    22,    22,    21,    11,    22,    47,
      29,    21,    11,    22,    46,    22,   308,   177,   308,   313,
     178,   284,   311,   179,   396,    -1,    -1,    -1,    -1,    -1,
      -1,   176
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    11,    18,    28,    30,    31,
      33,    36,    38,    40,    43,    64,    65,    66,    67,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      92,    98,    99,   101,   102,   105,    12,    26,    48,    49,
      26,    11,    26,    42,    50,    51,    52,    53,    93,    95,
     100,   100,    21,    21,   100,    39,   100,    11,     0,    98,
      11,    98,    21,    19,    21,    50,    51,    52,    53,    68,
      82,    84,    86,    88,    91,    48,    49,    11,    50,    93,
      19,    32,   100,    19,    32,    45,    21,    47,    48,    49,
      55,    56,    57,    58,    59,    60,    61,    62,    21,    98,
      98,    21,    54,    46,    26,    45,    47,     8,     9,    10,
      11,   106,   107,   109,   112,    50,    51,    52,    53,    83,
      85,    87,    89,    11,    81,    25,    27,    46,    46,    27,
      48,    27,    48,    27,    50,    93,    27,    50,    11,    54,
      98,    47,   100,   100,    47,   100,    47,   100,   100,   100,
     100,   100,    61,   100,    62,   100,    98,    22,    22,    37,
      96,    26,    11,   104,    13,    15,    16,    17,    39,    26,
      45,     7,   110,   106,    11,   106,    25,    25,    25,    25,
      20,    20,    20,    20,    45,    22,    68,   103,    46,    46,
     100,    46,   100,    46,    20,    20,    32,    22,    47,   100,
     100,   100,   100,   100,    22,    30,    34,    50,    51,    93,
      41,    97,   100,    45,    27,    19,    47,    19,    47,    19,
      47,    19,    47,    12,   104,    13,    14,    15,    16,    17,
      21,    53,    69,    26,   106,    45,    89,    83,    85,    87,
      21,    50,    51,    52,    53,    93,    25,    25,    27,    27,
      27,    19,    32,    94,    94,    93,    29,   100,   100,   100,
      45,    45,    45,    45,    22,    27,    69,    45,    20,    51,
      52,    20,    50,    20,    53,    20,    21,    26,    27,    22,
      47,   108,   104,    22,    69,    81,    25,    25,    25,    25,
      25,    91,   103,    46,    46,    46,    50,    11,    21,    28,
      21,    40,    40,    40,    40,    46,    25,    69,    47,    46,
      46,    47,    46,    47,    46,    47,    81,   103,    45,    68,
      46,    27,   108,    22,    81,    81,    81,    81,    81,    20,
      32,    98,   100,    98,    68,    68,    68,    68,   104,    21,
      19,    82,    84,    19,    88,    19,    86,    19,    90,    22,
      27,    69,    21,    46,    94,    93,    22,    21,    22,    46,
      46,    46,    46,    98,    46,    46,    46,    46,    91,    46,
      46,    46,    21,    42,   111,    98,    35,    96,    96,    96,
      22,    20,    98,    32,    22,    22,    21,    22,    11,    29,
      98,    47,    21,    22,    11,    98,    46,    22,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    82,    83,    83,    84,    85,    85,    86,
      87,    87,    88,    89,    89,    90,    91,    91,    92,    92,
      93,    93,    93,    93,    94,    94,    94,    94,    95,    95,
      95,    95,    96,    96,    96,    96,    97,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   101,   102,   102,
     103,   103,   104,   104,   104,   105,   106,   106,   106,   107,
     107,   108,   108,   109,   109,   109,   110,   110,   111,   111,
     112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     7,     7,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       7,     9,     7,     9,     7,     9,     7,     9,     9,     9,
       9,     3,     3,     3,     3,     3,     5,     5,     5,     5,
       5,     5,     0,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     5,     3,     4,     4,
       1,     3,     5,     4,     2,     3,     4,     4,     3,     5,
       5,     4,     7,     7,     7,     0,     5,     2,     2,     0,
       5,     9,    15,     5,     6,     7,     9,    13,     6,     1,
       1,     3,     1,     1,     1,     1,     1,     3,     1,     1,
       3,     4,     4,     5,     3,     4,     3,     3,     3,     3,
       3,     3,     3,     4,     3,     4,     3,    10,     5,     7,
       1,     3,     0,     3,     5,     7,     2,     2,     0,     6,
       5,     2,     0,     1,     1,     1,     7,     0,     7,     0,
       9
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
      
#line 1564 "parser.tab.c" /* yacc.c:1646  */
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
#line 320 "parser.y" /* yacc.c:1906  */

main( int argc, char *argv[] )
{
 if ( yyparse () == 0) printf("codigo sem erros \n");
}

yyerror (char *s) /* Called by yyparse on error */

{
printf ("%s  na linha %d\n", s, yylineno );
}
