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
#define YYFINAL  46
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   427

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  243
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
      69,    70,    71,    76,    77,    78,    82,    82,    83,    87,
      91,    95,    95,    96,   100,   101,   102,   103,   104,   105,
     106,   107,   111,   112,   113,   114,   115,   121,   121,   126,
     130,   131,   134,   135,   139,   140,   146,   150,   151,   151,
     157,   161,   162,   162,   168,   168,   169,   169,   179,   180,
     181,   182,   183,   184,   184,   185,   185,   186,   186,   187,
     187,   188,   189,   190,   196,   196,   200,   200,   204,   204,
     205,   208,   208,   212,   212,   216,   216,   217,   220,   220,
     224,   224,   225,   228,   228,   232,   232,   233,   245,   246,
     250,   251,   251,   252,   256,   256,   260,   261,   266,   267,
     271,   271,   275,   275,   276,   280,   289,   289,   290,   290,
     291,   291,   292,   292,   292,   293,   297,   297,   301,   301,
     307,   314,   315,   316,   320,   321,   321,   321,   322,   322,
     322,   323,   323,   324,   325,   325,   325,   326,   327,   328,
     328,   329,   333,   333,   333,   333,   337,   337,   338,   342,
     342,   342,   342,   346,   346,   346,   347,   351,   355,   356,
     360,   361,   362,   363,   364,   365,   365,   366,   366,   367,
     368,   368,   369,   369,   370,   370,   371,   371,   372,   372,
     373,   373,   374,   374,   375,   375,   376,   376,   377,   377,
     378,   378,   379,   379,   380,   380,   384,   388,   389,   393,
     397,   398,   402,   403,   406,   408,   408,   412,   412,   413,
     419,   419,   423,   424,   425,   429,   429,   430,   430,   434,
     435,   439,   440,   441,   445,   445,   445,   446,   450,   450,
     451,   455,   455,   455
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
  "program", "declaration", "$@1", "possible_declarations",
  "variable_types", "console_log_declarations", "$@2",
  "console_log_left_common", "console_log_right_common",
  "console_log_declaration_with_add", "$@3", "all_possible_variables",
  "all_possible_variables_types", "instance_new_class", "$@4",
  "number_declaration", "number_or_array_declaration",
  "number_or_float_declaration", "array_of_numbers_and_floats_declaration",
  "string_declaration", "string_or_array_of_strings_declaration", "$@5",
  "boolean_declaration", "boolean_or_array_of_booleans_declaration", "$@6",
  "object_declaration", "$@7", "$@8", "object_attribution", "$@9", "$@10",
  "$@11", "$@12", "array_of_numbers", "$@13",
  "array_of_numbers_only_values", "$@14", "numbers", "$@15",
  "array_of_floats", "$@16", "array_of_floats_only_values", "$@17",
  "floats", "$@18", "array_of_booleans", "$@19", "booleans", "$@20",
  "array_of_strings", "$@21", "strings", "$@22",
  "increment_decrement_variable", "access_object", "$@23",
  "access_object_on_bracket", "$@24", "acess_more_objects_on_bracket",
  "access_object_nested", "access_identifier_on_object_nested", "$@25",
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
  "function_declarartion", "call_a_function", "function_values",
  "function_parameters", "$@66", "function_parameters_one_or_more", "$@67",
  "class_declarations", "$@68", "class_attributes",
  "class_attribute_declaration", "$@69", "$@70",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@71", "$@72", "set_property_with_this",
  "$@73", "class_function_declarartion", "$@74", "$@75", YY_NULLPTR
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

#define YYPACT_NINF -372

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-372)))

#define YYTABLE_NINF -94

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      28,  -372,   -22,    25,    15,    69,    72,    79,    96,    84,
      82,  -372,    99,    85,     5,  -372,   137,    28,    90,  -372,
      21,  -372,  -372,  -372,  -372,    28,  -372,  -372,  -372,  -372,
    -372,    94,   123,  -372,  -372,  -372,  -372,  -372,  -372,    87,
     117,    95,   121,    30,   108,   110,  -372,  -372,  -372,    18,
    -372,   109,  -372,  -372,   131,  -372,   117,   117,    28,    28,
     117,   150,  -372,  -372,  -372,  -372,  -372,  -372,   242,   132,
     130,   -24,  -372,  -372,  -372,  -372,    67,  -372,  -372,  -372,
    -372,   135,   138,   140,   133,  -372,   109,  -372,   157,   142,
      14,    64,    89,   174,   179,   129,  -372,   117,  -372,   155,
    -372,  -372,   159,   160,  -372,  -372,  -372,  -372,   144,   145,
     117,   147,   164,   185,   158,   172,   186,   188,    30,   182,
    -372,  -372,     4,   230,   200,   157,   117,   205,  -372,   228,
    -372,  -372,  -372,    -3,   246,    14,   206,    14,   235,   245,
     240,  -372,   251,   117,   156,   223,   117,   117,  -372,   117,
    -372,   117,   117,   117,   117,   117,  -372,   117,  -372,   117,
     250,   226,   149,   229,   249,   256,   252,   266,   262,   273,
     269,   275,   271,   290,  -372,     3,     9,    19,   270,   272,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,   175,  -372,
    -372,  -372,   149,   293,    14,  -372,   277,  -372,  -372,  -372,
     295,   291,  -372,   199,  -372,  -372,  -372,   250,   250,   117,
     250,   117,   250,   250,   250,   250,   250,   117,   250,   117,
     250,  -372,  -372,  -372,  -372,  -372,  -372,  -372,   149,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,    30,   279,   304,
     -16,  -372,   307,   274,   282,   310,   276,   284,   311,   313,
      50,  -372,    30,   130,  -372,  -372,   314,   149,    28,    28,
    -372,   309,   302,   301,   292,   250,   250,   250,   250,   315,
     320,   158,   172,   186,   188,  -372,  -372,   294,  -372,  -372,
     296,   297,  -372,  -372,   298,  -372,  -372,  -372,  -372,   299,
     300,  -372,  -372,  -372,  -372,   317,   321,   306,   130,  -372,
    -372,   325,   327,   117,  -372,   331,    65,   316,  -372,  -372,
    -372,    28,  -372,  -372,  -372,  -372,   336,  -372,  -372,  -372,
     305,   305,   338,  -372,   312,   319,    30,   322,   333,   306,
    -372,  -372,   219,   323,  -372,   324,   326,   329,   200,   330,
     339,   130,   340,   328,   332,  -372,  -372,   344,   347,   334,
     345,   346,  -372,   341,  -372,   149,  -372,  -372,   350,   335,
     348,   342,    43,   351,    28,   343,   352,   353,   354,   356,
    -372,  -372,  -372,   158,   172,  -372,  -372,  -372,  -372,  -372,
     176,   355,   357,  -372,  -372,   360,  -372,  -372,   365,  -372,
    -372,   349,   358,  -372,   366,   368,  -372,  -372,  -372,   359,
    -372,   371,   374,   305,   363,   372,   373,   376,   378,  -372,
    -372,   200,  -372,   364,  -372,  -372,  -372,  -372,  -372,    30,
      30,    30,  -372,    30,  -372,  -372,   383,  -372,  -372,  -372,
    -372,   305,  -372,    28,   377,   386,    28,    28,   367,  -372,
    -372,  -372,    30,   370,  -372,   305,   305,   305,   305,  -372,
     388,   361,  -372,   389,   391,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,   379,  -372,  -372,   301,   369,  -372,   381,
    -372,   364,  -372
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     133,    14,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   149,     0,     0,     0,    13,     0,   133,     0,     5,
       0,     8,     6,     7,     2,   133,   134,   143,   147,   148,
     151,     0,     0,    19,   152,   135,   138,   159,   144,     0,
       0,     0,     0,     0,     0,     0,     1,   132,     3,   100,
      16,    23,   103,   131,     0,   220,     0,     0,   133,   133,
       0,     0,   204,   170,   171,   172,   173,   174,     0,     0,
     214,    76,    27,    24,    25,    26,     0,    29,    30,    31,
      28,     0,     0,     0,     0,   101,    23,    21,     0,     0,
     224,     0,     0,     0,     0,     0,   141,     0,   150,     0,
     184,   186,   175,   180,   188,   190,   192,   194,   196,   200,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      98,    99,     0,     0,     0,     0,     0,     0,    18,     0,
     232,   231,   233,     0,   237,   224,     0,   224,     0,     0,
       0,   160,     0,     0,     0,   208,     0,     0,   177,     0,
     182,     0,     0,     0,     0,     0,   198,     0,   202,     0,
     179,     0,     0,     0,    80,     0,    87,     0,    92,     0,
      97,     0,   212,     0,   210,     0,     0,     0,     0,     0,
       4,     9,    10,    11,    12,   104,   102,    17,     0,    20,
      37,   241,     0,     0,   224,   222,     0,   223,   153,   136,
       0,   166,   145,     0,   205,   207,   206,   185,   187,     0,
     176,     0,   181,   189,   191,   193,   195,     0,   197,     0,
     201,   130,    32,    36,    33,    34,    35,   215,     0,    78,
      77,    85,    84,    90,    89,    95,    94,     0,     0,     0,
       0,    39,     0,     0,     0,     0,     0,     0,     0,     0,
     107,    22,     0,   214,   227,   234,     0,     0,   133,   133,
     139,     0,     0,   125,     0,   178,   183,   199,   203,   219,
       0,     0,     0,     0,     0,   213,   211,     0,    42,    43,
       0,     0,    47,    46,     0,    51,    50,    54,    56,     0,
       0,   105,   106,   108,   109,     0,     0,   230,   214,   221,
     225,     0,     0,     0,   163,     0,   122,     0,   142,   217,
     216,   133,    79,    86,    91,    96,     0,    41,    48,    52,
      73,    73,     0,   110,     0,     0,     0,     0,     0,   230,
     154,   137,     0,     0,   161,     0,     0,     0,     0,     0,
       0,   214,     0,    74,     0,    44,    45,     0,     0,     0,
       0,     0,   115,   114,    38,     0,   229,   228,     0,     0,
     158,     0,     0,     0,   133,     0,     0,     0,     0,     0,
     146,   218,   209,     0,     0,    40,    93,    49,    88,    53,
       0,     0,     0,   112,   111,     0,   235,   226,     0,   155,
     140,     0,     0,   167,     0,     0,   118,   116,   120,     0,
     128,     0,     0,    73,    58,    59,    60,    61,    62,    55,
      57,     0,   242,   240,   156,   169,   168,   164,   162,     0,
       0,     0,   123,     0,    75,    82,     0,    63,    65,    67,
      69,    73,   113,   133,     0,     0,   133,   133,     0,   119,
     117,   121,     0,     0,    72,    73,    73,    73,    73,    71,
       0,     0,   236,     0,     0,   126,   124,   129,    64,    66,
      68,    70,   243,     0,   157,   165,   125,     0,   127,     0,
     238,   240,   239
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -113,
     337,  -372,   -41,  -183,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -316,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -265,  -372,
    -372,  -372,  -372,  -372,  -262,  -372,    70,  -372,   139,  -372,
      68,  -372,   148,  -372,  -372,   -19,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,   -45,  -372,  -372,  -372,
    -372,  -372,  -371,  -372,  -372,  -372,  -372,   -17,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,   -53,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,  -372,
    -372,  -372,  -213,  -238,  -372,  -372,  -372,  -372,  -372,  -124,
    -372,  -372,  -372,    97,  -372,  -372,  -372,  -372,   -44,  -372,
    -372,  -372,  -372
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    16,    17,    83,   180,    18,    19,    86,    20,   128,
      88,   126,   438,   227,    21,   252,   181,   241,   280,   344,
     182,   244,   347,   183,   247,   348,   184,   320,   321,   350,
     445,   446,   447,   448,   345,   373,    77,   114,   165,   271,
     346,   374,    78,   115,   167,   272,    79,   116,   169,   273,
      80,   117,   171,   274,    22,    67,   124,    52,   250,   291,
     292,   293,   353,   384,   411,   294,   307,   420,   419,   421,
     338,   442,   439,   466,   340,   423,    23,    24,    25,    57,
     259,    58,   303,   143,    60,   263,    40,    26,    56,   258,
     360,   389,   436,    27,    59,   201,   364,   262,   333,   437,
     363,   393,    68,   149,   209,   151,   211,   146,   147,   152,
     153,   154,   155,   157,   217,   159,   219,    97,   110,   206,
      28,    29,   173,   113,   269,   310,   341,    30,    90,   134,
     135,   329,   297,   327,   136,   194,   298,   413,   435,   471,
     137,   253,   433
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      47,    51,    76,    91,    92,   351,   312,    95,    53,   254,
     313,   195,   187,   197,   175,   296,   176,   177,   178,   239,
     191,   130,   131,   132,   275,   242,    31,   -93,    43,   -83,
     -88,     1,     2,     3,    84,   245,   278,   279,    33,   295,
     192,    93,    94,     4,   144,   270,    71,    85,   240,   440,
     441,    44,    45,     5,   243,     6,     7,   160,     8,   179,
     328,     9,   133,    10,   246,    11,   289,    12,    13,    49,
     256,   456,    50,   188,   300,   251,    14,   172,    15,   290,
      32,    72,    73,    74,    75,   391,   392,   426,   138,   118,
     203,   119,    34,   207,   208,    35,   210,    36,   212,   213,
     214,   215,   216,   371,   218,   186,   220,    38,   401,    99,
     100,   101,   402,   139,    37,   449,   335,   336,    39,   337,
     102,   103,   104,   105,   106,   107,   108,   109,    41,   458,
     459,   460,   461,    42,    99,   100,   101,    46,    48,    54,
      62,    55,    61,    69,    70,   102,   103,   104,   105,   106,
     107,   108,   109,   142,    81,    87,   265,    82,   266,   222,
     223,   224,   225,   226,   267,    49,   268,    89,    63,    64,
      65,    66,   385,    96,    99,   100,   101,   111,   112,   120,
     204,   127,   121,   122,   123,   102,   103,   104,   105,   106,
     107,   108,   109,   140,   403,   161,   172,   129,   141,   127,
     145,    99,   100,   101,   148,   150,   156,   162,   158,   163,
     164,   172,   102,   103,   104,   105,   106,   107,   108,   109,
      99,   100,   101,   264,    49,   166,   174,   404,   405,   406,
     407,   102,   103,   104,   105,   106,   107,   108,   109,   170,
     168,   301,   302,   361,    99,   100,   101,   185,    49,   189,
     332,   190,   193,   198,   196,   102,   103,   104,   105,   106,
     107,   108,   109,   199,    99,   100,   101,   200,   205,   202,
     221,   229,   228,   230,   231,   102,   103,   104,   105,   106,
     107,   108,   109,   232,   233,   356,    98,    99,   100,   101,
     234,   235,   236,   237,   342,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   102,   103,   104,   105,
     106,   107,   108,   109,   238,   248,   255,   249,   260,   368,
     257,   277,   261,   276,   281,   282,   283,   284,   286,   287,
     285,   288,   304,   299,   305,   306,   308,   309,   311,   316,
     317,   324,   318,   319,   330,   325,   331,   395,   323,   334,
     322,   326,   343,   349,   339,   352,   354,   358,   370,   372,
     376,   408,   355,   378,   381,   382,   357,   365,   386,   366,
     383,   362,   367,   369,   388,   394,   375,   380,   412,   387,
     396,   -81,   443,   414,   417,   427,   390,   418,   424,   397,
     398,   425,   432,   400,   428,   429,   422,   399,   430,   409,
     431,   410,   444,   434,   415,   452,   451,   462,   464,   463,
     465,   455,   314,   416,   457,   377,   450,   469,   379,   453,
     454,   468,   315,   125,   467,   470,   359,   472
};

static const yytype_uint16 yycheck[] =
{
      17,    20,    43,    56,    57,   321,   271,    60,    25,   192,
     272,   135,   125,   137,    10,   253,    12,    13,    14,    16,
      23,     7,     8,     9,   237,    16,    48,    51,    23,    53,
      54,     3,     4,     5,    16,    16,    52,    53,    23,   252,
      43,    58,    59,    15,    97,   228,    16,    29,    45,   420,
     421,    46,    47,    25,    45,    27,    28,   110,    30,    55,
     298,    33,    48,    35,    45,    37,    16,    39,    40,    48,
     194,   442,    51,   126,   257,   188,    48,   118,    50,    29,
      55,    51,    52,    53,    54,    42,    43,   403,    24,    22,
     143,    24,    23,   146,   147,    23,   149,    18,   151,   152,
     153,   154,   155,   341,   157,   124,   159,    23,   373,    45,
      46,    47,   374,    24,    18,   431,    51,    52,    36,    54,
      56,    57,    58,    59,    60,    61,    62,    63,    29,   445,
     446,   447,   448,    48,    45,    46,    47,     0,    48,    45,
      23,    18,    55,    48,    23,    56,    57,    58,    59,    60,
      61,    62,    63,    24,    46,    46,   209,    47,   211,    10,
      11,    12,    13,    14,   217,    48,   219,    36,    51,    52,
      53,    54,   355,    23,    45,    46,    47,    45,    48,    44,
      24,    24,    44,    43,    51,    56,    57,    58,    59,    60,
      61,    62,    63,    19,    18,    48,   237,    55,    19,    24,
      45,    45,    46,    47,    45,    45,    62,    43,    63,    24,
      52,   252,    56,    57,    58,    59,    60,    61,    62,    63,
      45,    46,    47,    24,    48,    53,    44,    51,    52,    53,
      54,    56,    57,    58,    59,    60,    61,    62,    63,    51,
      54,   258,   259,    24,    45,    46,    47,    17,    48,    44,
     303,    23,     6,    18,    48,    56,    57,    58,    59,    60,
      61,    62,    63,    18,    45,    46,    47,    27,    45,    18,
      44,    22,    43,    17,    22,    56,    57,    58,    59,    60,
      61,    62,    63,    17,    22,   326,    44,    45,    46,    47,
      17,    22,    17,    22,   311,    45,    46,    47,    56,    57,
      58,    59,    60,    61,    62,    63,    56,    57,    58,    59,
      60,    61,    62,    63,    24,    45,    23,    45,    23,   338,
      43,    17,    31,    44,    17,    51,    44,    17,    44,    18,
      54,    18,    23,    19,    32,    34,    44,    22,    18,    45,
      44,    24,    45,    45,    19,    24,    19,   364,    48,    18,
      51,    45,    16,    48,    38,    17,    44,    24,    19,    19,
      16,   380,    43,    16,    19,    19,    44,    43,    18,    43,
      29,    48,    43,    43,    26,    24,    44,    43,    18,    44,
      37,    53,   423,    18,    18,    22,    44,    19,    17,    37,
      37,    17,   411,    37,    22,    22,    37,    43,    22,    44,
      22,    44,    19,    39,    55,    19,    29,    19,    19,    48,
      19,    44,   273,    55,    44,   347,   433,    48,   348,   436,
     437,   466,   274,    86,    45,    44,   329,   471
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    48,    50,    65,    66,    69,    70,
      72,    78,   118,   140,   141,   142,   151,   157,   184,   185,
     191,    48,    55,    23,    23,    23,    18,    18,    23,    36,
     150,    29,    48,    23,    46,    47,     0,   141,    48,    48,
      51,   119,   121,   141,    45,    18,   152,   143,   145,   158,
     148,    55,    23,    51,    52,    53,    54,   119,   166,    48,
      23,    16,    51,    52,    53,    54,    76,   100,   106,   110,
     114,    46,    47,    67,    16,    29,    71,    46,    74,    36,
     192,   166,   166,   141,   141,   166,    23,   181,    44,    45,
      46,    47,    56,    57,    58,    59,    60,    61,    62,    63,
     182,    45,    48,   187,   101,   107,   111,   115,    22,    24,
      44,    44,    43,    51,   120,    74,    75,    24,    73,    55,
       7,     8,     9,    48,   193,   194,   198,   204,    24,    24,
      19,    19,    24,   147,   166,    45,   171,   172,    45,   167,
      45,   169,   173,   174,   175,   176,    62,   177,    63,   179,
     166,    48,    43,    24,    52,   102,    53,   108,    54,   112,
      51,   116,    76,   186,    44,    10,    12,    13,    14,    55,
      68,    80,    84,    87,    90,    17,   119,    73,   166,    44,
      23,    23,    43,     6,   199,   193,    48,   193,    18,    18,
      27,   159,    18,   166,    24,    45,   183,   166,   166,   168,
     166,   170,   166,   166,   166,   166,   166,   178,   166,   180,
     166,    44,    10,    11,    12,    13,    14,    77,    43,    22,
      17,    22,    17,    22,    17,    22,    17,    22,    24,    16,
      45,    81,    16,    45,    85,    16,    45,    88,    45,    45,
     122,    73,    79,   205,    77,    23,   193,    43,   153,   144,
      23,    31,   161,   149,    24,   166,   166,   166,   166,   188,
      77,   103,   109,   113,   117,   186,    44,    17,    52,    53,
      82,    17,    51,    44,    17,    54,    44,    18,    18,    16,
      29,   123,   124,   125,   129,   186,   187,   196,   200,    19,
      77,   141,   141,   146,    23,    32,    34,   130,    44,    22,
     189,    18,   102,   108,   112,   116,    45,    44,    45,    45,
      91,    92,    51,    48,    24,    24,    45,   197,   187,   195,
      19,    19,   166,   162,    18,    51,    52,    54,   134,    38,
     138,   190,   141,    16,    83,    98,   104,    86,    89,    48,
      93,    93,    17,   126,    44,    43,    76,    44,    24,   197,
     154,    24,    48,   164,   160,    43,    43,    43,   119,    43,
      19,   187,    19,    99,   105,    44,    16,   114,    16,   110,
      43,    19,    19,    29,   127,    77,    18,    44,    26,   155,
      44,    42,    43,   165,    24,   141,    37,    37,    37,    43,
      37,   102,   108,    18,    51,    52,    53,    54,   119,    44,
      44,   128,    18,   201,    18,    55,    55,    18,    19,   132,
     131,   133,    37,   139,    17,    17,    93,    22,    22,    22,
      22,    22,   119,   206,    39,   202,   156,   163,    76,   136,
     136,   136,   135,    76,    19,    94,    95,    96,    97,    93,
     141,    29,    19,   141,   141,    44,   136,    44,    93,    93,
      93,    93,    19,    48,    19,    19,   137,    45,   130,    48,
      44,   203,   202
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    67,    66,    66,    66,    66,    66,    68,
      68,    68,    68,    69,    69,    69,    71,    70,    70,    72,
      73,    75,    74,    74,    76,    76,    76,    76,    76,    76,
      76,    76,    77,    77,    77,    77,    77,    79,    78,    80,
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
     185,   185,   186,   186,   187,   188,   187,   190,   189,   189,
     192,   191,   193,   193,   193,   195,   194,   196,   194,   197,
     197,   198,   198,   198,   200,   201,   199,   199,   203,   202,
     202,   205,   206,   204
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     5,     4,     2,
       2,     0,     4,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,    10,     2,
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
       5,     7,     1,     3,     0,     0,     5,     0,     3,     0,
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
#line 60 "parser.y" /* yacc.c:1646  */
    {strcpy(identifierDefined,(yyvsp[0].ystr));}
#line 1660 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 82 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1666 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 87 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1672 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 91 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1678 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 95 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1684 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 100 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1690 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 101 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1696 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 102 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1702 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 103 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1708 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1714 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 112 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1720 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 113 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1726 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 114 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1732 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 115 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1738 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 121 "parser.y" /* yacc.c:1646  */
    { fprintf("%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1744 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1750 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1756 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 134 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1762 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 135 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1768 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 146 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1774 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 150 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1780 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 151 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1786 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 157 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1792 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 161 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1798 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 162 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1804 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 168 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1810 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 169 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1816 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 179 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1822 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 180 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1828 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 181 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1834 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 182 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1840 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 184 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1846 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 185 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1852 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 186 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1858 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 187 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1864 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 196 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1870 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 196 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1876 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 200 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1882 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 200 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1888 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 204 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1894 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 205 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1900 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 208 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1906 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 208 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1912 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1918 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1924 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 216 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1930 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 217 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1936 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 220 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1942 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 220 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1948 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 224 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1954 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 225 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1960 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 228 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1966 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 228 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1972 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 232 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 1978 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 233 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1984 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 245 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++;", (yyvsp[-3].ystr)); }
#line 1990 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 246 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--;", (yyvsp[-3].ystr)); }
#line 1996 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 250 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2002 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 251 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2008 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 256 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2014 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 271 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2020 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 275 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2026 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 280 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2032 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 289 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2038 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 290 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2044 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 291 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2050 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 292 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2056 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 292 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2062 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 297 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2068 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 301 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2074 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 301 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2080 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 307 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2086 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2092 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2098 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 321 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2104 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 322 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2110 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 322 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2116 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 322 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2122 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 323 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2128 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 323 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2134 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2140 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2146 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2152 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 328 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2158 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 328 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2164 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2170 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2176 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 333 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2182 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2188 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 337 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2194 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2200 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2206 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2212 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 342 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2218 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2224 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2230 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2236 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 351 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2242 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 355 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2248 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 356 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2254 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 360 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2260 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 361 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2266 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 362 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2272 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 363 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2278 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 365 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2284 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 366 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2290 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 367 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2296 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 368 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2302 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 369 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2308 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 370 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2314 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 186:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2320 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 372 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2326 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2332 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 374 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2338 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 375 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2344 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 376 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2350 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 377 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2356 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 378 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2362 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 379 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2368 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 380 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2374 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 380 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2380 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 384 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2386 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 408 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2392 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 412 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2398 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 220:
#line 419 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2404 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 419 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2410 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2416 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 226:
#line 429 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2422 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 430 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2428 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 228:
#line 430 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2434 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 439 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2440 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 232:
#line 440 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2446 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 233:
#line 441 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2452 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 445 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2458 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 445 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2464 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 236:
#line 445 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2470 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 450 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s;", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2476 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2482 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2488 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2494 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2498 "parser.tab.c" /* yacc.c:1646  */
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
