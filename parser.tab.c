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
#line 12 "parser.y" /* yacc.c:355  */

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
#define YYLAST   511

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  50
/* YYNRULES -- Number of rules.  */
#define YYNRULES  161
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  405

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
       0,    36,    36,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    59,    60,    61,    65,
      66,    67,    68,    69,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    85,    86,    87,    88,    89,    90,    91,
      96,   100,   103,   107,   110,   114,   117,   121,   124,   125,
     129,   133,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   151,   155,   156,   159,   163,   164,
     167,   171,   172,   175,   179,   180,   183,   187,   188,   192,
     193,   197,   198,   199,   200,   204,   205,   206,   207,   211,
     212,   213,   214,   218,   219,   220,   221,   225,   232,   233,
     234,   238,   239,   240,   241,   242,   243,   244,   245,   246,
     247,   248,   249,   250,   254,   255,   256,   257,   258,   259,
     260,   261,   262,   263,   264,   265,   266,   267,   268,   269,
     270,   271,   272,   273,   274,   275,   276,   277,   281,   285,
     286,   290,   291,   293,   295,   296,   300,   304,   305,   306,
     310,   311,   315,   316,   320,   321,   322,   326,   327,   331,
     332,   336
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
  "variable_types", "console_log_declarations", "all_possible_variables",
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

#define YYPACT_NINF -307

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-307)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     104,  -307,  -307,   -29,    17,   368,   368,    32,    93,   368,
      81,   368,    96,   124,  -307,   122,   104,   105,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,
    -307,  -307,   104,  -307,  -307,  -307,   137,    68,   368,     2,
      75,    98,  -307,  -307,  -307,  -307,  -307,    39,   141,   104,
     104,   149,   111,   379,   135,    36,   119,   125,  -307,  -307,
     112,  -307,     6,    97,    45,   144,   241,   131,   136,   132,
     143,   165,   104,   173,   368,   368,   336,   351,   368,   368,
     368,   368,   127,   110,   104,   206,   207,   193,   205,  -307,
     183,   163,   184,  -307,  -307,  -307,  -307,   151,  -307,  -307,
    -307,  -307,  -307,   189,   190,    34,   198,  -307,  -307,  -307,
      -1,   229,     6,   219,     6,   224,   368,   225,   368,   226,
    -307,   220,   216,   253,  -307,  -307,   217,   361,   387,   387,
     368,   387,   368,   387,   387,   387,   387,   387,   368,   387,
     368,   387,   252,   245,   242,    73,   236,   368,   233,   255,
     258,   259,   260,   261,   267,   271,   272,   273,   235,   275,
      36,   262,  -307,  -307,    -5,     1,     5,     7,   251,   256,
     183,    14,   283,     6,  -307,   265,  -307,  -307,   268,  -307,
     292,  -307,    77,   143,    77,   282,   368,   387,   387,   387,
     387,   387,  -307,   368,   368,   269,   276,   277,   278,   290,
     311,    14,   280,   281,   264,   287,   257,  -307,  -307,  -307,
    -307,   171,   295,   310,   309,  -307,   317,   -22,   323,   291,
     325,   305,   326,   327,   342,   321,   337,  -307,  -307,  -307,
    -307,  -307,   344,  -307,   320,   183,   346,    14,   334,   335,
     329,   338,  -307,  -307,  -307,    87,   387,   387,   194,   355,
     356,   357,   359,  -307,   354,   377,    14,  -307,  -307,  -307,
    -307,   184,   384,   388,   394,   395,   404,   363,    36,   366,
     383,   385,   386,   406,   408,   409,   411,   412,   184,   184,
      36,   410,  -307,    36,   414,   431,  -307,   320,  -307,  -307,
     413,   429,   104,   368,   104,    36,    36,    36,    36,  -307,
     183,   441,   442,   184,   184,   184,   184,   184,  -307,  -307,
    -307,   444,  -307,  -307,   446,  -307,   447,  -307,   448,   449,
     450,   443,    14,  -307,  -307,   452,   422,    77,   143,   453,
     202,   454,   423,   428,   432,   433,  -307,   104,  -307,  -307,
    -307,  -307,  -307,  -307,    51,   434,   435,   281,   436,   257,
     437,   363,   438,   439,   440,   445,   456,   451,  -307,  -307,
    -307,  -307,   104,   455,   193,   193,   193,  -307,   465,  -307,
    -307,  -307,  -307,   468,  -307,  -307,  -307,  -307,   104,   457,
     470,   472,   474,  -307,  -307,  -307,  -307,  -307,   475,   458,
    -307,   467,   104,  -307,   459,   477,   478,   460,   104,  -307,
     461,   479,   451,  -307,  -307
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     100,    17,    18,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,   100,     0,    13,     3,
       8,     4,     9,     6,    11,     5,    10,     7,    12,    15,
      14,     2,   100,   110,   111,   113,     0,     0,     0,     0,
      81,   114,   115,   116,   117,   119,   120,     0,     0,   100,
     100,     0,     0,     0,     0,     0,     0,     0,     1,    99,
       0,    98,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   100,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   100,     0,     0,    96,     0,   112,
     143,     0,    63,    30,    24,    26,    28,     0,    25,    27,
      29,    31,    32,     0,     0,     0,     0,   155,   154,   156,
       0,   158,   149,     0,   149,     0,     0,     0,     0,     0,
     137,     0,    89,     0,    82,   118,     0,     0,   127,   128,
       0,   121,     0,   125,   129,   130,   131,   132,     0,   133,
       0,   135,     0,     0,     0,     0,     0,     0,     0,     0,
      75,    66,    69,    72,     0,     0,     0,     0,     0,     0,
       0,     0,    79,    80,     0,     0,     0,     0,     0,     0,
     143,     0,     0,   149,   147,     0,   148,    20,     0,    19,
       0,    23,    92,     0,    84,   101,     0,   123,   122,   126,
     134,   136,   104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    64,    67,    70,
      73,     0,    78,   141,     0,   139,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    39,    34,
      35,    36,     0,    37,   153,   143,     0,     0,     0,     0,
       0,     0,    91,    90,    83,     0,   124,   105,     0,     0,
       0,     0,     0,   109,     0,   144,     0,    74,    65,    68,
      71,    63,    52,    53,    54,    55,    56,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    63,    63,
       0,     0,    38,     0,     0,     0,   146,   153,    21,    22,
       0,    85,   100,     0,   100,     0,     0,     0,     0,   106,
     143,     0,     0,    63,    63,    63,    63,    63,    77,   142,
     140,     0,    40,    42,     0,    46,     0,    44,     0,     0,
       0,     0,     0,   152,   151,     0,     0,    86,     0,     0,
       0,     0,     0,     0,     0,     0,   145,   100,    62,    57,
      58,    59,    60,    61,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,   150,    88,
      87,   102,   100,   107,    96,    96,    96,    97,     0,    41,
      43,    47,    45,     0,    50,    48,    49,    51,   100,     0,
       0,     0,     0,    94,    93,    95,   138,    76,     0,     0,
     157,     0,   100,   161,     0,     0,     0,     0,   100,   108,
       0,     0,   160,   103,   159
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -307,  -307,  -307,  -307,  -307,   -54,  -195,  -307,  -307,  -307,
    -307,  -307,  -307,  -307,  -307,  -307,  -307,  -307,  -241,   185,
     296,   188,   297,   192,   300,   187,   306,  -307,  -259,  -307,
     -35,  -181,  -307,  -306,  -307,   -16,  -307,    -2,  -307,  -307,
    -225,  -165,  -307,  -102,  -307,   223,  -307,  -307,   109,  -307
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,   213,   234,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   159,    98,
     154,    99,   155,   100,   156,   101,   157,   352,   102,    30,
      45,   242,    46,   146,   199,    31,    32,    47,    33,    34,
     214,   149,    35,   111,   112,   284,   113,   173,   380,   114
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint16 yytable[] =
{
      59,    97,    65,   244,    48,   226,   255,    51,   308,    53,
     174,   216,   176,   107,   108,   109,    61,   218,    67,    36,
     302,   220,   170,   222,   227,   228,   229,   230,   231,   271,
     272,    68,   232,    85,    86,   124,    66,   319,   320,   217,
      37,   171,   287,   309,   164,   219,   165,   166,   167,   221,
      49,   223,    91,   110,    92,   321,   126,    72,   383,   384,
     385,   301,   339,   340,   341,   342,   343,   233,   142,   117,
     285,   236,   128,   129,   131,   133,   134,   135,   136,   137,
     139,   141,   168,    73,    74,    75,    93,    94,    95,    96,
     118,    69,   373,   240,    76,    77,    78,    79,    80,    81,
      82,    83,   151,   152,    70,   292,   241,     1,     2,     3,
     197,    50,   293,    69,   178,    63,   180,    52,    64,     4,
      40,   115,    58,   195,   196,   187,    70,   356,   188,     5,
     189,     6,     7,    38,     8,   336,   190,     9,   191,    10,
      71,    11,   116,    54,    12,   200,   359,    55,   243,    39,
      38,    13,    60,    14,   105,    62,   106,    40,    90,    84,
      41,    42,    43,    44,   103,    88,    39,    87,   119,    56,
      57,   104,   140,   160,    40,   161,   266,    41,    42,    43,
      44,   121,   123,   122,   246,    73,    74,    75,   138,   261,
      40,   247,   248,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    76,    77,    78,    79,    80,    81,
      82,    83,   294,   150,   151,   152,   153,   127,    40,   125,
     362,   262,   263,   264,   265,   143,   144,   145,   147,   323,
     148,   158,   162,   163,   169,   172,   185,   182,    73,    74,
      75,   332,   333,   334,   335,   183,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    76,    77,    78,
      79,    80,    81,    82,    83,   120,   175,   177,   179,   181,
     184,   192,   193,   194,   198,   201,   329,   211,   331,   202,
     203,   204,   205,   206,   207,    73,    74,    75,   208,   209,
     210,   330,   238,   360,   212,   224,    76,    77,    78,    79,
      80,    81,    82,    83,   225,   215,   235,   237,   245,   253,
     153,   249,    73,    74,    75,   151,   239,   267,   250,   251,
     252,   368,   256,    76,    77,    78,    79,    80,    81,    82,
      83,   150,   268,   269,   270,   254,    73,    74,    75,   152,
     273,   274,   275,   277,   280,   278,   381,    76,    77,    78,
      79,    80,    81,    82,    83,    73,    74,    75,   276,    38,
     279,   281,   388,   282,   283,   286,    76,    77,    78,    79,
      80,    81,    82,    83,    38,    39,   396,   288,   289,   290,
     130,    92,   401,    40,    38,   291,    41,    42,    43,    44,
      39,    38,   295,   296,   297,   132,   298,   299,    40,   300,
      39,    41,    42,    43,    44,   186,   303,    39,    40,   310,
     304,    41,    42,    43,    44,    40,   305,   306,    41,    42,
      43,    44,    89,    73,    74,    75,   307,   311,   312,   313,
     327,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    76,    77,    78,    79,    80,    81,    82,    83,
     314,   315,   322,   316,   317,   325,   318,   324,   328,   337,
     344,   338,   347,   349,   351,   358,   364,   355,   353,   354,
     357,   365,   361,   363,   378,   366,   367,   369,   370,   371,
     372,   374,   375,   376,   386,   387,   389,   382,   377,   390,
     379,   391,   392,   395,   393,   398,   345,   399,   403,   346,
     258,   348,   259,   397,   402,   394,   260,   400,   350,   257,
     326,   404
};

static const yytype_uint16 yycheck[] =
{
      16,    55,    37,   184,     6,   170,   201,     9,   267,    11,
     112,    16,   114,     7,     8,     9,    32,    16,    16,    48,
     261,    16,    23,    16,    10,    11,    12,    13,    14,    51,
      52,    29,    18,    49,    50,    70,    38,   278,   279,    44,
      23,    42,   237,   268,    10,    44,    12,    13,    14,    44,
      18,    44,    16,    47,    18,   280,    72,    18,   364,   365,
     366,   256,   303,   304,   305,   306,   307,    53,    84,    24,
     235,   173,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    48,    44,    45,    46,    50,    51,    52,    53,
      45,    16,   351,    16,    55,    56,    57,    58,    59,    60,
      61,    62,    51,    52,    29,    18,    29,     3,     4,     5,
     145,    18,    25,    16,   116,    47,   118,    36,    50,    15,
      47,    24,     0,    50,    51,   127,    29,   322,   130,    25,
     132,    27,    28,    23,    30,   300,   138,    33,   140,    35,
      42,    37,    45,    47,    40,   147,   327,    23,   183,    39,
      23,    47,    47,    49,    42,    18,    44,    47,    23,    18,
      50,    51,    52,    53,    45,    54,    39,    18,    24,    45,
      46,    46,    62,    22,    47,    24,   211,    50,    51,    52,
      53,    50,    50,    47,   186,    44,    45,    46,    61,    18,
      47,   193,   194,    44,    45,    46,    55,    56,    57,    58,
      59,    60,    61,    62,    55,    56,    57,    58,    59,    60,
      61,    62,    18,    50,    51,    52,    53,    44,    47,    54,
      18,    50,    51,    52,    53,    19,    19,    34,    23,   283,
      47,    47,    43,    43,    36,     6,    19,    17,    44,    45,
      46,   295,   296,   297,   298,    29,    44,    45,    46,    55,
      56,    57,    58,    59,    60,    61,    62,    55,    56,    57,
      58,    59,    60,    61,    62,    24,    47,    43,    43,    43,
      17,    19,    27,    31,    38,    42,   292,    42,   294,    24,
      22,    22,    22,    22,    17,    44,    45,    46,    17,    17,
      17,   293,    24,   328,    19,    44,    55,    56,    57,    58,
      59,    60,    61,    62,    48,    43,    23,    42,    26,    19,
      53,    42,    44,    45,    46,    51,    24,    22,    42,    42,
      42,   337,    42,    55,    56,    57,    58,    59,    60,    61,
      62,    50,    22,    24,    17,    24,    44,    45,    46,    52,
      17,    50,    17,    17,    23,    18,   362,    55,    56,    57,
      58,    59,    60,    61,    62,    44,    45,    46,    53,    23,
      18,    24,   378,    19,    44,    19,    55,    56,    57,    58,
      59,    60,    61,    62,    23,    39,   392,    43,    43,    50,
      44,    18,   398,    47,    23,    47,    50,    51,    52,    53,
      39,    23,    37,    37,    37,    44,    37,    43,    47,    22,
      39,    50,    51,    52,    53,    44,    22,    39,    47,    43,
      22,    50,    51,    52,    53,    47,    22,    22,    50,    51,
      52,    53,    43,    44,    45,    46,    22,    44,    43,    43,
      17,    44,    45,    46,    55,    56,    57,    58,    59,    60,
      61,    62,    55,    56,    57,    58,    59,    60,    61,    62,
      44,    43,    42,    44,    43,    24,    44,    43,    29,    18,
      16,    19,    16,    16,    16,    43,    43,    24,    19,    19,
      18,    43,    19,    19,    18,    43,    43,    43,    43,    43,
      43,    43,    43,    43,    19,    17,    29,    32,    43,    19,
      39,    19,    18,    26,    19,    18,   311,    19,    19,   311,
     204,   314,   205,    44,    43,    47,   206,    47,   316,   203,
     287,   402
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    40,    47,    49,    64,    65,    66,    67,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      92,    98,    99,   101,   102,   105,    48,    23,    23,    39,
      47,    50,    51,    52,    53,    93,    95,   100,   100,    18,
      18,   100,    36,   100,    47,    23,    45,    46,     0,    98,
      47,    98,    18,    47,    50,    93,   100,    16,    29,    16,
      29,    42,    18,    44,    45,    46,    55,    56,    57,    58,
      59,    60,    61,    62,    18,    98,    98,    18,    54,    43,
      23,    16,    18,    50,    51,    52,    53,    68,    82,    84,
      86,    88,    91,    45,    46,    42,    44,     7,     8,     9,
      47,   106,   107,   109,   112,    24,    45,    24,    45,    24,
      24,    50,    47,    50,    93,    54,    98,    44,   100,   100,
      44,   100,    44,   100,   100,   100,   100,   100,    61,   100,
      62,   100,    98,    19,    19,    34,    96,    23,    47,   104,
      50,    51,    52,    53,    83,    85,    87,    89,    47,    81,
      22,    24,    43,    43,    10,    12,    13,    14,    48,    36,
      23,    42,     6,   110,   106,    47,   106,    43,   100,    43,
     100,    43,    17,    29,    17,    19,    44,   100,   100,   100,
     100,   100,    19,    27,    31,    50,    51,    93,    38,    97,
     100,    42,    24,    22,    22,    22,    22,    17,    17,    17,
      17,    42,    19,    68,   103,    43,    16,    44,    16,    44,
      16,    44,    16,    44,    44,    48,   104,    10,    11,    12,
      13,    14,    18,    53,    69,    23,   106,    42,    24,    24,
      16,    29,    94,    93,    94,    26,   100,   100,   100,    42,
      42,    42,    42,    19,    24,    69,    42,    89,    83,    85,
      87,    18,    50,    51,    52,    53,    93,    22,    22,    24,
      17,    51,    52,    17,    50,    17,    53,    17,    18,    18,
      23,    24,    19,    44,   108,   104,    19,    69,    43,    43,
      50,    47,    18,    25,    18,    37,    37,    37,    37,    43,
      22,    69,    81,    22,    22,    22,    22,    22,    91,   103,
      43,    44,    43,    43,    44,    43,    44,    43,    44,    81,
      81,   103,    42,    68,    43,    24,   108,    17,    29,    98,
     100,    98,    68,    68,    68,    68,   104,    18,    19,    81,
      81,    81,    81,    81,    16,    82,    84,    16,    88,    16,
      86,    16,    90,    19,    19,    24,    69,    18,    43,    94,
      93,    19,    18,    19,    43,    43,    43,    43,    98,    43,
      43,    43,    43,    91,    43,    43,    43,    43,    18,    39,
     111,    98,    32,    96,    96,    96,    19,    17,    98,    29,
      19,    19,    18,    19,    47,    26,    98,    44,    18,    19,
      47,    98,    43,    19,   111
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    69,    69,    69,    69,    69,    69,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    78,
      79,    80,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    82,    83,    83,    84,    85,    85,
      86,    87,    87,    88,    89,    89,    90,    91,    91,    92,
      92,    93,    93,    93,    93,    94,    94,    94,    94,    95,
      95,    95,    95,    96,    96,    96,    96,    97,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   100,   100,
     100,   100,   100,   100,   100,   100,   100,   100,   101,   102,
     102,   103,   103,   104,   104,   104,   105,   106,   106,   106,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   111,
     111,   112
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     5,
       5,     7,     7,     5,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       7,     9,     7,     9,     7,     9,     7,     9,     9,     9,
       9,     9,     3,     3,     3,     3,     3,     5,     5,     5,
       5,     5,     5,     0,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     5,     3,     4,
       4,     1,     3,     5,     4,     2,     3,     4,     4,     3,
       5,     5,     4,     7,     7,     7,     0,     5,     2,     2,
       0,     5,     9,    15,     5,     6,     7,     9,    13,     6,
       1,     1,     3,     1,     1,     1,     1,     1,     3,     1,
       1,     3,     4,     4,     5,     3,     4,     3,     3,     3,
       3,     3,     3,     3,     4,     3,     4,     3,    10,     5,
       7,     1,     3,     0,     3,     5,     7,     2,     2,     0,
       6,     5,     2,     0,     1,     1,     1,     7,     0,     7,
       0,     9
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
        case 19:
#line 65 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println(%s);", (yyvsp[-2].ystr)); }
#line 1574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 66 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println(%s);", (yyvsp[-2].ystr)); }
#line 1580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 67 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println(%s + %s);", (yyvsp[-4].ystr), (yyvsp[-2].ystr)); }
#line 1586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 68 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println(%s + %s);", (yyvsp[-4].ystr), (yyvsp[-2].ystr)); }
#line 1592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 85 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 86 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 87 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 88 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 89 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 90 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 91 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ""); }
#line 1634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 96 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d;", (yyvsp[-5].ystr), (yyvsp[-1].yint));}
#line 1640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 103 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f;", (yyvsp[-5].ystr), (yyvsp[-1].yfloat));}
#line 1646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 110 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s;", (yyvsp[-5].ystr), (yyvsp[-1].ystr));}
#line 1652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 117 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s;", (yyvsp[-5].ystr), (yyvsp[-1].ystr));}
#line 1658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 197 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = (yyvsp[0].ystr); }
#line 1664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 254 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = (yyvsp[0].ystr); }
#line 1670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 257 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = (yyvsp[0].ystr); }
#line 1676 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1680 "parser.tab.c" /* yacc.c:1646  */
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
#line 339 "parser.y" /* yacc.c:1906  */

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
