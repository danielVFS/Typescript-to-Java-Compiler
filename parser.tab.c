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
    #include <string.h>
    #include <ctype.h>
    #include <stdbool.h>
    #include "sym.h"
    #define ASSERT(x,y) if(!(x)) printf("%s na  linha %d\n",(y),yylineno)
    extern int yylineno;
    FILE * output;

    char identifierDefined[100];

#line 79 "parser.tab.c" /* yacc.c:339  */

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
#line 14 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 180 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 197 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  49
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   465

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  394

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
       0,    34,    34,    41,    41,    42,    43,    44,    48,    49,
      50,    55,    56,    57,    61,    62,    66,    70,    74,    74,
      75,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      91,    92,    93,    94,    95,    96,    97,   103,   107,   108,
     111,   112,   116,   117,   123,   127,   128,   128,   134,   138,
     139,   139,   156,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   178,   178,   182,   182,   183,
     186,   186,   190,   190,   191,   194,   194,   198,   198,   199,
     202,   202,   206,   206,   207,   214,   215,   219,   220,   224,
     225,   225,   226,   227,   231,   232,   233,   234,   238,   239,
     240,   241,   245,   246,   247,   248,   252,   259,   260,   261,
     265,   266,   267,   268,   268,   268,   269,   270,   271,   272,
     273,   274,   275,   276,   277,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,   292,   292,   293,   293,
     294,   295,   296,   297,   298,   299,   300,   301,   302,   303,
     304,   308,   312,   313,   317,   318,   320,   322,   323,   327,
     331,   332,   333,   337,   338,   342,   343,   347,   348,   349,
     353,   354,   358,   359,   363
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
  "$@1", "possible_declarations", "variable_types",
  "console_log_declarations", "console_log_left_common",
  "console_log_right_common", "console_log_declaration_with_add", "$@2",
  "all_possible_variables", "all_possible_variables_types",
  "number_declaration", "number_or_array_declaration",
  "number_or_float_declaration", "array_of_numbers_and_floats_declaration",
  "string_declaration", "string_or_array_of_strings_declaration", "$@3",
  "boolean_declaration", "boolean_or_array_of_booleans_declaration", "$@4",
  "instance_new_class", "object_attribution", "array_of_numbers", "$@5",
  "numbers", "$@6", "array_of_floats", "$@7", "floats", "$@8",
  "array_of_booleans", "$@9", "booleans", "$@10", "array_of_strings",
  "$@11", "strings", "$@12", "objects", "increment_decrement_variable",
  "access_object", "$@13", "access_object_nested", "access_class",
  "cases_of_switch_case", "default_case_of_switch_case", "commands",
  "command", "$@14", "$@15", "expressions", "$@16", "$@17",
  "function_declarartion", "call_a_function", "function_values",
  "function_parameters", "class_declarations", "class_attributes",
  "class_attribute_declaration", "initialize_class_attribute_value",
  "access_modifiers", "constructor_definition", "set_property_with_this",
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

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -81

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     136,  -221,  -221,   -40,   -14,   344,     9,    30,    87,   344,
      71,   344,    66,    72,  -221,   122,   136,    86,  -221,    43,
    -221,  -221,  -221,   136,  -221,  -221,  -221,   119,  -221,   344,
       0,     1,    93,  -221,  -221,  -221,  -221,  -221,    42,  -221,
     136,   136,   134,    84,   355,   125,    31,   104,   107,  -221,
    -221,   106,   109,   109,  -221,     4,   226,   105,   111,   115,
    -221,   102,   136,   126,   344,   344,   322,   128,   344,   344,
     344,   344,    73,    -8,   344,   156,   162,   148,   161,  -221,
     160,    39,   166,  -221,  -221,  -221,  -221,    -1,  -221,  -221,
    -221,  -221,  -221,   165,   171,   179,   174,  -221,   193,   193,
    -221,  -221,  -221,    -4,   212,     4,   172,     4,  -221,   203,
     192,   205,   176,  -221,   207,   337,   363,   363,   344,   363,
    -221,   344,   363,   363,   363,   363,   344,   363,   344,   363,
     234,   197,   196,    59,   190,   344,   188,   210,   178,   183,
     198,   191,   211,   221,    31,   209,  -221,  -221,   206,   117,
     344,   213,  -221,  -221,   160,    23,   232,     4,  -221,   215,
    -221,    24,   176,    24,  -221,   237,   344,   363,   363,   344,
     363,   363,   363,   242,   344,   344,   222,   223,   224,   225,
     249,   278,    23,   231,   252,   258,   254,   260,   275,   282,
     279,   283,   159,   281,   284,   280,  -221,   285,    11,    12,
      36,  -221,  -221,  -221,  -221,   297,  -221,   287,  -221,  -221,
    -221,  -221,  -221,   286,  -221,   263,   160,   290,    23,   262,
     266,  -221,  -221,  -221,    60,   363,   363,  -221,   363,   142,
     277,   288,   289,   291,  -221,   272,   294,    23,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,   166,   295,   296,   298,
     305,   307,   301,    31,   303,    31,   313,    80,  -221,   314,
     299,   308,   327,   309,   320,  -221,   306,  -221,    31,   321,
     326,  -221,   263,   351,   341,   136,   344,   136,   136,    31,
      31,    31,    31,  -221,   160,   359,   178,   183,   198,   191,
     360,   166,   166,   166,   166,   166,  -221,  -221,  -221,   354,
     336,  -221,  -221,   339,   342,  -221,  -221,   348,  -221,  -221,
      23,  -221,  -221,   367,   350,    24,   176,   383,   187,   384,
     385,   362,   386,   387,   388,  -221,   136,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   389,   390,  -221,
    -221,  -221,   408,   394,  -221,  -221,  -221,  -221,   136,  -221,
     395,   148,   148,   148,  -221,   409,  -221,   382,   392,  -221,
    -221,   420,   421,   136,   410,   419,   422,   424,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,   425,   393,  -221,
     417,   136,  -221,   401,   428,   429,   400,   136,  -221,   406,
     431,   394,  -221,  -221
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     109,    12,    13,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,   109,     0,     5,     0,
       7,     6,     2,   109,   121,   122,   124,     0,    16,     0,
       0,    89,   125,   126,   127,   128,   130,   131,     0,   113,
     109,   109,     0,     0,     0,     0,     0,     0,     0,     1,
     108,     3,    20,    20,   107,   162,     0,     0,     0,     0,
      90,     0,   109,     0,     0,     0,     0,   136,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   105,     0,   123,
     156,    65,    64,    27,    21,    23,    25,     0,    22,    24,
      26,    28,    29,     0,     0,     0,     0,    18,     0,     0,
     168,   167,   169,     0,   171,   162,     0,   162,   150,     0,
      98,     0,     0,   129,     0,     0,   140,   141,     0,   132,
     138,     0,   142,   143,   144,   145,     0,   146,     0,   148,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    87,    88,     0,     0,
       0,     0,    14,    15,   156,     0,     0,   162,   160,     0,
     161,   101,     0,    93,    91,   110,     0,   134,   133,     0,
     137,   147,   149,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,    74,     0,    79,     0,
      84,     0,     0,    86,   154,     0,   152,     0,     0,     0,
       0,     4,     8,     9,    10,     0,    17,     0,    30,    36,
      31,    32,    33,     0,    34,   166,   156,     0,     0,     0,
       0,   100,    99,    92,     0,   135,   139,   114,   116,     0,
       0,     0,     0,     0,   120,     0,   157,     0,    67,    66,
      72,    71,    77,    76,    82,    81,    64,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,    37,     0,
       0,     0,     0,     0,     0,    19,     0,    35,     0,     0,
       0,   159,   166,     0,    94,   109,     0,   109,   109,     0,
       0,     0,     0,   117,   156,     0,     0,     0,     0,     0,
       0,    64,    64,    64,    64,    64,    85,   155,   153,     0,
       0,    40,    41,     0,     0,    45,    44,     0,    49,    48,
       0,   165,   164,     0,     0,    95,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   158,   109,    68,    73,    78,
      83,    63,    58,    59,    60,    61,    62,     0,     0,    39,
      46,    50,     0,   173,   163,    97,    96,   111,   109,   115,
     118,   105,   105,   105,   106,     0,    52,    65,     0,    42,
      43,     0,     0,   109,     0,     0,     0,     0,   103,   102,
     104,   151,    38,    80,    47,    75,    51,     0,     0,   170,
       0,   109,   174,     0,     0,     0,     0,   109,   119,     0,
       0,   173,   112,   172
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   -89,   398,
    -221,   -43,  -168,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -220,   114,  -221,   167,  -221,   116,
    -221,   168,  -221,    94,  -221,   169,  -221,    97,  -221,   170,
    -221,   208,  -221,   -18,  -221,  -158,  -221,  -206,  -221,   -16,
    -221,  -221,  -221,    -7,  -221,  -221,  -221,  -221,  -176,  -148,
    -221,   -87,  -221,   189,  -221,  -221,    74,  -221
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    96,   201,    17,    18,    19,   152,    98,
     150,   194,   215,   202,   258,   303,   358,   203,   261,   361,
     204,   264,   362,    20,   143,    88,   138,   185,   286,    89,
     139,   187,   287,    90,   140,   189,   288,    91,   141,   191,
     289,    92,    21,    36,   112,   221,    37,   134,   180,    22,
      23,    74,   277,    38,   121,   169,    24,    25,   195,   137,
      26,   104,   105,   269,   106,   157,   365,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      50,    53,    42,    87,    44,   223,   207,    54,    27,    28,
     153,   100,   101,   102,   236,    29,    57,    59,   158,   154,
     160,   144,    56,   145,    75,    76,   290,   256,   259,    58,
      60,    30,    39,   208,   209,   210,   211,   212,   155,    31,
     219,   213,    32,    33,    34,    35,   114,    81,    40,    82,
     272,   103,   262,   220,   128,   257,   260,   116,   117,   119,
      62,   122,   123,   124,   125,   127,   129,   130,   270,   285,
     217,   332,   333,   334,   335,   336,   214,   297,   275,   299,
     263,    83,    84,    85,    86,   276,    63,    64,    65,   -80,
      31,   -70,   -75,    52,   164,    46,    29,    66,    67,    68,
      69,    70,    71,    72,    73,    41,    31,    43,   167,   176,
     177,   168,    30,    45,   170,   178,   265,    47,    48,   171,
      31,   172,    49,    32,    33,    34,    35,   198,   181,   199,
     200,   301,   302,    51,   126,    61,   325,    55,    78,     1,
       2,     3,   342,   205,   222,   368,   369,   370,    80,    93,
      95,     4,    77,    94,    97,   109,   113,   345,   110,   225,
     278,     5,   226,     6,     7,   111,     8,   228,   229,     9,
     115,    10,   120,    11,   251,   131,    12,   246,    63,    64,
      65,   132,   133,    13,   135,    14,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    66,    67,    68,
      69,    70,    71,    72,    73,   348,    31,   136,   146,   247,
     248,   249,   250,   142,   147,   148,   149,   151,   156,   159,
     161,   162,   163,    31,   174,   311,   165,   175,   179,   184,
     182,    63,    64,    65,   183,   186,   321,   322,   323,   324,
     193,   190,    66,    67,    68,    69,    70,    71,    72,    73,
     108,   188,   196,   192,   197,   216,   206,   218,   173,   317,
     227,   319,   320,   224,   230,   231,   232,   233,   234,   318,
      63,    64,    65,   237,   238,   239,   240,   241,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    66,
      67,    68,    69,    70,    71,    72,    73,   242,   346,   243,
     245,   244,   235,   252,   254,   267,   253,   268,   255,   271,
     355,   266,   273,   274,   279,   283,   284,   291,   292,    82,
     293,   151,    63,    64,    65,   280,   281,   294,   282,   295,
     300,   304,   366,    66,    67,    68,    69,    70,    71,    72,
      73,    63,    64,    65,   307,    29,   298,   377,   310,   305,
     313,   306,    66,    67,    68,    69,    70,    71,    72,    73,
      29,    30,   308,   309,   312,   385,   118,    29,   315,    31,
     316,   390,    32,    33,    34,    35,    30,   326,   337,   331,
     338,   166,   339,    30,    31,   343,   340,    32,    33,    34,
      35,    31,   341,   344,    32,    33,    34,    35,    79,    63,
      64,    65,   347,   349,   350,   351,   357,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    66,    67,
      68,    69,    70,    71,    72,    73,   363,   367,   371,   352,
     353,   354,   356,   364,   -70,   372,   373,   375,   379,   378,
     383,   380,   381,   384,   382,   386,   387,   389,   388,   391,
     392,    99,   359,   327,   360,   328,   376,   329,   374,   330,
     296,   314,     0,     0,     0,   393
};

static const yytype_int16 yycheck[] =
{
      16,    19,     9,    46,    11,   163,   154,    23,    48,    23,
      99,     7,     8,     9,   182,    23,    16,    16,   105,    23,
     107,    22,    29,    24,    40,    41,   246,    16,    16,    29,
      29,    39,    23,    10,    11,    12,    13,    14,    42,    47,
      16,    18,    50,    51,    52,    53,    62,    16,    18,    18,
     218,    47,    16,    29,    62,    44,    44,    64,    65,    66,
      18,    68,    69,    70,    71,    72,    73,    74,   216,   237,
     157,   291,   292,   293,   294,   295,    53,   253,    18,   255,
      44,    50,    51,    52,    53,    25,    44,    45,    46,    50,
      47,    52,    53,    50,   112,    23,    23,    55,    56,    57,
      58,    59,    60,    61,    62,    18,    47,    36,   115,    50,
      51,   118,    39,    47,   121,   133,   205,    45,    46,   126,
      47,   128,     0,    50,    51,    52,    53,    10,   135,    12,
      13,    51,    52,    47,    61,    42,   284,    18,    54,     3,
       4,     5,   310,   150,   162,   351,   352,   353,    23,    45,
      44,    15,    18,    46,    45,    50,    54,   315,    47,   166,
      18,    25,   169,    27,    28,    50,    30,   174,   175,    33,
      44,    35,    44,    37,   192,    19,    40,    18,    44,    45,
      46,    19,    34,    47,    23,    49,    44,    45,    46,    55,
      56,    57,    58,    59,    60,    61,    62,    55,    56,    57,
      58,    59,    60,    61,    62,    18,    47,    47,    43,    50,
      51,    52,    53,    47,    43,    36,    42,    24,     6,    47,
      17,    29,    17,    47,    27,   268,    19,    31,    38,    51,
      42,    44,    45,    46,    24,    52,   279,   280,   281,   282,
      19,    50,    55,    56,    57,    58,    59,    60,    61,    62,
      24,    53,    43,    42,    48,    23,    43,    42,    24,   275,
      18,   277,   278,    26,    42,    42,    42,    42,    19,   276,
      44,    45,    46,    42,    22,    17,    22,    17,    44,    45,
      46,    55,    56,    57,    58,    59,    60,    61,    62,    55,
      56,    57,    58,    59,    60,    61,    62,    22,   316,    17,
      17,    22,    24,    22,    24,    19,    22,    44,    23,    19,
     326,    24,    50,    47,    37,    43,    22,    22,    22,    18,
      22,    24,    44,    45,    46,    37,    37,    22,    37,    22,
      17,    17,   348,    55,    56,    57,    58,    59,    60,    61,
      62,    44,    45,    46,    17,    23,    43,   363,    42,    50,
      24,    43,    55,    56,    57,    58,    59,    60,    61,    62,
      23,    39,    53,    43,    43,   381,    44,    23,    17,    47,
      29,   387,    50,    51,    52,    53,    39,    18,    24,    19,
      44,    44,    43,    39,    47,    18,    44,    50,    51,    52,
      53,    47,    44,    43,    50,    51,    52,    53,    43,    44,
      45,    46,    19,    19,    19,    43,    16,    44,    45,    46,
      55,    56,    57,    58,    59,    60,    61,    62,    55,    56,
      57,    58,    59,    60,    61,    62,    18,    32,    19,    43,
      43,    43,    43,    39,    52,    43,    16,    16,    19,    29,
      47,    19,    18,    26,    19,    44,    18,    47,    19,    43,
      19,    53,   338,   286,   338,   287,   362,   288,   361,   289,
     252,   272,    -1,    -1,    -1,   391
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    40,    47,    49,    64,    65,    68,    69,    70,
      86,   105,   112,   113,   119,   120,   123,    48,    23,    23,
      39,    47,    50,    51,    52,    53,   106,   109,   116,    23,
      18,    18,   116,    36,   116,    47,    23,    45,    46,     0,
     112,    47,    50,   106,   112,    18,   116,    16,    29,    16,
      29,    42,    18,    44,    45,    46,    55,    56,    57,    58,
      59,    60,    61,    62,   114,   112,   112,    18,    54,    43,
      23,    16,    18,    50,    51,    52,    53,    74,    88,    92,
      96,   100,   104,    45,    46,    44,    66,    45,    72,    72,
       7,     8,     9,    47,   124,   125,   127,   130,    24,    50,
      47,    50,   107,    54,   112,    44,   116,   116,    44,   116,
      44,   117,   116,   116,   116,   116,    61,   116,    62,   116,
     116,    19,    19,    34,   110,    23,    47,   122,    89,    93,
      97,   101,    47,    87,    22,    24,    43,    43,    36,    42,
      73,    24,    71,    71,    23,    42,     6,   128,   124,    47,
     124,    17,    29,    17,   106,    19,    44,   116,   116,   118,
     116,   116,   116,    24,    27,    31,    50,    51,   106,    38,
     111,   116,    42,    24,    51,    90,    52,    94,    53,    98,
      50,   102,    42,    19,    74,   121,    43,    48,    10,    12,
      13,    67,    76,    80,    83,   116,    43,   122,    10,    11,
      12,    13,    14,    18,    53,    75,    23,   124,    42,    16,
      29,   108,   106,   108,    26,   116,   116,    18,   116,   116,
      42,    42,    42,    42,    19,    24,    75,    42,    22,    17,
      22,    17,    22,    17,    22,    17,    18,    50,    51,    52,
      53,   106,    22,    22,    24,    23,    16,    44,    77,    16,
      44,    81,    16,    44,    84,    71,    24,    19,    44,   126,
     122,    19,    75,    50,    47,    18,    25,   115,    18,    37,
      37,    37,    37,    43,    22,    75,    91,    95,    99,   103,
      87,    22,    22,    22,    22,    22,   104,   121,    43,   121,
      17,    51,    52,    78,    17,    50,    43,    17,    53,    43,
      42,    74,    43,    24,   126,    17,    29,   112,   116,   112,
     112,    74,    74,    74,    74,   122,    18,    90,    94,    98,
     102,    19,    87,    87,    87,    87,    87,    24,    44,    43,
      44,    44,    75,    18,    43,   108,   106,    19,    18,    19,
      19,    43,    43,    43,    43,   112,    43,    16,    79,    88,
      92,    82,    85,    18,    39,   129,   112,    32,   110,   110,
     110,    19,    43,    16,   100,    16,    96,   112,    29,    19,
      19,    18,    19,    47,    26,   112,    44,    18,    19,    47,
     112,    43,    19,   129
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    66,    65,    65,    65,    65,    67,    67,
      67,    68,    68,    68,    69,    69,    70,    71,    73,    72,
      72,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      75,    75,    75,    75,    75,    75,    75,    76,    77,    77,
      78,    78,    79,    79,    80,    81,    82,    81,    83,    84,
      85,    84,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    89,    88,    91,    90,    90,
      93,    92,    95,    94,    94,    97,    96,    99,    98,    98,
     101,   100,   103,   102,   102,   104,   104,   105,   105,   106,
     107,   106,   106,   106,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   111,   112,   112,   112,
     113,   113,   113,   114,   115,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   116,   118,   116,
     116,   116,   116,   116,   116,   116,   116,   116,   116,   116,
     116,   119,   120,   120,   121,   121,   122,   122,   122,   123,
     124,   124,   124,   125,   125,   126,   126,   127,   127,   127,
     128,   128,   129,   129,   130
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     4,     2,     2,     0,     4,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     5,     3,
       1,     1,     1,     1,     3,     2,     0,     5,     3,     2,
       0,     5,     9,     3,     3,     3,     3,     3,     5,     5,
       5,     5,     5,     5,     0,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     1,     0,     4,     0,     4,     1,
       0,     4,     0,     4,     1,     5,     3,     4,     4,     1,
       0,     4,     5,     4,     2,     3,     4,     4,     3,     5,
       5,     4,     7,     7,     7,     0,     5,     2,     2,     0,
       5,     9,    15,     0,     0,     9,     6,     7,     9,    13,
       6,     1,     1,     3,     1,     1,     1,     1,     1,     3,
       1,     1,     3,     4,     4,     5,     0,     4,     0,     5,
       3,     3,     3,     3,     3,     3,     3,     4,     3,     4,
       3,    10,     5,     7,     1,     3,     0,     3,     5,     7,
       2,     2,     0,     6,     5,     2,     0,     1,     1,     1,
       7,     0,     7,     0,     9
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
        case 3:
#line 41 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1573 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 66 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.pritln("); }
#line 1579 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 70 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1585 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 74 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1591 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 107 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1597 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 108 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1603 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1609 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1615 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1621 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 127 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1627 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 128 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1633 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 134 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1639 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 138 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1645 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 139 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"booleans[] %s =", identifierDefined);}
#line 1651 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 178 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1657 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 178 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 182 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 183 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 186 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 186 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 190 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 191 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 194 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 194 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 198 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 202 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 202 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 206 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 207 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 224 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 225 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 268 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 268 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 268 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 281 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 282 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 292 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 293 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 1805 "parser.tab.c" /* yacc.c:1646  */
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
#line 366 "parser.y" /* yacc.c:1906  */

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
