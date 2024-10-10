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

   char* remove_quotes(const char* str) {
        int len = strlen(str);
        char* result = (char*)malloc(len + 1);
        int i, j = 0;

        for (i = 0; i < len; i++) {  
            if (str[i] != '\"') {
                result[j++] = str[i];
            }
        }

        result[j] = '\0';
        return result;
    }

#line 95 "parser.tab.c" /* yacc.c:339  */

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
#line 30 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 197 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 214 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  144
/* YYNRULES -- Number of rules.  */
#define YYNRULES  244
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  473

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
       0,    53,    53,    60,    60,    61,    62,    63,    64,    68,
      68,    71,    72,    73,    74,    79,    80,    81,    85,    85,
      86,    90,    94,    98,    98,    99,   103,   104,   105,   106,
     107,   108,   109,   110,   114,   115,   116,   117,   118,   124,
     128,   129,   132,   133,   137,   138,   144,   148,   149,   149,
     155,   159,   160,   160,   166,   166,   167,   167,   177,   178,
     179,   180,   181,   182,   182,   183,   183,   184,   184,   185,
     185,   186,   187,   188,   194,   194,   198,   198,   202,   202,
     203,   206,   206,   210,   210,   214,   214,   215,   218,   218,
     222,   222,   223,   226,   226,   230,   230,   231,   243,   244,
     248,   249,   249,   250,   255,   255,   259,   260,   265,   266,
     270,   270,   274,   274,   275,   279,   288,   288,   289,   289,
     290,   290,   291,   291,   291,   292,   296,   296,   300,   300,
     306,   313,   314,   315,   319,   320,   320,   320,   321,   321,
     321,   322,   322,   323,   324,   324,   324,   325,   326,   327,
     327,   328,   332,   332,   332,   332,   336,   336,   337,   341,
     341,   341,   341,   345,   345,   345,   346,   350,   354,   355,
     359,   360,   361,   362,   363,   364,   364,   365,   365,   366,
     367,   367,   368,   368,   369,   369,   370,   370,   371,   371,
     372,   372,   373,   373,   374,   374,   375,   375,   376,   376,
     377,   377,   378,   378,   379,   379,   383,   387,   388,   392,
     396,   397,   401,   402,   402,   405,   407,   407,   411,   411,
     412,   418,   418,   422,   423,   424,   428,   428,   429,   429,
     433,   434,   438,   439,   440,   444,   444,   444,   445,   449,
     449,   450,   454,   454,   454
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
  "function_declarartion", "call_a_function", "function_values", "$@66",
  "function_parameters", "$@67", "function_parameters_one_or_more", "$@68",
  "class_declarations", "$@69", "class_attributes",
  "class_attribute_declaration", "$@70", "$@71",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@72", "$@73", "set_property_with_this",
  "$@74", "class_function_declarartion", "$@75", "$@76", YY_NULLPTR
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

#define YYPACT_NINF -384

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-384)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     120,  -384,  -384,   -24,    20,    64,    72,    50,    54,    74,
      -4,  -384,    60,    73,    33,  -384,   112,   120,  -384,    80,
    -384,   -21,  -384,  -384,  -384,   120,  -384,  -384,  -384,  -384,
    -384,   104,  -384,  -384,  -384,  -384,  -384,  -384,    79,   224,
      88,   114,    12,    92,    94,  -384,  -384,    98,     4,  -384,
      93,  -384,  -384,  -384,   224,   224,   120,   120,   224,   119,
    -384,  -384,  -384,  -384,  -384,  -384,   262,    99,   101,    32,
    -384,  -384,  -384,  -384,    45,  -384,  -384,  -384,  -384,   102,
     107,   118,   109,   129,  -384,    93,  -384,   143,    14,   -11,
     116,   152,   162,   141,  -384,   224,  -384,   137,  -384,  -384,
     138,   140,  -384,  -384,  -384,  -384,   127,   128,   224,   142,
     150,   170,   144,   155,   156,   158,    12,   151,  -384,  -384,
     157,     5,   194,   186,   143,   224,   192,  -384,  -384,  -384,
    -384,    35,   231,    14,   190,    14,   223,   225,   215,  -384,
     226,   224,   160,   200,   224,   224,  -384,   224,  -384,   224,
     224,   224,   224,   224,  -384,   224,  -384,   224,   281,   202,
      97,   205,   227,   234,   230,   239,   235,   241,   238,   242,
     240,   249,  -384,   251,     8,     9,    10,   218,   236,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,   168,  -384,  -384,
      97,   256,    14,  -384,   243,  -384,  -384,  -384,   257,   258,
    -384,   208,  -384,  -384,  -384,   281,   281,   224,   281,   224,
     281,   281,   281,   281,   281,   224,   281,   224,   281,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,    97,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,   244,  -384,   270,    29,
    -384,   273,   250,   247,   285,   259,   260,   287,   292,    13,
    -384,   101,  -384,  -384,   284,    97,   120,   120,  -384,   288,
     280,   282,   271,   281,   281,   281,   281,   307,   296,   144,
     155,   156,   158,    12,  -384,    12,   286,  -384,  -384,   289,
     290,  -384,  -384,   291,  -384,  -384,  -384,  -384,   279,   297,
    -384,  -384,  -384,  -384,   308,   302,   101,  -384,  -384,   315,
     329,   224,  -384,   331,    75,   312,  -384,  -384,  -384,   120,
    -384,  -384,  -384,  -384,  -384,   327,   336,  -384,  -384,  -384,
     305,   305,   337,  -384,   313,    12,   311,   333,   302,  -384,
    -384,   237,   310,  -384,   316,   318,   319,   186,   320,   345,
     101,   346,   322,   314,   324,  -384,  -384,   353,   354,   328,
     355,   356,  -384,   343,    97,  -384,  -384,   358,   334,   347,
     335,    49,   357,   120,   340,   348,   349,   339,   350,  -384,
    -384,  -384,  -384,   144,   155,  -384,  -384,  -384,  -384,  -384,
      66,   344,   351,  -384,  -384,   362,  -384,  -384,   366,  -384,
    -384,   338,   341,  -384,   371,   373,  -384,  -384,  -384,   360,
    -384,   377,   381,   305,   368,   378,   379,   380,   382,  -384,
    -384,   186,  -384,   364,  -384,  -384,  -384,  -384,  -384,    12,
      12,    12,  -384,    12,  -384,  -384,   386,  -384,  -384,  -384,
    -384,   305,  -384,   120,   370,   387,   120,   120,   363,  -384,
    -384,  -384,    12,   365,  -384,   305,   305,   305,   305,  -384,
     389,   367,  -384,   391,   392,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,   369,  -384,  -384,   282,   374,  -384,   383,
    -384,   364,  -384
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     133,    16,    17,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,    15,     0,   133,     8,     0,
       5,     0,     6,     7,     2,   133,   134,   143,   147,   148,
     151,     0,    21,   152,   135,   138,   159,   144,     0,     0,
       0,     0,     0,     0,     0,     1,   132,     3,   100,    18,
      25,   103,   131,   221,     0,     0,   133,   133,     0,     0,
     204,   170,   171,   172,   173,   174,     0,     0,   215,    76,
      29,    26,    27,    28,     0,    31,    32,    33,    30,     0,
       0,     0,     0,     0,   101,    25,    23,     0,   225,     0,
       0,     0,     0,     0,   141,     0,   150,     0,   184,   186,
     175,   180,   188,   190,   192,   194,   196,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    98,    99,
       0,     0,     0,     0,     0,     0,     0,    20,   233,   232,
     234,     0,   238,   225,     0,   225,     0,     0,     0,   160,
       0,     0,     0,   208,     0,     0,   177,     0,   182,     0,
       0,     0,     0,     0,   198,     0,   202,     0,   179,     0,
       0,     0,    80,     0,    87,     0,    92,     0,    97,     0,
     212,     0,   210,     0,     0,     0,     0,     0,     0,     4,
      11,    12,    13,    14,   104,   102,    19,     0,    22,   242,
       0,     0,   225,   223,     0,   224,   153,   136,     0,   166,
     145,     0,   205,   207,   206,   185,   187,     0,   176,     0,
     181,   189,   191,   193,   195,     0,   197,     0,   201,   130,
      34,    38,    35,    36,    37,   216,     0,    78,    77,    85,
      84,    90,    89,    95,    94,   213,     0,     9,     0,     0,
      39,     0,     0,     0,     0,     0,     0,     0,     0,   107,
      24,   215,   228,   235,     0,     0,   133,   133,   139,     0,
       0,   125,     0,   178,   183,   199,   203,   220,     0,     0,
       0,     0,     0,     0,   211,     0,     0,    42,    43,     0,
       0,    47,    46,     0,    51,    50,    54,    56,     0,     0,
     105,   106,   108,   109,     0,   231,   215,   222,   226,     0,
       0,     0,   163,     0,   122,     0,   142,   218,   217,   133,
      79,    86,    91,    96,   214,     0,     0,    41,    48,    52,
      73,    73,     0,   110,     0,     0,     0,     0,   231,   154,
     137,     0,     0,   161,     0,     0,     0,     0,     0,     0,
     215,     0,     0,    74,     0,    44,    45,     0,     0,     0,
       0,     0,   115,   114,     0,   230,   229,     0,     0,   158,
       0,     0,     0,   133,     0,     0,     0,     0,     0,   146,
     219,   209,    10,     0,     0,    40,    93,    49,    88,    53,
       0,     0,     0,   112,   111,     0,   236,   227,     0,   155,
     140,     0,     0,   167,     0,     0,   118,   116,   120,     0,
     128,     0,     0,    73,    58,    59,    60,    61,    62,    55,
      57,     0,   243,   241,   156,   169,   168,   164,   162,     0,
       0,     0,   123,     0,    75,    82,     0,    63,    65,    67,
      69,    73,   113,   133,     0,     0,   133,   133,     0,   119,
     117,   121,     0,     0,    72,    73,    73,    73,    73,    71,
       0,     0,   237,     0,     0,   126,   124,   129,    64,    66,
      68,    70,   244,     0,   157,   165,   125,     0,   127,     0,
     239,   241,   240
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -114,   332,  -384,   -40,  -185,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -315,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -260,  -384,
    -384,  -384,  -384,  -384,  -259,  -384,    65,  -384,   147,  -384,
      76,  -384,   149,  -384,  -384,   -20,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,   -54,  -384,  -384,  -384,
    -384,  -384,  -383,  -384,  -384,  -384,  -384,   -17,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,   -51,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,  -384,
    -384,  -384,  -198,  -384,  -235,  -384,  -384,  -384,  -384,  -384,
    -121,  -384,  -384,  -384,    96,  -384,  -384,  -384,  -384,   -46,
    -384,  -384,  -384,  -384
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    82,    18,   275,   179,    19,    20,    85,
      21,   127,    87,   125,   438,   225,   180,   240,   279,   344,
     181,   243,   347,   182,   246,   348,   183,   320,   321,   350,
     445,   446,   447,   448,   345,   373,    75,   112,   163,   269,
     346,   374,    76,   113,   165,   270,    77,   114,   167,   271,
      78,   115,   169,   272,    22,    65,   123,    51,   249,   290,
     291,   292,   353,   384,   411,   293,   305,   420,   419,   421,
     337,   442,   439,   466,   339,   423,    23,    24,    25,    55,
     257,    56,   301,   141,    58,   261,    39,    26,    54,   256,
     359,   389,   436,    27,    57,   199,   363,   260,   332,   437,
     362,   393,    66,   147,   207,   149,   209,   144,   145,   150,
     151,   152,   153,   155,   215,   157,   217,    95,   108,   204,
      28,    29,   171,   273,   111,   267,   308,   340,    30,    88,
     132,   133,   328,   295,   326,   134,   192,   296,   413,   435,
     471,   135,   251,   433
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      46,    50,    74,    89,    90,   252,   351,    93,    52,   310,
     186,   311,   193,   136,   195,   174,   294,   175,   176,   177,
      83,   128,   129,   130,   238,   241,   244,    48,    69,   288,
      49,    31,    38,    84,    97,    98,    99,   440,   441,    91,
      92,   268,   289,    32,   142,   100,   101,   102,   103,   104,
     105,   106,   107,   239,   242,   245,    42,   158,   189,   456,
     178,   327,   131,    70,    71,    72,    73,   116,    35,   117,
     298,   254,    36,   250,   187,   314,   170,   315,   190,    43,
      44,   277,   278,   -93,   403,   -83,   -88,    33,   426,    40,
     201,   391,   392,   205,   206,    34,   208,    37,   210,   211,
     212,   213,   214,   185,   216,   370,   218,   220,   221,   222,
     223,   224,    45,   401,    48,   402,   449,   404,   405,   406,
     407,    41,    53,     1,     2,     3,   334,   335,    47,   336,
     458,   459,   460,   461,    59,     4,    67,    68,    79,    86,
     137,    80,    94,    81,   109,     5,   118,     6,     7,   110,
       8,   119,   121,     9,   120,    10,   263,    11,   264,    12,
      13,    97,    98,    99,   265,   140,   266,   126,    14,   385,
      15,   138,   100,   101,   102,   103,   104,   105,   106,   107,
     122,   139,   143,   146,   202,   148,    97,    98,    99,   154,
     159,   156,   126,   160,   161,   172,   162,   100,   101,   102,
     103,   104,   105,   106,   107,    97,    98,    99,   164,   168,
     166,   184,   173,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   100,   101,   102,   103,   104,   105,
     106,   107,   262,   170,    48,   170,   188,   191,   194,   299,
     300,   196,   198,   197,   200,   203,   219,    60,   226,   227,
     331,   228,   229,    97,    98,    99,   230,   231,   232,   234,
     233,   360,   235,   247,   100,   101,   102,   103,   104,   105,
     106,   107,    48,   236,   237,    61,    62,    63,    64,   253,
     258,   248,    97,    98,    99,   355,   255,   276,   274,   259,
     280,   282,   341,   100,   101,   102,   103,   104,   105,   106,
     107,   281,   283,   297,   285,   286,    96,    97,    98,    99,
     287,   302,   303,   284,   309,   306,   304,   367,   100,   101,
     102,   103,   104,   105,   106,   107,    97,    98,    99,   307,
     322,   316,   324,   317,   329,   318,   319,   100,   101,   102,
     103,   104,   105,   106,   107,   323,   395,   325,   330,   333,
     338,   342,   343,   349,   352,   356,   354,   357,   361,   364,
     408,   365,   366,   368,   369,   371,   372,   -81,   375,   376,
     378,   380,   383,   388,   381,   382,   386,   396,   387,   390,
     412,   394,   399,   443,   414,   397,   398,   400,   409,   417,
     427,   432,   418,   415,   424,   410,   416,   422,   425,   451,
     428,   429,   430,   434,   431,   444,   452,   455,   462,   457,
     464,   465,   468,   379,   467,   463,   450,   124,   312,   453,
     454,   313,   469,   377,   358,   472,     0,   470
};

static const yytype_int16 yycheck[] =
{
      17,    21,    42,    54,    55,   190,   321,    58,    25,   269,
     124,   270,   133,    24,   135,    10,   251,    12,    13,    14,
      16,     7,     8,     9,    16,    16,    16,    48,    16,    16,
      51,    55,    36,    29,    45,    46,    47,   420,   421,    56,
      57,   226,    29,    23,    95,    56,    57,    58,    59,    60,
      61,    62,    63,    45,    45,    45,    23,   108,    23,   442,
      55,   296,    48,    51,    52,    53,    54,    22,    18,    24,
     255,   192,    18,   187,   125,   273,   116,   275,    43,    46,
      47,    52,    53,    51,    18,    53,    54,    23,   403,    29,
     141,    42,    43,   144,   145,    23,   147,    23,   149,   150,
     151,   152,   153,   123,   155,   340,   157,    10,    11,    12,
      13,    14,     0,   373,    48,   374,   431,    51,    52,    53,
      54,    48,    18,     3,     4,     5,    51,    52,    48,    54,
     445,   446,   447,   448,    55,    15,    48,    23,    46,    46,
      24,    47,    23,    45,    45,    25,    44,    27,    28,    48,
      30,    44,    43,    33,    36,    35,   207,    37,   209,    39,
      40,    45,    46,    47,   215,    24,   217,    24,    48,   354,
      50,    19,    56,    57,    58,    59,    60,    61,    62,    63,
      51,    19,    45,    45,    24,    45,    45,    46,    47,    62,
      48,    63,    24,    43,    24,    44,    52,    56,    57,    58,
      59,    60,    61,    62,    63,    45,    46,    47,    53,    51,
      54,    17,    55,    45,    46,    47,    56,    57,    58,    59,
      60,    61,    62,    63,    56,    57,    58,    59,    60,    61,
      62,    63,    24,   273,    48,   275,    44,     6,    48,   256,
     257,    18,    27,    18,    18,    45,    44,    23,    43,    22,
     301,    17,    22,    45,    46,    47,    17,    22,    17,    17,
      22,    24,    22,    45,    56,    57,    58,    59,    60,    61,
      62,    63,    48,    24,    23,    51,    52,    53,    54,    23,
      23,    45,    45,    46,    47,   325,    43,    17,    44,    31,
      17,    44,   309,    56,    57,    58,    59,    60,    61,    62,
      63,    51,    17,    19,    44,    18,    44,    45,    46,    47,
      18,    23,    32,    54,    18,    44,    34,   337,    56,    57,
      58,    59,    60,    61,    62,    63,    45,    46,    47,    22,
      51,    45,    24,    44,    19,    45,    45,    56,    57,    58,
      59,    60,    61,    62,    63,    48,   363,    45,    19,    18,
      38,    24,    16,    48,    17,    44,    43,    24,    48,    43,
     380,    43,    43,    43,    19,    19,    44,    53,    44,    16,
      16,    43,    29,    26,    19,    19,    18,    37,    44,    44,
      18,    24,    43,   423,    18,    37,    37,    37,    44,    18,
      22,   411,    19,    55,    17,    44,    55,    37,    17,    29,
      22,    22,    22,    39,    22,    19,    19,    44,    19,    44,
      19,    19,   466,   348,    45,    48,   433,    85,   271,   436,
     437,   272,    48,   347,   328,   471,    -1,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    48,    50,    65,    66,    68,    71,
      72,    74,   118,   140,   141,   142,   151,   157,   184,   185,
     192,    55,    23,    23,    23,    18,    18,    23,    36,   150,
      29,    48,    23,    46,    47,     0,   141,    48,    48,    51,
     119,   121,   141,    18,   152,   143,   145,   158,   148,    55,
      23,    51,    52,    53,    54,   119,   166,    48,    23,    16,
      51,    52,    53,    54,    78,   100,   106,   110,   114,    46,
      47,    45,    67,    16,    29,    73,    46,    76,   193,   166,
     166,   141,   141,   166,    23,   181,    44,    45,    46,    47,
      56,    57,    58,    59,    60,    61,    62,    63,   182,    45,
      48,   188,   101,   107,   111,   115,    22,    24,    44,    44,
      36,    43,    51,   120,    76,    77,    24,    75,     7,     8,
       9,    48,   194,   195,   199,   205,    24,    24,    19,    19,
      24,   147,   166,    45,   171,   172,    45,   167,    45,   169,
     173,   174,   175,   176,    62,   177,    63,   179,   166,    48,
      43,    24,    52,   102,    53,   108,    54,   112,    51,   116,
      78,   186,    44,    55,    10,    12,    13,    14,    55,    70,
      80,    84,    87,    90,    17,   119,    75,   166,    44,    23,
      43,     6,   200,   194,    48,   194,    18,    18,    27,   159,
      18,   166,    24,    45,   183,   166,   166,   168,   166,   170,
     166,   166,   166,   166,   166,   178,   166,   180,   166,    44,
      10,    11,    12,    13,    14,    79,    43,    22,    17,    22,
      17,    22,    17,    22,    17,    22,    24,    23,    16,    45,
      81,    16,    45,    85,    16,    45,    88,    45,    45,   122,
      75,   206,    79,    23,   194,    43,   153,   144,    23,    31,
     161,   149,    24,   166,   166,   166,   166,   189,    79,   103,
     109,   113,   117,   187,    44,    69,    17,    52,    53,    82,
      17,    51,    44,    17,    54,    44,    18,    18,    16,    29,
     123,   124,   125,   129,   188,   197,   201,    19,    79,   141,
     141,   146,    23,    32,    34,   130,    44,    22,   190,    18,
     102,   108,   112,   116,   186,   186,    45,    44,    45,    45,
      91,    92,    51,    48,    24,    45,   198,   188,   196,    19,
      19,   166,   162,    18,    51,    52,    54,   134,    38,   138,
     191,   141,    24,    16,    83,    98,   104,    86,    89,    48,
      93,    93,    17,   126,    43,    78,    44,    24,   198,   154,
      24,    48,   164,   160,    43,    43,    43,   119,    43,    19,
     188,    19,    44,    99,   105,    44,    16,   114,    16,   110,
      43,    19,    19,    29,   127,    79,    18,    44,    26,   155,
      44,    42,    43,   165,    24,   141,    37,    37,    37,    43,
      37,   102,   108,    18,    51,    52,    53,    54,   119,    44,
      44,   128,    18,   202,    18,    55,    55,    18,    19,   132,
     131,   133,    37,   139,    17,    17,    93,    22,    22,    22,
      22,    22,   119,   207,    39,   203,   156,   163,    78,   136,
     136,   136,   135,    78,    19,    94,    95,    96,    97,    93,
     141,    29,    19,   141,   141,    44,   136,    44,    93,    93,
      93,    93,    19,    48,    19,    19,   137,    45,   130,    48,
      44,   204,   203
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    67,    66,    66,    66,    66,    66,    69,
      68,    70,    70,    70,    70,    71,    71,    71,    73,    72,
      72,    74,    75,    77,    76,    76,    78,    78,    78,    78,
      78,    78,    78,    78,    79,    79,    79,    79,    79,    80,
      81,    81,    82,    82,    83,    83,    84,    85,    86,    85,
      87,    88,    89,    88,    91,    90,    92,    90,    93,    93,
      93,    93,    93,    94,    93,    95,    93,    96,    93,    97,
      93,    93,    93,    93,    99,    98,   101,   100,   103,   102,
     102,   105,   104,   107,   106,   109,   108,   108,   111,   110,
     113,   112,   112,   115,   114,   117,   116,   116,   118,   118,
     119,   120,   119,   119,   122,   121,   123,   123,   124,   124,
     126,   125,   128,   127,   127,   129,   131,   130,   132,   130,
     133,   130,   134,   135,   130,   130,   137,   136,   139,   138,
     140,   141,   141,   141,   142,   143,   144,   142,   145,   146,
     142,   147,   142,   142,   148,   149,   142,   142,   142,   150,
     142,   142,   152,   153,   154,   151,   156,   155,   155,   158,
     159,   160,   157,   162,   163,   161,   161,   164,   165,   165,
     166,   166,   166,   166,   166,   167,   166,   168,   166,   166,
     169,   166,   170,   166,   171,   166,   172,   166,   173,   166,
     174,   166,   175,   166,   176,   166,   177,   166,   178,   166,
     179,   166,   180,   166,   181,   166,   182,   183,   183,   184,
     185,   185,   186,   187,   186,   188,   189,   188,   191,   190,
     190,   193,   192,   194,   194,   194,   196,   195,   197,   195,
     198,   198,   199,   199,   199,   201,   202,   200,   200,   204,
     203,   203,   206,   207,   205
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     1,     1,     1,     0,
      10,     1,     1,     1,     1,     1,     1,     1,     0,     5,
       4,     2,     2,     0,     4,     0,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       5,     3,     1,     1,     1,     1,     3,     2,     0,     5,
       3,     2,     0,     5,     0,     7,     0,     7,     3,     3,
       3,     3,     3,     0,     6,     0,     6,     0,     6,     0,
       6,     5,     5,     0,     0,     4,     0,     4,     0,     4,
       1,     0,     4,     0,     4,     0,     4,     1,     0,     4,
       0,     4,     1,     0,     4,     0,     4,     1,     4,     4,
       1,     0,     4,     1,     0,     6,     1,     0,     1,     1,
       0,     4,     0,     3,     0,     3,     0,     6,     0,     6,
       0,     6,     0,     0,     7,     0,     0,     4,     0,     6,
       6,     2,     2,     0,     1,     0,     0,     9,     0,     0,
      11,     0,     8,     1,     0,     0,    10,     1,     1,     0,
       4,     1,     0,     0,     0,    11,     0,     5,     0,     0,
       0,     0,    12,     0,     0,     9,     0,     2,     2,     2,
       1,     1,     1,     1,     1,     0,     4,     0,     5,     3,
       0,     4,     0,     5,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     5,
       0,     4,     0,     5,     0,     4,     3,     1,     0,    10,
       5,     7,     1,     0,     4,     0,     0,     5,     0,     3,
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
#line 60 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 68 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 68 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 85 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 90 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 94 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 103 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 104 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 105 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 106 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 116 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 117 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 118 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 128 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 129 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 144 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 148 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 149 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 155 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 159 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 160 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 166 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 167 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 177 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 178 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 179 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 180 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 182 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 183 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 184 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 185 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 194 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 194 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 198 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 198 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 202 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 203 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 206 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 206 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 210 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 210 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 214 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 215 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 218 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 218 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 222 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 223 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 226 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 226 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 230 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 231 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 243 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++;", (yyvsp[-3].ystr)); }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 244 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--;", (yyvsp[-3].ystr)); }
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 248 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 249 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 255 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 270 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 274 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 279 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 288 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 289 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 290 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 291 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 291 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 296 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 300 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 300 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 306 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 322 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 322 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 324 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 327 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 327 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 332 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 332 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 332 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 336 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 336 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 341 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 341 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 341 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 341 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 345 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 345 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 345 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 350 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 354 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 360 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 361 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 362 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 364 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 365 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 366 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 367 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 368 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 369 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 370 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 372 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 374 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 375 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 376 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 377 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 379 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 379 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 383 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 402 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 216:
#line 407 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 218:
#line 411 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 418 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 222:
#line 418 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 428 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 428 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 438 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 439 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 440 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 444 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 444 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 444 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 449 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s;", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 454 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 454 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2500 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 244:
#line 454 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2506 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2510 "parser.tab.c" /* yacc.c:1646  */
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
#line 460 "parser.y" /* yacc.c:1906  */

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
