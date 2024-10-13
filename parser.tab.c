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

#line 86 "parser.tab.c" /* yacc.c:339  */

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
    COLON = 300,
    SEMICOLON = 301,
    ASSIGN = 302,
    ADD = 303,
    MINUS = 304,
    IDENTIFIER = 305,
    CLASS_IDENTIFIER = 306,
    LET = 307,
    STRING_LITERAL = 308,
    NUMBER_LITERAL = 309,
    FLOAT_LITERAL = 310,
    BOOLEAN_LITERAL = 311
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 189 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 206 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  50
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   495

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  164
/* YYNRULES -- Number of rules.  */
#define YYNRULES  273
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  521

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    62,    64,     2,
       2,     2,    59,     2,     2,     2,     2,    60,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,     2,    58,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    61,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    63,     2,     2,     2,     2,     2,
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
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    43,    43,    50,    50,    51,    52,    53,    54,    55,
      56,    60,    60,    63,    64,    65,    66,    71,    72,    73,
      77,    77,    78,    82,    86,    90,    90,    91,    95,    96,
      97,    98,    99,   100,   101,   102,   106,   107,   108,   109,
     110,   111,   117,   121,   122,   125,   126,   130,   131,   137,
     141,   142,   142,   148,   152,   153,   153,   159,   159,   160,
     160,   170,   171,   172,   173,   174,   175,   175,   176,   176,
     177,   177,   178,   178,   179,   180,   181,   187,   187,   191,
     191,   195,   195,   196,   199,   199,   203,   203,   207,   207,
     208,   211,   211,   215,   215,   216,   219,   219,   223,   223,
     224,   236,   237,   241,   242,   242,   243,   248,   248,   252,
     253,   258,   259,   263,   263,   267,   267,   268,   272,   281,
     281,   282,   282,   283,   283,   284,   284,   284,   285,   289,
     289,   293,   293,   299,   306,   307,   308,   312,   313,   313,
     313,   314,   314,   314,   315,   315,   316,   317,   317,   317,
     318,   319,   319,   320,   321,   325,   325,   325,   325,   329,
     329,   330,   334,   334,   334,   334,   338,   338,   338,   339,
     343,   347,   348,   352,   352,   352,   352,   352,   356,   356,
     357,   357,   358,   358,   359,   359,   360,   360,   364,   365,
     368,   369,   370,   371,   372,   373,   373,   374,   374,   375,
     376,   376,   377,   377,   378,   378,   379,   379,   380,   380,
     381,   381,   382,   382,   383,   383,   384,   384,   385,   385,
     386,   386,   387,   387,   388,   388,   392,   396,   397,   401,
     401,   401,   405,   405,   406,   406,   411,   411,   415,   415,
     416,   419,   420,   420,   423,   425,   425,   429,   429,   430,
     436,   436,   440,   441,   442,   446,   446,   447,   447,   451,
     452,   456,   457,   458,   462,   462,   462,   463,   467,   467,
     468,   472,   472,   472
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
  "PROMISE", "INSTANCEOF", "FOR", "BREAK", "COLON", "SEMICOLON", "ASSIGN",
  "ADD", "MINUS", "IDENTIFIER", "CLASS_IDENTIFIER", "LET",
  "STRING_LITERAL", "NUMBER_LITERAL", "FLOAT_LITERAL", "BOOLEAN_LITERAL",
  "'<'", "'>'", "'*'", "'/'", "'^'", "'%'", "'|'", "'&'", "$accept",
  "program", "declaration", "$@1", "instance_new_class", "$@2",
  "possible_declarations", "variable_types", "console_log_declarations",
  "$@3", "console_log_left_common", "console_log_right_common",
  "console_log_declaration_with_add", "$@4", "all_possible_variables",
  "all_possible_variables_types", "number_declaration",
  "number_or_array_declaration", "number_or_float_declaration",
  "array_of_numbers_and_floats_declaration", "string_declaration",
  "string_or_array_of_strings_declaration", "$@5", "boolean_declaration",
  "boolean_or_array_of_booleans_declaration", "$@6", "object_declaration",
  "$@7", "$@8", "object_attribution", "$@9", "$@10", "$@11", "$@12",
  "array_of_numbers", "$@13", "array_of_numbers_only_values", "$@14",
  "numbers", "$@15", "array_of_floats", "$@16",
  "array_of_floats_only_values", "$@17", "floats", "$@18",
  "array_of_booleans", "$@19", "booleans", "$@20", "array_of_strings",
  "$@21", "strings", "$@22", "increment_decrement_variable",
  "access_object", "$@23", "access_object_on_bracket", "$@24",
  "acess_more_objects_on_bracket", "access_object_nested",
  "access_identifier_on_object_nested", "$@25",
  "nested_dot_identifier_on_object", "$@26",
  "access_bracket_on_object_nested", "cases_of_switch_case", "$@27",
  "$@28", "$@29", "$@30", "$@31", "returns_of_switch", "$@32",
  "default_case_of_switch_case", "$@33", "set_value_on_class", "commands",
  "command", "$@34", "$@35", "$@36", "$@37", "$@38", "$@39", "$@40",
  "$@41", "if_declaration", "$@42", "$@43", "$@44", "else_declaration",
  "$@45", "try_finally_declaration", "$@46", "$@47", "$@48",
  "catch_declararation", "$@49", "$@50", "catch_error", "error_to_catch",
  "for_declaration", "$@51", "$@52", "$@53", "$@54", "for_comparations",
  "$@55", "$@56", "$@57", "$@58", "$@59",
  "for_comparations_right_comparasion", "expressions", "$@60", "$@61",
  "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70",
  "$@71", "$@72", "$@73", "$@74", "assign_expression",
  "compare_type_and_value_expressions", "function_declarartion", "$@75",
  "$@76", "return_of_function_declaration", "$@77", "$@78",
  "call_a_function", "$@79", "call_a_function_one_more_values", "$@80",
  "function_values", "$@81", "function_parameters", "$@82",
  "function_parameters_one_or_more", "$@83", "class_declarations", "$@84",
  "class_attributes", "class_attribute_declaration", "$@85", "$@86",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@87", "$@88", "set_property_with_this",
  "$@89", "class_function_declarartion", "$@90", "$@91", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,    60,    62,    42,
      47,    94,    37,   124,    38
};
# endif

#define YYPACT_NINF -433

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-433)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      23,  -433,  -433,   -20,    12,    16,    31,    19,    41,    46,
      49,  -433,    48,    57,   108,     6,    34,  -433,   150,    23,
    -433,   102,  -433,    58,   117,  -433,  -433,    23,  -433,  -433,
    -433,  -433,  -433,  -433,   146,  -433,  -433,  -433,  -433,  -433,
    -433,   118,   139,   129,   165,  -433,  -433,  -433,   142,   151,
    -433,  -433,   152,    45,  -433,   153,  -433,  -433,  -433,  -433,
     139,   139,    23,    23,   139,   179,  -433,  -433,  -433,  -433,
    -433,  -433,   249,   156,  -433,   166,   105,  -433,  -433,   181,
     174,   168,  -433,   153,  -433,   196,    14,    56,    75,   203,
     204,   123,  -433,   139,  -433,   185,  -433,  -433,   186,   191,
    -433,  -433,  -433,  -433,   176,   180,   139,   195,   198,   199,
      87,  -433,  -433,  -433,  -433,   224,  -433,  -433,  -433,  -433,
     200,    20,   233,   202,   196,   139,   207,  -433,  -433,  -433,
    -433,    -5,   251,    14,   205,    14,   240,   244,   236,  -433,
     246,   139,   149,   218,   139,   139,  -433,   139,  -433,   139,
     139,   139,   139,   139,  -433,   139,  -433,   139,   274,   220,
     222,   257,   221,   228,   229,   227,   232,  -433,   262,   276,
      -1,     8,    29,   253,   254,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,   167,  -433,  -433,   164,   279,    14,  -433,
     258,  -433,  -433,  -433,   281,   283,  -433,   212,  -433,  -433,
    -433,   274,   274,   139,   274,   139,   274,   274,   274,   274,
     274,   139,   274,   139,   274,  -433,   164,  -433,   261,   294,
     288,   295,   301,   297,   307,   303,   309,   105,   284,  -433,
     310,    71,  -433,   312,   286,   296,   323,   285,   298,   325,
     327,    81,  -433,   198,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,   328,   164,    23,    23,  -433,   326,   314,   316,   302,
     274,   274,   274,   274,  -433,     2,   305,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,   330,  -433,  -433,   105,   306,
    -433,  -433,   308,   311,  -433,  -433,   313,  -433,  -433,  -433,
    -433,   315,   317,  -433,  -433,  -433,  -433,   331,   318,   198,
    -433,  -433,   337,   340,   139,  -433,   343,    25,   324,  -433,
     341,  -433,   164,  -433,  -433,   228,   229,   227,   232,  -433,
     342,   348,  -433,  -433,  -433,   319,   319,   353,  -433,   329,
     105,   332,   347,   318,  -433,  -433,   230,   322,  -433,   334,
     335,   336,   202,   338,   357,  -433,  -433,    23,   359,   339,
    -433,  -433,  -433,  -433,   105,   344,   333,   345,  -433,  -433,
     366,   368,   349,   367,   373,  -433,   356,   164,  -433,  -433,
     369,   350,   371,   352,    67,   375,    23,   358,   363,   365,
     360,   370,  -433,   198,   374,  -433,    72,   362,  -433,  -433,
     228,   229,  -433,  -433,  -433,  -433,  -433,   187,   364,   372,
    -433,  -433,   385,  -433,  -433,   386,  -433,  -433,   355,   361,
    -433,   391,   392,  -433,  -433,  -433,   377,  -433,  -433,  -433,
      23,   376,   378,   379,  -433,   398,   399,   319,   395,   397,
     400,   402,   405,  -433,  -433,   202,  -433,   381,  -433,  -433,
    -433,  -433,  -433,   105,   105,   105,  -433,   105,   409,  -433,
     -25,  -433,   -25,   -25,   380,  -433,  -433,   410,  -433,  -433,
    -433,  -433,   319,  -433,    23,   403,   412,    23,    23,   387,
    -433,  -433,  -433,   105,   388,  -433,   -25,  -433,  -433,  -433,
     -25,  -433,  -433,    96,   411,  -433,   319,   319,   319,   319,
    -433,   417,   389,  -433,   418,   419,  -433,  -433,  -433,  -433,
    -433,   422,  -433,  -433,  -433,  -433,  -433,   394,  -433,  -433,
     316,  -433,   393,  -433,    23,   396,   425,  -433,  -433,   381,
    -433
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     136,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,     0,     0,     0,     0,    17,     0,   136,
       8,     0,     5,     0,     0,     7,     2,   136,   137,   146,
     153,     9,   150,    10,     0,    23,   155,   138,   141,   162,
     147,     0,     0,     0,     0,   173,   154,   236,     0,     0,
       1,   135,     3,   103,    20,    27,   106,     6,   134,   250,
       0,     0,   136,   136,     0,     0,   224,   190,   191,   192,
     193,   194,     0,     0,   229,     0,     0,   101,   102,     0,
       0,     0,   104,    27,    25,     0,   254,     0,     0,     0,
       0,     0,   144,     0,   152,     0,   204,   206,   195,   200,
     208,   210,   212,   214,   216,   220,     0,     0,   244,     0,
      79,    31,    28,    29,    30,   240,    33,    34,    35,    32,
       0,     0,     0,     0,     0,     0,     0,    22,   262,   261,
     263,     0,   267,   254,     0,   254,     0,     0,     0,   163,
       0,     0,     0,   228,     0,     0,   197,     0,   202,     0,
       0,     0,     0,     0,   218,     0,   222,     0,   199,     0,
       0,     0,     0,     0,     0,     0,     0,   238,     0,     0,
       0,     0,     0,     0,     0,     4,    13,    14,    15,    16,
     107,   105,    21,     0,    24,   271,    41,     0,   254,   252,
       0,   253,   156,   139,     0,   169,   148,     0,   225,   227,
     226,   205,   207,     0,   196,     0,   201,   209,   211,   213,
     215,     0,   217,     0,   221,   133,    41,   230,     0,    83,
       0,    90,     0,    95,     0,   100,     0,     0,     0,    11,
       0,     0,    42,     0,     0,     0,     0,     0,     0,     0,
       0,   110,    26,   244,    36,    40,    37,    38,    39,   257,
     264,     0,    41,   136,   136,   142,     0,     0,   128,     0,
     198,   203,   219,   223,   245,     0,     0,    81,    80,    88,
      87,    93,    92,    98,    97,   241,   239,   237,     0,     0,
      45,    46,     0,     0,    50,    49,     0,    54,    53,    57,
      59,     0,     0,   108,   109,   111,   112,     0,   260,   244,
     251,   255,     0,     0,     0,   166,     0,   125,     0,   145,
     249,   234,    41,   231,   174,     0,     0,     0,     0,   242,
       0,     0,    44,    51,    55,    76,    76,     0,   113,     0,
       0,     0,     0,   260,   157,   140,     0,     0,   164,     0,
       0,     0,     0,     0,     0,   247,   246,   136,     0,     0,
      82,    89,    94,    99,     0,     0,    77,     0,    47,    48,
       0,     0,     0,     0,     0,   118,   117,    41,   259,   258,
       0,     0,   161,     0,     0,     0,   136,     0,     0,     0,
       0,     0,   149,   244,     0,   232,   186,     0,   243,    12,
       0,     0,    43,    96,    52,    91,    56,     0,     0,     0,
     115,   114,     0,   265,   256,     0,   158,   143,     0,     0,
     170,     0,     0,   121,   119,   123,     0,   131,   248,   235,
     136,   178,   182,     0,   175,     0,     0,    76,    61,    62,
      63,    64,    65,    58,    60,     0,   272,   270,   159,   172,
     171,   167,   165,     0,     0,     0,   126,     0,     0,   180,
       0,   184,     0,     0,     0,    78,    85,     0,    66,    68,
      70,    72,    76,   116,   136,     0,     0,   136,   136,     0,
     122,   120,   124,     0,     0,   233,     0,   189,   188,   179,
       0,   183,   187,     0,     0,    75,    76,    76,    76,    76,
      74,     0,     0,   266,     0,     0,   129,   127,   132,   181,
     185,     0,    67,    69,    71,    73,   273,     0,   160,   168,
     128,   176,     0,   130,   136,     0,     0,   268,   177,   270,
     269
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -113,   382,  -433,   -74,  -210,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -321,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -301,  -433,
    -433,  -433,  -433,  -433,  -300,  -433,    60,  -433,   130,  -433,
      86,  -433,   132,  -433,    -3,   -22,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,   -58,  -433,  -433,  -433,
    -433,  -433,  -432,  -433,  -433,  -433,  -433,   -19,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -325,   -57,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
      30,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,  -433,
    -433,  -433,  -268,  -433,  -234,  -433,  -433,  -433,  -433,  -433,
    -116,  -433,  -433,  -433,   121,  -433,  -433,  -433,  -433,   -64,
    -433,  -433,  -433,  -433
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    80,    20,   278,   175,    21,    22,    83,
      23,   127,    85,   125,   469,   249,   176,   232,   282,   357,
     177,   235,   360,   178,   238,   361,   179,   325,   326,   363,
     486,   487,   488,   489,   358,   390,   116,   163,   220,   315,
     359,   391,   117,   164,   222,   316,   118,   165,   224,   317,
     119,   166,   226,   318,    24,    71,   123,    56,   241,   293,
     294,   295,   366,   401,   435,   296,   308,   444,   443,   445,
     342,   473,   470,   510,   344,   447,    25,    26,    27,    61,
     254,    62,   304,   141,    64,   258,    42,    28,    60,   253,
     372,   406,   467,    29,    63,   195,   376,   257,   337,   468,
     375,   410,    30,    75,   349,   454,   514,   387,   450,   476,
     452,   480,   423,   479,    72,   147,   203,   149,   205,   144,
     145,   150,   151,   152,   153,   155,   211,   157,   213,    93,
     106,   200,    31,   108,   265,   313,   420,   347,    32,    76,
     168,   227,   276,   354,   161,   310,   346,   383,    33,    86,
     132,   133,   333,   298,   331,   134,   188,   299,   437,   466,
     519,   135,   243,   464
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      51,    55,   115,    87,    88,   364,   264,    91,    58,   297,
     320,   182,   471,   472,   350,   230,   351,   189,   185,   191,
     311,   128,   129,   130,   233,   477,     1,     2,     3,   478,
     170,    34,   171,   172,   173,    35,   142,    38,     4,    36,
     186,   497,   301,    89,    90,   236,   231,   312,     5,   158,
       6,     7,    46,     8,    37,   234,     9,    47,    10,    39,
      11,    81,    12,    13,   131,   332,    14,    15,   183,    40,
     242,   174,   251,    16,    82,    17,   237,    43,   339,   340,
     136,   341,    48,    49,   197,    41,   388,   201,   202,   425,
     204,   426,   206,   207,   208,   209,   210,   291,   212,   137,
     214,   181,   348,    95,    96,    97,   457,    44,    53,   408,
     292,    54,   409,    98,    99,   100,   101,   102,   103,   104,
     105,   110,    95,    96,    97,   280,   281,   481,   482,   421,
     422,    45,    98,    99,   100,   101,   102,   103,   104,   105,
     -96,   490,   -86,   -91,    48,    49,   260,   140,   261,   418,
      50,   499,    52,   275,   262,   500,   263,   402,   111,   112,
     113,   114,    66,    57,    59,   502,   503,   504,   505,    65,
      95,    96,    97,   198,   244,   245,   246,   247,   248,    73,
      98,    99,   100,   101,   102,   103,   104,   105,    74,    53,
      77,   126,    67,    68,    69,    70,    95,    96,    97,    79,
      78,    84,    92,   107,   275,   427,    98,    99,   100,   101,
     102,   103,   104,   105,    95,    96,    97,   120,   109,   121,
     126,   122,   138,   139,    98,    99,   100,   101,   102,   103,
     104,   105,   143,   146,   302,   303,   259,    53,   148,   154,
     428,   429,   430,   431,   156,   159,   167,   336,   160,   162,
     180,   169,    53,   184,   373,   190,   368,   187,   192,    95,
      96,    97,   193,   194,   196,   199,   215,   216,   218,    98,
      99,   100,   101,   102,   103,   104,   105,    95,    96,    97,
     275,   217,   219,   223,   221,   225,   228,    98,    99,   100,
     101,   102,   103,   104,   105,    94,    95,    96,    97,   229,
     239,   240,   250,   252,   255,   268,    98,    99,   100,   101,
     102,   103,   104,   105,   256,   266,   267,   269,   270,   271,
     380,    95,    96,    97,   272,   273,   274,   279,   384,   283,
     277,    98,    99,   100,   101,   102,   103,   104,   105,   284,
     286,   287,   285,   289,   288,   290,   306,   300,   309,   305,
     307,   314,   319,   321,   322,   329,   334,   412,   323,   335,
     324,   338,   343,   345,   356,   330,   355,   328,   327,   362,
     365,   370,   374,   474,   367,   432,   382,   385,   369,   377,
     378,   379,   393,   381,   395,   400,   398,   403,   -84,   386,
     389,   392,   399,   419,   397,   413,   404,   405,   407,   411,
     414,   448,   415,   436,   438,   416,   439,   417,   424,   441,
     433,   442,   440,   463,   446,   455,   456,   458,   434,   459,
     465,   396,   460,   449,   461,   451,    95,   462,   475,   485,
     483,   493,   492,   496,   498,   501,   506,   508,   509,   507,
     511,   512,   517,   515,   518,   491,   394,   352,   494,   495,
     353,   484,   513,   453,   371,   520,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   124,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   516
};

static const yytype_int16 yycheck[] =
{
      19,    23,    76,    60,    61,   326,   216,    64,    27,   243,
     278,   124,   444,   445,   315,    16,   316,   133,    23,   135,
      18,     7,     8,     9,    16,    50,     3,     4,     5,    54,
      10,    51,    12,    13,    14,    23,    93,    18,    15,    23,
      45,   473,   252,    62,    63,    16,    47,    45,    25,   106,
      27,    28,    46,    30,    23,    47,    33,    23,    35,    18,
      37,    16,    39,    40,    50,   299,    43,    44,   125,    23,
     183,    51,   188,    50,    29,    52,    47,    29,    53,    54,
      24,    56,    48,    49,   141,    36,   354,   144,   145,   390,
     147,   391,   149,   150,   151,   152,   153,    16,   155,    24,
     157,   123,   312,    47,    48,    49,   427,    50,    50,    42,
      29,    53,    45,    57,    58,    59,    60,    61,    62,    63,
      64,    16,    47,    48,    49,    54,    55,   452,   453,    57,
      58,    23,    57,    58,    59,    60,    61,    62,    63,    64,
      53,   462,    55,    56,    48,    49,   203,    24,   205,   383,
       0,   476,    50,   227,   211,   480,   213,   367,    53,    54,
      55,    56,    23,    46,    18,   486,   487,   488,   489,    51,
      47,    48,    49,    24,    10,    11,    12,    13,    14,    50,
      57,    58,    59,    60,    61,    62,    63,    64,    23,    50,
      48,    24,    53,    54,    55,    56,    47,    48,    49,    47,
      49,    48,    23,    47,   278,    18,    57,    58,    59,    60,
      61,    62,    63,    64,    47,    48,    49,    36,    52,    45,
      24,    53,    19,    19,    57,    58,    59,    60,    61,    62,
      63,    64,    47,    47,   253,   254,    24,    50,    47,    63,
      53,    54,    55,    56,    64,    50,    22,   304,    50,    50,
      17,    51,    50,    46,    24,    50,   330,     6,    18,    47,
      48,    49,    18,    27,    18,    47,    46,    45,    47,    57,
      58,    59,    60,    61,    62,    63,    64,    47,    48,    49,
     354,    24,    54,    56,    55,    53,    24,    57,    58,    59,
      60,    61,    62,    63,    64,    46,    47,    48,    49,    23,
      47,    47,    23,    45,    23,    17,    57,    58,    59,    60,
      61,    62,    63,    64,    31,    54,    22,    22,    17,    22,
     342,    47,    48,    49,    17,    22,    17,    17,   347,    17,
      46,    57,    58,    59,    60,    61,    62,    63,    64,    53,
      17,    56,    46,    18,    46,    18,    32,    19,    46,    23,
      34,    46,    22,    47,    46,    24,    19,   376,    47,    19,
      47,    18,    38,    22,    16,    47,    24,    50,    53,    50,
      17,    24,    50,   447,    45,   397,    19,    18,    46,    45,
      45,    45,    16,    45,    16,    29,    19,    18,    55,    50,
      46,    46,    19,    19,    45,    37,    46,    26,    46,    24,
      37,   420,    37,    18,    18,    45,    51,    37,    46,    18,
      46,    19,    51,   435,    37,    17,    17,    22,    46,    22,
      39,   361,    22,    47,    22,    47,    47,    22,    19,    19,
      50,    19,    29,    46,    46,    24,    19,    19,    19,    50,
      18,    47,    46,    50,    19,   464,   360,   317,   467,   468,
     318,   454,   510,   423,   333,   519,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   514
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    43,    44,    50,    52,    66,    67,
      69,    72,    73,    75,   119,   141,   142,   143,   152,   158,
     167,   197,   203,   213,    51,    23,    23,    23,    18,    18,
      23,    36,   151,    29,    50,    23,    46,    23,    48,    49,
       0,   142,    50,    50,    53,   120,   122,    46,   142,    18,
     153,   144,   146,   159,   149,    51,    23,    53,    54,    55,
      56,   120,   179,    50,    23,   168,   204,    48,    49,    47,
      68,    16,    29,    74,    48,    77,   214,   179,   179,   142,
     142,   179,    23,   194,    46,    47,    48,    49,    57,    58,
      59,    60,    61,    62,    63,    64,   195,    47,   198,    52,
      16,    53,    54,    55,    56,    79,   101,   107,   111,   115,
      36,    45,    53,   121,    77,    78,    24,    76,     7,     8,
       9,    50,   215,   216,   220,   226,    24,    24,    19,    19,
      24,   148,   179,    47,   184,   185,    47,   180,    47,   182,
     186,   187,   188,   189,    63,   190,    64,   192,   179,    50,
      50,   209,    50,   102,   108,   112,   116,    22,   205,    51,
      10,    12,    13,    14,    51,    71,    81,    85,    88,    91,
      17,   120,    76,   179,    46,    23,    45,     6,   221,   215,
      50,   215,    18,    18,    27,   160,    18,   179,    24,    47,
     196,   179,   179,   181,   179,   183,   179,   179,   179,   179,
     179,   191,   179,   193,   179,    46,    45,    24,    47,    54,
     103,    55,   109,    56,   113,    53,   117,   206,    24,    23,
      16,    47,    82,    16,    47,    86,    16,    47,    89,    47,
      47,   123,    76,   227,    10,    11,    12,    13,    14,    80,
      23,   215,    45,   154,   145,    23,    31,   162,   150,    24,
     179,   179,   179,   179,    80,   199,    54,    22,    17,    22,
      17,    22,    17,    22,    17,    79,   207,    46,    70,    17,
      54,    55,    83,    17,    53,    46,    17,    56,    46,    18,
      18,    16,    29,   124,   125,   126,   130,   209,   218,   222,
      19,    80,   142,   142,   147,    23,    32,    34,   131,    46,
     210,    18,    45,   200,    46,   104,   110,   114,   118,    22,
     207,    47,    46,    47,    47,    92,    93,    53,    50,    24,
      47,   219,   209,   217,    19,    19,   179,   163,    18,    53,
      54,    56,   135,    38,   139,    22,   211,   202,    80,   169,
     103,   109,   113,   117,   208,    24,    16,    84,    99,   105,
      87,    90,    50,    94,    94,    17,   127,    45,    79,    46,
      24,   219,   155,    24,    50,   165,   161,    45,    45,    45,
     120,    45,    19,   212,   142,    18,    50,   172,   207,    46,
     100,   106,    46,    16,   115,    16,   111,    45,    19,    19,
      29,   128,    80,    18,    46,    26,   156,    46,    42,    45,
     166,    24,   142,    37,    37,    37,    45,    37,   209,    19,
     201,    57,    58,   177,    46,   103,   109,    18,    53,    54,
      55,    56,   120,    46,    46,   129,    18,   223,    18,    51,
      51,    18,    19,   133,   132,   134,    37,   140,   142,    47,
     173,    47,   175,   195,   170,    17,    17,    94,    22,    22,
      22,    22,    22,   120,   228,    39,   224,   157,   164,    79,
     137,   137,   137,   136,    79,    19,   174,    50,    54,   178,
     176,   178,   178,    50,   119,    19,    95,    96,    97,    98,
      94,   142,    29,    19,   142,   142,    46,   137,    46,   178,
     178,    24,    94,    94,    94,    94,    19,    50,    19,    19,
     138,    18,    47,   131,   171,    50,   142,    46,    19,   225,
     224
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    68,    67,    67,    67,    67,    67,    67,
      67,    70,    69,    71,    71,    71,    71,    72,    72,    72,
      74,    73,    73,    75,    76,    78,    77,    77,    79,    79,
      79,    79,    79,    79,    79,    79,    80,    80,    80,    80,
      80,    80,    81,    82,    82,    83,    83,    84,    84,    85,
      86,    87,    86,    88,    89,    90,    89,    92,    91,    93,
      91,    94,    94,    94,    94,    94,    95,    94,    96,    94,
      97,    94,    98,    94,    94,    94,    94,   100,    99,   102,
     101,   104,   103,   103,   106,   105,   108,   107,   110,   109,
     109,   112,   111,   114,   113,   113,   116,   115,   118,   117,
     117,   119,   119,   120,   121,   120,   120,   123,   122,   124,
     124,   125,   125,   127,   126,   129,   128,   128,   130,   132,
     131,   133,   131,   134,   131,   135,   136,   131,   131,   138,
     137,   140,   139,   141,   142,   142,   142,   143,   144,   145,
     143,   146,   147,   143,   148,   143,   143,   149,   150,   143,
     143,   151,   143,   143,   143,   153,   154,   155,   152,   157,
     156,   156,   159,   160,   161,   158,   163,   164,   162,   162,
     165,   166,   166,   168,   169,   170,   171,   167,   173,   172,
     174,   172,   175,   172,   176,   172,   177,   172,   178,   178,
     179,   179,   179,   179,   179,   180,   179,   181,   179,   179,
     182,   179,   183,   179,   184,   179,   185,   179,   186,   179,
     187,   179,   188,   179,   189,   179,   190,   179,   191,   179,
     192,   179,   193,   179,   194,   179,   195,   196,   196,   198,
     199,   197,   201,   200,   202,   200,   204,   203,   206,   205,
     205,   207,   208,   207,   209,   210,   209,   212,   211,   211,
     214,   213,   215,   215,   215,   217,   216,   218,   216,   219,
     219,   220,   220,   220,   222,   223,   221,   221,   225,   224,
     224,   227,   228,   226
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     2,     1,     1,     1,
       1,     0,    10,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     4,     2,     2,     0,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     5,     3,     1,     1,     1,     1,     3,
       2,     0,     5,     3,     2,     0,     5,     0,     7,     0,
       7,     3,     3,     3,     3,     3,     0,     6,     0,     6,
       0,     6,     0,     6,     5,     5,     0,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     0,     4,
       1,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     3,     3,     1,     0,     4,     1,     0,     6,     1,
       0,     1,     1,     0,     4,     0,     3,     0,     3,     0,
       6,     0,     6,     0,     6,     0,     0,     7,     0,     0,
       4,     0,     6,     6,     2,     2,     0,     1,     0,     0,
       9,     0,     0,    11,     0,     8,     1,     0,     0,    10,
       1,     0,     4,     1,     2,     0,     0,     0,    11,     0,
       5,     0,     0,     0,     0,    12,     0,     0,     9,     0,
       2,     2,     2,     0,     0,     0,     0,    18,     0,     4,
       0,     5,     0,     4,     0,     5,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     4,     0,     5,     3,
       0,     4,     0,     5,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     5,
       0,     4,     0,     5,     0,     4,     3,     1,     0,     0,
       0,     8,     0,     6,     0,     4,     0,     7,     0,     3,
       0,     1,     0,     4,     0,     0,     5,     0,     3,     0,
       0,     8,     2,     2,     0,     0,     7,     0,     6,     2,
       0,     1,     1,     1,     0,     0,     9,     0,     0,     8,
       0,     0,     0,    11
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
#line 50 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1698 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 1704 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1710 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1716 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1722 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1728 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1734 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1740 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1746 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1752 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1758 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1764 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1770 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1776 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1782 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1788 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1794 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1800 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1806 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 122 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1812 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1818 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1824 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1830 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 141 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1836 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 142 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1842 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 148 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1848 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 152 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1854 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 153 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1860 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1866 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 160 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1872 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 170 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1878 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 171 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1884 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 172 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1890 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 173 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1896 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 175 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1902 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 176 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1908 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 177 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1914 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 178 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1920 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 187 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1926 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 187 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1932 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 191 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1938 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 191 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1944 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 195 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1950 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 196 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1956 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1962 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1968 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 203 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1974 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 203 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1980 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 207 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1986 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 208 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1992 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 211 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1998 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 211 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2004 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 215 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2010 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 216 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2016 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 219 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2022 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 219 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2028 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 223 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2034 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 224 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2040 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 236 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++", (yyvsp[-2].ystr)); }
#line 2046 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 237 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--", (yyvsp[-2].ystr)); }
#line 2052 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 241 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2058 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 242 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2064 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 248 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2070 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 263 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2076 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 267 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2082 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 272 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2088 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 281 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2094 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 282 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2100 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 283 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2106 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 284 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2112 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 284 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2118 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 289 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2124 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 293 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2130 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 293 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2136 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 299 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2142 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 313 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2148 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 313 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2154 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 313 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2160 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2166 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2172 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2178 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 315 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2184 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 315 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2190 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 317 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2196 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 317 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2202 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 317 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2208 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 319 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2214 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 319 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2220 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "break;"); }
#line 2226 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2232 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2238 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2244 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 329 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2250 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 329 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2256 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2262 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2268 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2274 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2280 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 338 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2286 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 338 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2292 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 338 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2298 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 343 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2304 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2310 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 348 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2316 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "for ("); }
#line 2322 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "let %s = %d;", (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 2328 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2334 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2340 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2346 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 356 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s < ", (yyvsp[-1].ystr)); }
#line 2352 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 357 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s <=", (yyvsp[-2].ystr)); }
#line 2358 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 358 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s > ", (yyvsp[-1].ystr)); }
#line 2364 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s >=", (yyvsp[-2].ystr)); }
#line 2370 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 360 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2376 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 360 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2382 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 364 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2388 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 365 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2394 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 368 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2400 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 369 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2406 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 370 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2412 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2418 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2424 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 374 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2430 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 375 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2436 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 376 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2442 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 377 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2448 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2454 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 379 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2460 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 380 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2466 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 381 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2472 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 212:
#line 382 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2478 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 383 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2484 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 384 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2490 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 385 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2496 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 386 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2502 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 387 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2508 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 224:
#line 388 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2514 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 388 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2520 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 392 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2526 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 401 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public static void %s(", (yyvsp[-1].ystr)); }
#line 2532 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 401 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2538 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 405 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2544 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 405 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2550 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 406 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2556 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 406 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2562 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 411 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2568 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 411 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2574 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 415 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2580 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 420 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2586 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 425 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2592 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2598 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 436 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2604 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 251:
#line 436 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2610 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 446 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2616 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 446 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2622 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 257:
#line 447 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2628 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 258:
#line 447 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2634 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 456 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2640 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 457 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2646 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 458 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2652 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 264:
#line 462 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2658 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 265:
#line 462 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2664 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 462 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2670 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 467 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s;", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2676 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 472 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2682 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 272:
#line 472 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2688 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 472 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2694 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2698 "parser.tab.c" /* yacc.c:1646  */
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
#line 478 "parser.y" /* yacc.c:1906  */

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
