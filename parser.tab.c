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
    COLON = 298,
    SEMICOLON = 299,
    ASSIGN = 300,
    ADD = 301,
    MINUS = 302,
    IDENTIFIER = 303,
    CLASS_IDENTIFIER = 304,
    LET = 305,
    STRING_LITERAL = 306,
    NUMBER_LITERAL = 307,
    FLOAT_LITERAL = 308,
    BOOLEAN_LITERAL = 309,
    ERROR_LITERAL = 310
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

#line 188 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 205 "parser.tab.c" /* yacc.c:358  */

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
#define YYFINAL  45
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   433

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  152
/* YYNRULES -- Number of rules.  */
#define YYNRULES  254
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  482

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   310

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    61,    63,     2,
       2,     2,    58,     2,     2,     2,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      56,     2,    57,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    62,     2,     2,     2,     2,     2,
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
      55
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    44,    44,    51,    51,    52,    53,    54,    55,    56,
      57,    61,    61,    64,    65,    66,    67,    72,    73,    74,
      78,    78,    79,    83,    87,    91,    91,    92,    96,    97,
      98,    99,   100,   101,   102,   103,   107,   108,   109,   110,
     111,   112,   118,   122,   123,   126,   127,   131,   132,   138,
     142,   143,   143,   149,   153,   154,   154,   160,   160,   161,
     161,   171,   172,   173,   174,   175,   176,   176,   177,   177,
     178,   178,   179,   179,   180,   181,   182,   188,   188,   192,
     192,   196,   196,   197,   200,   200,   204,   204,   208,   208,
     209,   212,   212,   216,   216,   217,   220,   220,   224,   224,
     225,   237,   238,   242,   243,   243,   244,   249,   249,   253,
     254,   259,   260,   264,   264,   268,   268,   269,   273,   282,
     282,   283,   283,   284,   284,   285,   285,   285,   286,   290,
     290,   294,   294,   300,   307,   308,   309,   313,   314,   314,
     314,   315,   315,   315,   316,   316,   317,   318,   318,   318,
     319,   320,   320,   324,   324,   324,   324,   328,   328,   329,
     333,   333,   333,   333,   337,   337,   337,   338,   342,   346,
     347,   351,   352,   353,   354,   355,   356,   356,   357,   357,
     358,   359,   359,   360,   360,   361,   361,   362,   362,   363,
     363,   364,   364,   365,   365,   366,   366,   367,   367,   368,
     368,   369,   369,   370,   370,   371,   371,   375,   379,   380,
     384,   384,   384,   388,   388,   389,   389,   394,   394,   398,
     398,   399,   402,   403,   403,   406,   408,   408,   412,   412,
     413,   419,   419,   423,   424,   425,   429,   429,   430,   430,
     434,   435,   439,   440,   441,   445,   445,   445,   446,   450,
     450,   451,   455,   455,   455
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
  "PROMISE", "INSTANCEOF", "COLON", "SEMICOLON", "ASSIGN", "ADD", "MINUS",
  "IDENTIFIER", "CLASS_IDENTIFIER", "LET", "STRING_LITERAL",
  "NUMBER_LITERAL", "FLOAT_LITERAL", "BOOLEAN_LITERAL", "ERROR_LITERAL",
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
  "expressions", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "assign_expression", "compare_type_and_value_expressions",
  "function_declarartion", "$@66", "$@67",
  "return_of_function_declaration", "$@68", "$@69", "call_a_function",
  "$@70", "call_a_function_one_more_values", "$@71", "function_values",
  "$@72", "function_parameters", "$@73", "function_parameters_one_or_more",
  "$@74", "class_declarations", "$@75", "class_attributes",
  "class_attribute_declaration", "$@76", "$@77",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@78", "$@79", "set_property_with_this",
  "$@80", "class_function_declarartion", "$@81", "$@82", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,    60,    62,    42,    47,
      94,    37,   124,    38
};
# endif

#define YYPACT_NINF -396

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-396)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      26,  -396,  -396,   -35,    13,    15,    23,     7,    24,    39,
      35,  -396,    44,    43,    11,  -396,    99,    26,  -396,    58,
    -396,    86,  -396,  -396,  -396,    26,  -396,  -396,  -396,  -396,
    -396,    98,  -396,  -396,  -396,  -396,  -396,  -396,    88,    78,
     106,   123,  -396,   139,   140,  -396,  -396,   141,    21,  -396,
     142,  -396,  -396,  -396,    78,    78,    26,    26,    78,   166,
    -396,  -396,  -396,  -396,  -396,  -396,   152,   145,  -396,    59,
     147,   148,   157,   151,   144,  -396,   142,  -396,   176,    19,
      62,   112,   182,   185,   120,  -396,    78,  -396,   186,  -396,
    -396,   187,   188,  -396,  -396,  -396,  -396,   168,   171,    78,
     195,   197,    28,  -396,  -396,  -396,  -396,   225,  -396,  -396,
    -396,  -396,  -396,  -396,   196,     9,   235,   206,   176,    78,
     211,  -396,  -396,  -396,  -396,    29,   250,    19,   209,    19,
     240,   252,   244,  -396,   254,    78,   160,   228,    78,    78,
    -396,    78,  -396,    78,    78,    78,    78,    78,  -396,    78,
    -396,    78,   241,   230,   232,   253,   237,   238,   236,   242,
    -396,   268,   271,    -2,     0,     2,   251,   260,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,   179,  -396,  -396,   150,
     272,    19,  -396,   263,  -396,  -396,  -396,   284,   277,  -396,
     203,  -396,  -396,  -396,   241,   241,    78,   241,    78,   241,
     241,   241,   241,   241,    78,   241,    78,   241,  -396,   150,
    -396,   287,   293,   289,   296,   292,   298,   294,   300,    59,
     274,  -396,   302,    25,  -396,   304,   273,   278,   306,   275,
     281,   308,   309,    73,  -396,   197,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,   311,   150,    26,    26,  -396,   305,   299,
     301,   288,   241,   241,   241,   241,  -396,     6,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,   312,  -396,  -396,    59,
     291,  -396,  -396,   295,   297,  -396,  -396,   307,  -396,  -396,
    -396,  -396,   282,   290,  -396,  -396,  -396,  -396,   313,   310,
     197,  -396,  -396,   321,   322,    78,  -396,   325,    63,   315,
    -396,   323,  -396,   150,  -396,   237,   238,   236,   242,  -396,
     320,   330,  -396,  -396,  -396,   303,   303,   332,  -396,   314,
      59,   316,   326,   310,  -396,  -396,   222,   317,  -396,   318,
     319,   324,   206,   327,   328,  -396,  -396,    26,   336,  -396,
    -396,  -396,  -396,    59,   329,   331,   333,  -396,  -396,   340,
     342,   335,   347,   349,  -396,   343,   150,  -396,  -396,   341,
     337,   345,   338,    85,   350,    26,   339,   346,   348,   344,
     351,  -396,   197,   356,  -396,  -396,  -396,   237,   238,  -396,
    -396,  -396,  -396,  -396,    87,   352,   353,  -396,  -396,   361,
    -396,  -396,   362,  -396,  -396,   334,   354,  -396,   368,   372,
    -396,  -396,  -396,   355,  -396,  -396,  -396,    26,   376,   377,
     303,   373,   378,   379,   380,   381,  -396,  -396,   206,  -396,
     360,  -396,  -396,  -396,  -396,  -396,    59,    59,    59,  -396,
      59,   385,  -396,  -396,   386,  -396,  -396,  -396,  -396,   303,
    -396,    26,   382,   387,    26,    26,   363,  -396,  -396,  -396,
      59,   364,  -396,  -396,   303,   303,   303,   303,  -396,   391,
     365,  -396,   393,   395,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,   370,  -396,  -396,   301,   369,  -396,   374,  -396,
     360,  -396
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     136,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,     0,     0,    17,     0,   136,     8,     0,
       5,     0,     6,     7,     2,   136,   137,   146,     9,   150,
      10,     0,    23,   153,   138,   141,   160,   147,     0,     0,
       0,     0,   217,     0,     0,     1,   135,     3,   103,    20,
      27,   106,   134,   231,     0,     0,   136,   136,     0,     0,
     205,   171,   172,   173,   174,   175,     0,     0,   210,     0,
       0,     0,     0,     0,     0,   104,    27,    25,     0,   235,
       0,     0,     0,     0,     0,   144,     0,   152,     0,   185,
     187,   176,   181,   189,   191,   193,   195,   197,   201,     0,
       0,   225,    79,    31,    28,    29,    30,   221,    33,    34,
      35,    32,   101,   102,     0,     0,     0,     0,     0,     0,
       0,    22,   243,   242,   244,     0,   248,   235,     0,   235,
       0,     0,     0,   161,     0,     0,     0,   209,     0,     0,
     178,     0,   183,     0,     0,     0,     0,     0,   199,     0,
     203,     0,   180,     0,     0,     0,     0,     0,     0,     0,
     219,     0,     0,     0,     0,     0,     0,     0,     4,    13,
      14,    15,    16,   107,   105,    21,     0,    24,   252,    41,
       0,   235,   233,     0,   234,   154,   139,     0,   167,   148,
       0,   206,   208,   207,   186,   188,     0,   177,     0,   182,
     190,   192,   194,   196,     0,   198,     0,   202,   133,    41,
     211,    83,     0,    90,     0,    95,     0,   100,     0,     0,
       0,    11,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    26,   225,    36,    40,    37,    38,
      39,   238,   245,     0,    41,   136,   136,   142,     0,     0,
     128,     0,   179,   184,   200,   204,   226,     0,    81,    80,
      88,    87,    93,    92,    98,    97,   222,   220,   218,     0,
       0,    45,    46,     0,     0,    50,    49,     0,    54,    53,
      57,    59,     0,     0,   108,   109,   111,   112,     0,   241,
     225,   232,   236,     0,     0,     0,   164,     0,   125,     0,
     145,   230,   215,    41,   212,     0,     0,     0,     0,   223,
       0,     0,    44,    51,    55,    76,    76,     0,   113,     0,
       0,     0,     0,   241,   155,   140,     0,     0,   162,     0,
       0,     0,     0,     0,     0,   228,   227,   136,     0,    82,
      89,    94,    99,     0,     0,    77,     0,    47,    48,     0,
       0,     0,     0,     0,   118,   117,    41,   240,   239,     0,
       0,   159,     0,     0,     0,   136,     0,     0,     0,     0,
       0,   149,   225,     0,   213,   224,    12,     0,     0,    43,
      96,    52,    91,    56,     0,     0,     0,   115,   114,     0,
     246,   237,     0,   156,   143,     0,     0,   168,     0,     0,
     121,   119,   123,     0,   131,   229,   216,   136,     0,     0,
      76,    61,    62,    63,    64,    65,    58,    60,     0,   253,
     251,   157,   170,   169,   165,   163,     0,     0,     0,   126,
       0,     0,    78,    85,     0,    66,    68,    70,    72,    76,
     116,   136,     0,     0,   136,   136,     0,   122,   120,   124,
       0,     0,   214,    75,    76,    76,    76,    76,    74,     0,
       0,   247,     0,     0,   129,   127,   132,    67,    69,    71,
      73,   254,     0,   158,   166,   128,     0,   130,     0,   249,
     251,   250
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -106,   357,  -396,   -67,  -200,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -306,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -294,  -396,
    -396,  -396,  -396,  -396,  -293,  -396,    66,  -396,   113,  -396,
      20,  -396,   111,  -396,  -396,   -20,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,   -54,  -396,  -396,  -396,
    -396,  -396,  -395,  -396,  -396,  -396,  -396,   -17,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,   -51,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,  -396,
    -263,  -396,  -230,  -396,  -396,  -396,  -396,  -396,  -112,  -396,
    -396,  -396,   100,  -396,  -396,  -396,  -396,   -58,  -396,  -396,
    -396,  -396
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    73,    18,   269,   168,    19,    20,    76,
      21,   121,    78,   119,   446,   241,   169,   224,   273,   346,
     170,   227,   349,   171,   230,   350,   172,   315,   316,   352,
     454,   455,   456,   457,   347,   377,   108,   156,   212,   305,
     348,   378,   109,   157,   214,   306,   110,   158,   216,   307,
     111,   159,   218,   308,    22,    65,   117,    51,   233,   284,
     285,   286,   355,   388,   418,   287,   299,   427,   426,   428,
     332,   450,   447,   475,   334,   430,    23,    24,    25,    55,
     246,    56,   295,   135,    58,   250,    39,    26,    54,   245,
     361,   393,   444,    27,    57,   188,   365,   249,   327,   445,
     364,   397,    66,   141,   196,   143,   198,   138,   139,   144,
     145,   146,   147,   149,   204,   151,   206,    86,    99,   193,
      28,   101,   257,   304,   407,   337,    29,    69,   161,   219,
     267,   343,   155,   301,   336,   372,    30,    79,   126,   127,
     323,   289,   321,   128,   181,   290,   420,   443,   480,   129,
     235,   441
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    50,   107,    80,    81,   288,   310,    84,    52,   256,
     353,   339,   175,   340,   222,   182,   225,   184,   228,   163,
      31,   164,   165,   166,   302,    35,   122,   123,   124,     1,
       2,     3,   448,   449,    42,   136,    32,    74,    33,    82,
      83,     4,    36,   223,   292,   226,    34,   229,   152,   303,
      75,     5,   178,     6,     7,   465,     8,    43,    44,     9,
     322,    10,    37,    11,   167,    12,    13,   125,   176,   243,
     234,    38,   179,    40,    14,   102,    15,   271,   272,   -96,
     375,   -86,   -91,   408,   190,   409,   130,   194,   195,   282,
     197,    41,   199,   200,   201,   202,   203,   174,   205,    45,
     207,    60,   283,   338,   434,   410,    47,    88,    89,    90,
     103,   104,   105,   106,   329,   330,    53,   331,    91,    92,
      93,    94,    95,    96,    97,    98,    48,   395,   396,    61,
      62,    63,    64,   458,    48,    48,   131,    49,   411,   412,
     413,   414,   405,    59,   134,   252,    68,   253,   467,   468,
     469,   470,   266,   254,    67,   255,   389,    88,    89,    90,
     236,   237,   238,   239,   240,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    91,    92,    93,    94,
      95,    96,    97,    98,   191,    70,    72,    71,    77,    85,
     100,   112,   113,   114,   115,   116,    87,    88,    89,    90,
     120,   132,   266,   120,   133,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    91,    92,    93,    94,
      95,    96,    97,    98,    88,    89,    90,   251,   293,   294,
     148,   137,   140,   142,   150,    91,    92,    93,    94,    95,
      96,    97,    98,   153,   326,   154,   362,   160,    88,    89,
      90,   162,   173,   357,    48,   177,   180,   183,   185,    91,
      92,    93,    94,    95,    96,    97,    98,    88,    89,    90,
     186,   187,   189,   192,   208,   209,   266,   210,    91,    92,
      93,    94,    95,    96,    97,    98,    88,    89,    90,   211,
     215,   213,   220,   217,   221,   242,   231,    91,    92,    93,
      94,    95,    96,    97,    98,   232,   244,   247,   248,   258,
     259,   260,   369,   261,   262,   263,   264,   265,   268,   270,
     373,   274,   276,   277,   275,   279,   280,   281,   296,   278,
     291,   297,   300,   317,   309,   298,   311,   319,   318,   312,
     324,   325,   313,   328,   344,   335,   345,   371,   399,   354,
     359,   351,   314,   333,   374,   320,   380,   356,   382,   390,
     358,   366,   367,   451,   415,   363,   385,   368,   386,   381,
     370,   392,   387,   376,   398,   406,   400,   379,   384,   419,
     421,   391,   394,   401,   -84,   402,   424,   403,   404,   422,
     431,   425,   429,   432,   433,   435,   416,   417,   440,   442,
     436,   437,   438,   439,   452,   453,   461,   464,   466,   423,
     471,   460,   473,   472,   474,   476,   383,   478,   479,   342,
     341,   477,   481,   360,   459,     0,     0,   462,   463,     0,
       0,     0,     0,   118
};

static const yytype_int16 yycheck[] =
{
      17,    21,    69,    54,    55,   235,   269,    58,    25,   209,
     316,   305,   118,   306,    16,   127,    16,   129,    16,    10,
      55,    12,    13,    14,    18,    18,     7,     8,     9,     3,
       4,     5,   427,   428,    23,    86,    23,    16,    23,    56,
      57,    15,    18,    45,   244,    45,    23,    45,    99,    43,
      29,    25,    23,    27,    28,   450,    30,    46,    47,    33,
     290,    35,    23,    37,    55,    39,    40,    48,   119,   181,
     176,    36,    43,    29,    48,    16,    50,    52,    53,    51,
     343,    53,    54,   377,   135,   378,    24,   138,   139,    16,
     141,    48,   143,   144,   145,   146,   147,   117,   149,     0,
     151,    23,    29,   303,   410,    18,    48,    45,    46,    47,
      51,    52,    53,    54,    51,    52,    18,    54,    56,    57,
      58,    59,    60,    61,    62,    63,    48,    42,    43,    51,
      52,    53,    54,   439,    48,    48,    24,    51,    51,    52,
      53,    54,   372,    55,    24,   196,    23,   198,   454,   455,
     456,   457,   219,   204,    48,   206,   356,    45,    46,    47,
      10,    11,    12,    13,    14,    45,    46,    47,    56,    57,
      58,    59,    60,    61,    62,    63,    56,    57,    58,    59,
      60,    61,    62,    63,    24,    46,    45,    47,    46,    23,
      45,    44,    44,    36,    43,    51,    44,    45,    46,    47,
      24,    19,   269,    24,    19,    45,    46,    47,    56,    57,
      58,    59,    60,    61,    62,    63,    56,    57,    58,    59,
      60,    61,    62,    63,    45,    46,    47,    24,   245,   246,
      62,    45,    45,    45,    63,    56,    57,    58,    59,    60,
      61,    62,    63,    48,   295,    48,    24,    22,    45,    46,
      47,    55,    17,   320,    48,    44,     6,    48,    18,    56,
      57,    58,    59,    60,    61,    62,    63,    45,    46,    47,
      18,    27,    18,    45,    44,    43,   343,    24,    56,    57,
      58,    59,    60,    61,    62,    63,    45,    46,    47,    52,
      54,    53,    24,    51,    23,    23,    45,    56,    57,    58,
      59,    60,    61,    62,    63,    45,    43,    23,    31,    22,
      17,    22,   332,    17,    22,    17,    22,    17,    44,    17,
     337,    17,    44,    17,    51,    44,    18,    18,    23,    54,
      19,    32,    44,    51,    22,    34,    45,    24,    48,    44,
      19,    19,    45,    18,    24,    22,    16,    19,   365,    17,
      24,    48,    45,    38,    18,    45,    16,    43,    16,    18,
      44,    43,    43,   430,   384,    48,    19,    43,    19,   349,
      43,    26,    29,    44,    24,    19,    37,    44,    43,    18,
      18,    44,    44,    37,    53,    37,    18,    43,    37,    55,
     407,    19,    37,    17,    17,    22,    44,    44,   418,    39,
      22,    22,    22,    22,    19,    19,    19,    44,    44,    55,
      19,    29,    19,    48,    19,    45,   350,    48,    44,   308,
     307,   475,   480,   323,   441,    -1,    -1,   444,   445,    -1,
      -1,    -1,    -1,    76
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    48,    50,    65,    66,    68,    71,
      72,    74,   118,   140,   141,   142,   151,   157,   184,   190,
     200,    55,    23,    23,    23,    18,    18,    23,    36,   150,
      29,    48,    23,    46,    47,     0,   141,    48,    48,    51,
     119,   121,   141,    18,   152,   143,   145,   158,   148,    55,
      23,    51,    52,    53,    54,   119,   166,    48,    23,   191,
      46,    47,    45,    67,    16,    29,    73,    46,    76,   201,
     166,   166,   141,   141,   166,    23,   181,    44,    45,    46,
      47,    56,    57,    58,    59,    60,    61,    62,    63,   182,
      45,   185,    16,    51,    52,    53,    54,    78,   100,   106,
     110,   114,    44,    44,    36,    43,    51,   120,    76,    77,
      24,    75,     7,     8,     9,    48,   202,   203,   207,   213,
      24,    24,    19,    19,    24,   147,   166,    45,   171,   172,
      45,   167,    45,   169,   173,   174,   175,   176,    62,   177,
      63,   179,   166,    48,    48,   196,   101,   107,   111,   115,
      22,   192,    55,    10,    12,    13,    14,    55,    70,    80,
      84,    87,    90,    17,   119,    75,   166,    44,    23,    43,
       6,   208,   202,    48,   202,    18,    18,    27,   159,    18,
     166,    24,    45,   183,   166,   166,   168,   166,   170,   166,
     166,   166,   166,   166,   178,   166,   180,   166,    44,    43,
      24,    52,   102,    53,   108,    54,   112,    51,   116,   193,
      24,    23,    16,    45,    81,    16,    45,    85,    16,    45,
      88,    45,    45,   122,    75,   214,    10,    11,    12,    13,
      14,    79,    23,   202,    43,   153,   144,    23,    31,   161,
     149,    24,   166,   166,   166,   166,    79,   186,    22,    17,
      22,    17,    22,    17,    22,    17,    78,   194,    44,    69,
      17,    52,    53,    82,    17,    51,    44,    17,    54,    44,
      18,    18,    16,    29,   123,   124,   125,   129,   196,   205,
     209,    19,    79,   141,   141,   146,    23,    32,    34,   130,
      44,   197,    18,    43,   187,   103,   109,   113,   117,    22,
     194,    45,    44,    45,    45,    91,    92,    51,    48,    24,
      45,   206,   196,   204,    19,    19,   166,   162,    18,    51,
      52,    54,   134,    38,   138,    22,   198,   189,    79,   102,
     108,   112,   116,   195,    24,    16,    83,    98,   104,    86,
      89,    48,    93,    93,    17,   126,    43,    78,    44,    24,
     206,   154,    24,    48,   164,   160,    43,    43,    43,   119,
      43,    19,   199,   141,    18,   194,    44,    99,   105,    44,
      16,   114,    16,   110,    43,    19,    19,    29,   127,    79,
      18,    44,    26,   155,    44,    42,    43,   165,    24,   141,
      37,    37,    37,    43,    37,   196,    19,   188,   102,   108,
      18,    51,    52,    53,    54,   119,    44,    44,   128,    18,
     210,    18,    55,    55,    18,    19,   132,   131,   133,    37,
     139,   141,    17,    17,    93,    22,    22,    22,    22,    22,
     119,   215,    39,   211,   156,   163,    78,   136,   136,   136,
     135,    78,    19,    19,    94,    95,    96,    97,    93,   141,
      29,    19,   141,   141,    44,   136,    44,    93,    93,    93,
      93,    19,    48,    19,    19,   137,    45,   130,    48,    44,
     212,   211
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    67,    66,    66,    66,    66,    66,    66,
      66,    69,    68,    70,    70,    70,    70,    71,    71,    71,
      73,    72,    72,    74,    75,    77,    76,    76,    78,    78,
      78,    78,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    80,    81,    81,    82,    82,    83,    83,    84,
      85,    86,    85,    87,    88,    89,    88,    91,    90,    92,
      90,    93,    93,    93,    93,    93,    94,    93,    95,    93,
      96,    93,    97,    93,    93,    93,    93,    99,    98,   101,
     100,   103,   102,   102,   105,   104,   107,   106,   109,   108,
     108,   111,   110,   113,   112,   112,   115,   114,   117,   116,
     116,   118,   118,   119,   120,   119,   119,   122,   121,   123,
     123,   124,   124,   126,   125,   128,   127,   127,   129,   131,
     130,   132,   130,   133,   130,   134,   135,   130,   130,   137,
     136,   139,   138,   140,   141,   141,   141,   142,   143,   144,
     142,   145,   146,   142,   147,   142,   142,   148,   149,   142,
     142,   150,   142,   152,   153,   154,   151,   156,   155,   155,
     158,   159,   160,   157,   162,   163,   161,   161,   164,   165,
     165,   166,   166,   166,   166,   166,   167,   166,   168,   166,
     166,   169,   166,   170,   166,   171,   166,   172,   166,   173,
     166,   174,   166,   175,   166,   176,   166,   177,   166,   178,
     166,   179,   166,   180,   166,   181,   166,   182,   183,   183,
     185,   186,   184,   188,   187,   189,   187,   191,   190,   193,
     192,   192,   194,   195,   194,   196,   197,   196,   199,   198,
     198,   201,   200,   202,   202,   202,   204,   203,   205,   203,
     206,   206,   207,   207,   207,   209,   210,   208,   208,   212,
     211,   211,   214,   215,   213
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     1,     1,     1,     1,
       1,     0,    10,     1,     1,     1,     1,     1,     1,     1,
       0,     5,     4,     2,     2,     0,     4,     0,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     5,     3,     1,     1,     1,     1,     3,
       2,     0,     5,     3,     2,     0,     5,     0,     7,     0,
       7,     3,     3,     3,     3,     3,     0,     6,     0,     6,
       0,     6,     0,     6,     5,     5,     0,     0,     4,     0,
       4,     0,     4,     1,     0,     4,     0,     4,     0,     4,
       1,     0,     4,     0,     4,     1,     0,     4,     0,     4,
       1,     4,     4,     1,     0,     4,     1,     0,     6,     1,
       0,     1,     1,     0,     4,     0,     3,     0,     3,     0,
       6,     0,     6,     0,     6,     0,     0,     7,     0,     0,
       4,     0,     6,     6,     2,     2,     0,     1,     0,     0,
       9,     0,     0,    11,     0,     8,     1,     0,     0,    10,
       1,     0,     4,     0,     0,     0,    11,     0,     5,     0,
       0,     0,     0,    12,     0,     0,     9,     0,     2,     2,
       2,     1,     1,     1,     1,     1,     0,     4,     0,     5,
       3,     0,     4,     0,     5,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       5,     0,     4,     0,     5,     0,     4,     3,     1,     0,
       0,     0,     8,     0,     6,     0,     4,     0,     7,     0,
       3,     0,     1,     0,     4,     0,     0,     5,     0,     3,
       0,     0,     8,     2,     2,     0,     0,     7,     0,     6,
       2,     0,     1,     1,     1,     0,     0,     9,     0,     0,
       8,     0,     0,     0,    11
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
#line 51 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1663 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 61 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1669 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 61 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1675 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 78 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1681 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 83 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1687 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 87 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1693 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 91 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1699 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 96 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 97 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 99 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 122 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 123 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 126 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 127 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 138 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 142 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 143 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 149 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 153 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 154 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 160 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 161 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 171 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 172 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 173 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 174 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 176 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 177 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 178 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 179 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 188 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 188 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 192 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 192 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 196 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 197 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 200 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 200 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 204 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 204 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 208 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 209 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 216 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 217 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 220 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 220 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 224 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 225 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 237 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++;", (yyvsp[-3].ystr)); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 238 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--;", (yyvsp[-3].ystr)); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 242 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 243 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 249 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 264 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 268 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 273 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 282 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 283 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 284 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 285 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 285 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 290 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 294 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 294 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 300 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 314 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 315 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 315 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 315 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 318 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 318 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 318 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 328 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 328 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 346 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 347 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 351 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 353 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 354 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 356 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 357 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 358 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 360 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 361 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 362 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 363 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 364 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 365 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 366 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 367 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 368 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 369 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 370 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 375 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 384 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public static void %s(", (yyvsp[-1].ystr)); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 384 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 388 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 214:
#line 388 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 389 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 389 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 394 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 394 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 398 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 403 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 408 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 412 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 419 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 419 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 430 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 430 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 439 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 440 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 441 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 245:
#line 445 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 246:
#line 445 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 445 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 249:
#line 450 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s;", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 253:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 254:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2573 "parser.tab.c" /* yacc.c:1646  */
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
#line 461 "parser.y" /* yacc.c:1906  */

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
