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
#line 21 "parser.y" /* yacc.c:355  */

    char * ystr;
    int   yint;
    float yfloat;

#line 191 "parser.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 208 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   506

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  167
/* YYNRULES -- Number of rules.  */
#define YYNRULES  278
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  532

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
       0,    43,    43,    50,    50,    51,    52,    53,    54,    55,
      56,    60,    60,    63,    64,    65,    66,    71,    72,    73,
      77,    77,    78,    82,    86,    90,    90,    91,    95,    96,
      97,    98,    99,   100,   101,   102,   106,   107,   108,   109,
     110,   111,   117,   121,   122,   125,   126,   130,   131,   137,
     141,   142,   142,   148,   152,   153,   153,   159,   159,   160,
     160,   166,   167,   168,   169,   170,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   176,   177,   183,   183,   187,
     187,   191,   191,   192,   195,   195,   199,   199,   203,   203,
     204,   207,   207,   211,   211,   212,   215,   215,   219,   219,
     220,   224,   225,   229,   230,   230,   231,   235,   235,   239,
     240,   244,   245,   249,   249,   253,   253,   254,   258,   262,
     262,   263,   263,   264,   264,   265,   265,   265,   266,   270,
     270,   274,   274,   280,   287,   288,   289,   293,   294,   294,
     294,   295,   295,   295,   296,   296,   297,   298,   298,   298,
     299,   300,   300,   301,   302,   303,   307,   307,   307,   307,
     311,   311,   312,   316,   316,   316,   316,   320,   320,   320,
     321,   325,   329,   330,   334,   334,   334,   338,   338,   339,
     339,   339,   339,   344,   344,   345,   345,   346,   346,   347,
     347,   348,   348,   352,   353,   356,   357,   358,   359,   360,
     361,   361,   362,   362,   363,   364,   364,   365,   365,   366,
     366,   367,   367,   368,   368,   369,   369,   370,   370,   371,
     371,   372,   372,   373,   373,   374,   374,   375,   375,   376,
     376,   380,   384,   385,   389,   389,   389,   393,   393,   394,
     394,   399,   399,   403,   403,   404,   407,   408,   408,   411,
     413,   413,   417,   417,   418,   424,   424,   428,   429,   430,
     434,   434,   435,   435,   439,   440,   444,   445,   446,   450,
     450,   450,   451,   455,   455,   456,   460,   460,   460
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
  "'&'", "$accept", "program", "declaration", "$@1", "instance_new_class",
  "$@2", "possible_declarations", "variable_types",
  "console_log_declarations", "$@3", "console_log_left_common",
  "console_log_right_common", "console_log_declaration_with_add", "$@4",
  "all_possible_variables", "all_possible_variables_types",
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
  "for_declaration", "$@51", "$@52", "for_options", "$@53", "$@54", "$@55",
  "$@56", "for_comparations", "$@57", "$@58", "$@59", "$@60", "$@61",
  "for_comparations_right_comparasion", "expressions", "$@62", "$@63",
  "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72",
  "$@73", "$@74", "$@75", "$@76", "assign_expression",
  "compare_type_and_value_expressions", "function_declarartion", "$@77",
  "$@78", "return_of_function_declaration", "$@79", "$@80",
  "call_a_function", "$@81", "call_a_function_one_more_values", "$@82",
  "function_values", "$@83", "function_parameters", "$@84",
  "function_parameters_one_or_more", "$@85", "class_declarations", "$@86",
  "class_attributes", "class_attribute_declaration", "$@87", "$@88",
  "initialize_class_attribute_value", "access_modifiers",
  "constructor_definition", "$@89", "$@90", "set_property_with_this",
  "$@91", "class_function_declarartion", "$@92", "$@93", YY_NULLPTR
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

#define YYPACT_NINF -418

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-418)))

#define YYTABLE_NINF -97

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     155,  -418,  -418,   -16,    36,    38,    50,    21,    56,    57,
      45,  -418,    72,    51,    82,    67,    68,     7,  -418,   125,
     155,  -418,    77,  -418,    34,    97,  -418,  -418,   155,  -418,
    -418,  -418,  -418,  -418,  -418,   112,  -418,  -418,  -418,  -418,
    -418,  -418,    96,    76,    98,   128,  -418,  -418,  -418,  -418,
     102,   106,  -418,  -418,   117,    18,  -418,   118,  -418,  -418,
    -418,  -418,    76,    76,   155,   155,    76,   144,  -418,  -418,
    -418,  -418,  -418,  -418,   295,   120,  -418,   119,    -2,  -418,
    -418,   135,   127,   122,  -418,   118,  -418,   148,    11,    58,
     152,   156,   159,   180,  -418,    76,  -418,   130,  -418,  -418,
     132,   137,  -418,  -418,  -418,  -418,   124,   121,    76,   139,
     141,   145,    80,  -418,  -418,  -418,  -418,   162,  -418,  -418,
    -418,  -418,   143,    12,   188,   158,   148,    76,   160,  -418,
    -418,  -418,  -418,    -7,   213,    11,   168,    11,   203,   204,
     196,  -418,   206,    76,   201,   177,    76,    76,  -418,    76,
    -418,    76,    76,    76,    76,    76,  -418,    76,  -418,    76,
     322,   179,   181,   208,  -418,   178,   176,   189,   182,  -418,
     214,   225,    -6,    13,    15,   205,   207,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,   229,  -418,  -418,   100,   232,
      11,  -418,   210,  -418,  -418,  -418,   235,   237,  -418,   247,
    -418,  -418,  -418,   322,   322,    76,   322,    76,   322,   322,
     322,   322,   322,    76,   322,    76,   322,  -418,   100,  -418,
      90,   248,   252,   250,   256,   253,   257,   254,   260,    -2,
     233,  -418,   265,   -29,  -418,   266,   230,   238,   270,   241,
     255,   283,   284,    19,  -418,   141,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,   285,   100,   155,   155,  -418,   282,   286,
     280,   267,   322,   322,   322,   322,  -418,     5,   264,   261,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,   297,
    -418,  -418,    -2,   271,  -418,  -418,   273,   274,  -418,  -418,
     279,  -418,  -418,  -418,  -418,   275,   277,  -418,  -418,  -418,
    -418,   298,   299,   141,  -418,  -418,   312,   314,    76,  -418,
     316,    86,   309,  -418,   327,  -418,   100,  -418,   326,   303,
     178,   176,   189,   182,  -418,   328,   337,  -418,  -418,  -418,
     311,   311,   347,  -418,   318,    -2,   319,   342,   299,  -418,
    -418,   276,   317,  -418,   321,   323,   330,   158,   331,   355,
    -418,  -418,   155,   357,   361,  -418,  -418,  -418,  -418,  -418,
      -2,   341,   333,   343,  -418,  -418,   376,   377,   348,   375,
     378,  -418,   367,   100,  -418,  -418,   380,   351,   374,   353,
      -1,   379,   155,   365,   368,   371,   362,   373,  -418,   141,
     385,  -418,  -418,   359,  -418,  -418,   178,   176,  -418,  -418,
    -418,  -418,  -418,    20,   364,   366,  -418,  -418,   395,  -418,
    -418,   397,  -418,  -418,   363,   369,  -418,   400,   401,  -418,
    -418,  -418,   382,  -418,  -418,  -418,   155,   155,    -9,   381,
     404,   406,   311,   402,   403,   405,   408,   409,  -418,  -418,
     158,  -418,   387,  -418,  -418,  -418,  -418,  -418,    -2,    -2,
      -2,  -418,    -2,   413,   414,   386,   388,   389,  -418,  -418,
    -418,   415,  -418,  -418,  -418,  -418,   311,  -418,   155,   399,
     417,   155,   155,   391,  -418,  -418,  -418,    -2,   392,  -418,
    -418,  -418,    27,  -418,    27,    27,   390,  -418,   311,   311,
     311,   311,  -418,   422,   393,  -418,   424,   425,  -418,  -418,
    -418,    27,  -418,  -418,  -418,    27,  -418,  -418,    16,   423,
    -418,  -418,  -418,  -418,  -418,   407,  -418,  -418,   280,  -418,
    -418,   428,   398,  -418,  -418,   410,   155,  -418,   430,   387,
    -418,  -418
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     136,    18,    19,     0,     0,     0,     0,     0,     0,     0,
       0,   151,     0,     0,     0,     0,     0,     0,    17,     0,
     136,     8,     0,     5,     0,     0,     7,     2,   136,   137,
     146,   153,     9,   150,    10,     0,    23,   156,   138,   141,
     163,   147,     0,     0,     0,     0,   174,   154,   155,   241,
       0,     0,     1,   135,     3,   103,    20,    27,   106,     6,
     134,   255,     0,     0,   136,   136,     0,     0,   229,   195,
     196,   197,   198,   199,     0,     0,   234,     0,     0,   101,
     102,     0,     0,     0,   104,    27,    25,     0,   259,     0,
       0,     0,     0,     0,   144,     0,   152,     0,   209,   211,
     200,   205,   213,   215,   217,   219,   221,   225,     0,     0,
     249,     0,    79,    31,    28,    29,    30,   245,    33,    34,
      35,    32,     0,     0,     0,     0,     0,     0,     0,    22,
     267,   266,   268,     0,   272,   259,     0,   259,     0,     0,
       0,   164,     0,     0,     0,   233,     0,     0,   202,     0,
     207,     0,     0,     0,     0,     0,   223,     0,   227,     0,
     204,     0,     0,     0,   175,     0,     0,     0,     0,   243,
       0,     0,     0,     0,     0,     0,     0,     4,    13,    14,
      15,    16,   107,   105,    21,     0,    24,   276,    41,     0,
     259,   257,     0,   258,   157,   139,     0,   170,   148,     0,
     230,   232,   231,   210,   212,     0,   201,     0,   206,   214,
     216,   218,   220,     0,   222,     0,   226,   133,    41,   235,
       0,    83,     0,    90,     0,    95,     0,   100,     0,     0,
       0,    11,     0,     0,    42,     0,     0,     0,     0,     0,
       0,     0,     0,   110,    26,   249,    36,    40,    37,    38,
      39,   262,   269,     0,    41,   136,   136,   142,     0,     0,
     128,     0,   203,   208,   224,   228,   250,     0,     0,     0,
     176,    81,    80,    88,    87,    93,    92,    98,    97,   246,
     244,   242,     0,     0,    45,    46,     0,     0,    50,    49,
       0,    54,    53,    57,    59,     0,     0,   108,   109,   111,
     112,     0,   265,   249,   256,   260,     0,     0,     0,   167,
       0,   125,     0,   145,   254,   239,    41,   236,     0,     0,
       0,     0,     0,     0,   247,     0,     0,    44,    51,    55,
      76,    76,     0,   113,     0,     0,     0,     0,   265,   158,
     140,     0,     0,   165,     0,     0,     0,     0,     0,     0,
     252,   251,   136,     0,     0,   179,    82,    89,    94,    99,
       0,     0,    77,     0,    47,    48,     0,     0,     0,     0,
       0,   118,   117,    41,   264,   263,     0,     0,   162,     0,
       0,     0,   136,     0,     0,     0,     0,     0,   149,   249,
       0,   237,   177,     0,   248,    12,     0,     0,    43,    96,
      52,    91,    56,     0,     0,     0,   115,   114,     0,   270,
     261,     0,   159,   143,     0,     0,   171,     0,     0,   121,
     119,   123,     0,   131,   253,   240,   136,   136,   191,     0,
       0,     0,    76,    61,    62,    63,    64,    65,    58,    60,
       0,   277,   275,   160,   173,   172,   168,   166,     0,     0,
       0,   126,     0,     0,     0,   183,   187,     0,   180,    78,
      85,     0,    66,    68,    70,    72,    76,   116,   136,     0,
       0,   136,   136,     0,   122,   120,   124,     0,     0,   238,
     178,   185,     0,   189,     0,     0,     0,    75,    76,    76,
      76,    76,    74,     0,     0,   271,     0,     0,   129,   127,
     132,     0,   194,   193,   184,     0,   188,   192,     0,     0,
      67,    69,    71,    73,   278,     0,   161,   169,   128,   186,
     190,     0,     0,   130,   181,     0,   136,   273,     0,   275,
     182,   274
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -114,   370,  -418,   -76,  -212,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -326,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -311,  -418,
    -418,  -418,  -418,  -418,  -300,  -418,    87,  -418,   131,  -418,
      91,  -418,   136,  -418,   -26,   -23,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,   -57,  -418,  -418,  -418,
    -418,  -418,  -417,  -418,  -418,  -418,  -418,   -20,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -358,   -59,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,     6,  -418,  -418,  -418,  -418,  -418,  -418,
    -418,  -418,  -418,  -418,  -418,  -269,  -418,  -234,  -418,  -418,
    -418,  -418,  -418,  -120,  -418,  -418,  -418,   126,  -418,  -418,
    -418,  -418,   -67,  -418,  -418,  -418,  -418
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    19,    20,    82,    21,   282,   177,    22,    23,    85,
      24,   129,    87,   127,   473,   251,   178,   234,   286,   363,
     179,   237,   366,   180,   240,   367,   181,   330,   331,   369,
     488,   489,   490,   491,   364,   396,   118,   165,   222,   320,
     365,   397,   119,   166,   224,   321,   120,   167,   226,   322,
     121,   168,   228,   323,    25,    73,   125,    58,   243,   297,
     298,   299,   372,   407,   440,   300,   312,   449,   448,   450,
     347,   477,   474,   518,   349,   452,    26,    27,    28,    63,
     256,    64,   308,   143,    66,   260,    43,    29,    62,   255,
     378,   412,   471,    30,    65,   197,   382,   259,   342,   472,
     381,   416,    31,    77,   220,   270,   427,   393,   486,   526,
     429,   482,   501,   484,   505,   457,   504,    74,   149,   205,
     151,   207,   146,   147,   152,   153,   154,   155,   157,   213,
     159,   215,    95,   108,   202,    32,   110,   267,   317,   426,
     352,    33,    78,   170,   229,   280,   360,   163,   314,   351,
     389,    34,    88,   134,   135,   338,   302,   336,   136,   190,
     303,   442,   470,   529,   137,   245,   468
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      53,    57,   117,    89,    90,   370,   266,    93,    60,   356,
     232,   301,   184,   325,   112,   191,   187,   193,   130,   131,
     132,   357,   172,   315,   173,   174,   175,   284,   285,   235,
      49,   238,   475,   476,    83,   295,   144,    35,   432,    39,
     188,   414,   305,   233,    91,    92,   415,    84,   296,   160,
     455,   456,   316,   113,   114,   115,   116,    50,    51,    36,
     499,    37,   236,   133,   239,   176,    50,    51,   185,   337,
     253,   244,    55,    38,    40,   433,   434,   435,   436,   502,
      41,    42,   138,   503,   199,   430,    55,   203,   204,    56,
     206,   394,   208,   209,   210,   211,   212,   431,   214,    68,
     216,    44,   183,    45,   353,    46,   461,    97,    98,    99,
     246,   247,   248,   249,   250,    47,    48,   100,   101,   102,
     103,   104,   105,   106,   107,    52,   506,   507,    55,    54,
      61,    69,    70,    71,    72,   -96,   268,   -86,   -91,   269,
     492,   344,   345,   519,   346,    59,   262,   520,   263,    67,
      75,    76,    79,   279,   264,   424,   265,    80,     1,     2,
       3,   408,   510,   511,   512,   513,    81,    94,    86,   109,
       4,   122,   128,   111,   123,   140,   139,   124,   141,   145,
       5,   148,     6,     7,   169,     8,   150,   158,     9,   156,
      10,   161,    11,   162,    12,    13,   171,   164,    14,    15,
      16,    97,    98,    99,   142,   182,   279,    17,   186,    18,
      55,   100,   101,   102,   103,   104,   105,   106,   107,   189,
     192,   194,   195,   196,   198,   200,   201,   217,   218,    97,
      98,    99,   219,   223,   221,   306,   307,   227,   230,   100,
     101,   102,   103,   104,   105,   106,   107,   225,   231,   341,
      97,    98,    99,   128,   241,   252,   242,   254,   257,   374,
     100,   101,   102,   103,   104,   105,   106,   107,   258,   272,
     271,   261,   273,   274,   276,   275,   277,   278,    97,    98,
      99,   281,   283,   287,   279,   288,   289,   290,   100,   101,
     102,   103,   104,   105,   106,   107,    97,    98,    99,   291,
     379,   293,   294,   292,   304,   309,   100,   101,   102,   103,
     104,   105,   106,   107,   311,   313,   318,   319,   310,   324,
     326,   327,   334,   328,   386,    97,    98,    99,   329,   333,
     332,   339,   390,   340,   343,   100,   101,   102,   103,   104,
     105,   106,   107,    96,    97,    98,    99,   348,   335,   350,
     354,   355,   361,   362,   100,   101,   102,   103,   104,   105,
     106,   107,   418,   368,   371,   373,   376,   375,   383,   380,
     384,    97,    98,    99,   388,   391,   478,   385,   387,   392,
     437,   100,   101,   102,   103,   104,   105,   106,   107,   395,
     -84,   398,   399,   401,   404,   403,   406,   405,   409,   410,
     411,   413,   419,   417,   425,   420,   453,   454,   421,   422,
     423,   428,   438,   441,   439,   443,   444,   467,   446,   451,
     447,   459,   445,   460,   462,   463,   469,   464,   494,   458,
     465,   466,   479,   480,   487,   481,   495,   483,    97,   498,
     500,   514,   508,   516,   517,   515,   524,   521,   493,   530,
     525,   496,   497,   358,   402,   126,   522,   400,   527,   359,
     509,   523,   531,   485,   377,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   528
};

static const yytype_int16 yycheck[] =
{
      20,    24,    78,    62,    63,   331,   218,    66,    28,   320,
      16,   245,   126,   282,    16,   135,    23,   137,     7,     8,
       9,   321,    10,    18,    12,    13,    14,    56,    57,    16,
      23,    16,   449,   450,    16,    16,    95,    53,    18,    18,
      47,    42,   254,    49,    64,    65,    47,    29,    29,   108,
      59,    60,    47,    55,    56,    57,    58,    50,    51,    23,
     477,    23,    49,    52,    49,    53,    50,    51,   127,   303,
     190,   185,    52,    23,    18,    55,    56,    57,    58,    52,
      23,    36,    24,    56,   143,   396,    52,   146,   147,    55,
     149,   360,   151,   152,   153,   154,   155,   397,   157,    23,
     159,    29,   125,    52,   316,    23,   432,    49,    50,    51,
      10,    11,    12,    13,    14,    48,    48,    59,    60,    61,
      62,    63,    64,    65,    66,     0,   484,   485,    52,    52,
      18,    55,    56,    57,    58,    55,    46,    57,    58,    49,
     466,    55,    56,   501,    58,    48,   205,   505,   207,    53,
      52,    23,    50,   229,   213,   389,   215,    51,     3,     4,
       5,   373,   488,   489,   490,   491,    49,    23,    50,    49,
      15,    36,    24,    54,    47,    19,    24,    55,    19,    49,
      25,    49,    27,    28,    22,    30,    49,    66,    33,    65,
      35,    52,    37,    52,    39,    40,    53,    52,    43,    44,
      45,    49,    50,    51,    24,    17,   282,    52,    48,    54,
      52,    59,    60,    61,    62,    63,    64,    65,    66,     6,
      52,    18,    18,    27,    18,    24,    49,    48,    47,    49,
      50,    51,    24,    57,    56,   255,   256,    55,    24,    59,
      60,    61,    62,    63,    64,    65,    66,    58,    23,   308,
      49,    50,    51,    24,    49,    23,    49,    47,    23,   335,
      59,    60,    61,    62,    63,    64,    65,    66,    31,    17,
      22,    24,    22,    17,    17,    22,    22,    17,    49,    50,
      51,    48,    17,    17,   360,    55,    48,    17,    59,    60,
      61,    62,    63,    64,    65,    66,    49,    50,    51,    58,
      24,    18,    18,    48,    19,    23,    59,    60,    61,    62,
      63,    64,    65,    66,    34,    48,    52,    56,    32,    22,
      49,    48,    24,    49,   347,    49,    50,    51,    49,    52,
      55,    19,   352,    19,    18,    59,    60,    61,    62,    63,
      64,    65,    66,    48,    49,    50,    51,    38,    49,    22,
      24,    48,    24,    16,    59,    60,    61,    62,    63,    64,
      65,    66,   382,    52,    17,    47,    24,    48,    47,    52,
      47,    49,    50,    51,    19,    18,   452,    47,    47,    18,
     403,    59,    60,    61,    62,    63,    64,    65,    66,    48,
      57,    48,    16,    16,    19,    47,    29,    19,    18,    48,
      26,    48,    37,    24,    19,    37,   426,   427,    37,    47,
      37,    52,    48,    18,    48,    18,    53,   440,    18,    37,
      19,    17,    53,    17,    22,    22,    39,    22,    29,    48,
      22,    22,    19,    19,    19,    49,    19,    49,    49,    48,
      48,    19,    52,    19,    19,    52,    18,    24,   468,    19,
      52,   471,   472,   322,   367,    85,    49,   366,    48,   323,
     486,   518,   529,   457,   338,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   526
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,    15,    25,    27,    28,    30,    33,
      35,    37,    39,    40,    43,    44,    45,    52,    54,    68,
      69,    71,    74,    75,    77,   121,   143,   144,   145,   154,
     160,   169,   202,   208,   218,    53,    23,    23,    23,    18,
      18,    23,    36,   153,    29,    52,    23,    48,    48,    23,
      50,    51,     0,   144,    52,    52,    55,   122,   124,    48,
     144,    18,   155,   146,   148,   161,   151,    53,    23,    55,
      56,    57,    58,   122,   184,    52,    23,   170,   209,    50,
      51,    49,    70,    16,    29,    76,    50,    79,   219,   184,
     184,   144,   144,   184,    23,   199,    48,    49,    50,    51,
      59,    60,    61,    62,    63,    64,    65,    66,   200,    49,
     203,    54,    16,    55,    56,    57,    58,    81,   103,   109,
     113,   117,    36,    47,    55,   123,    79,    80,    24,    78,
       7,     8,     9,    52,   220,   221,   225,   231,    24,    24,
      19,    19,    24,   150,   184,    49,   189,   190,    49,   185,
      49,   187,   191,   192,   193,   194,    65,   195,    66,   197,
     184,    52,    52,   214,    52,   104,   110,   114,   118,    22,
     210,    53,    10,    12,    13,    14,    53,    73,    83,    87,
      90,    93,    17,   122,    78,   184,    48,    23,    47,     6,
     226,   220,    52,   220,    18,    18,    27,   162,    18,   184,
      24,    49,   201,   184,   184,   186,   184,   188,   184,   184,
     184,   184,   184,   196,   184,   198,   184,    48,    47,    24,
     171,    56,   105,    57,   111,    58,   115,    55,   119,   211,
      24,    23,    16,    49,    84,    16,    49,    88,    16,    49,
      91,    49,    49,   125,    78,   232,    10,    11,    12,    13,
      14,    82,    23,   220,    47,   156,   147,    23,    31,   164,
     152,    24,   184,   184,   184,   184,    82,   204,    46,    49,
     172,    22,    17,    22,    17,    22,    17,    22,    17,    81,
     212,    48,    72,    17,    56,    57,    85,    17,    55,    48,
      17,    58,    48,    18,    18,    16,    29,   126,   127,   128,
     132,   214,   223,   227,    19,    82,   144,   144,   149,    23,
      32,    34,   133,    48,   215,    18,    47,   205,    52,    56,
     106,   112,   116,   120,    22,   212,    49,    48,    49,    49,
      94,    95,    55,    52,    24,    49,   224,   214,   222,    19,
      19,   184,   165,    18,    55,    56,    58,   137,    38,   141,
      22,   216,   207,    82,    24,    48,   105,   111,   115,   119,
     213,    24,    16,    86,   101,   107,    89,    92,    52,    96,
      96,    17,   129,    47,    81,    48,    24,   224,   157,    24,
      52,   167,   163,    47,    47,    47,   122,    47,    19,   217,
     144,    18,    18,   174,   212,    48,   102,   108,    48,    16,
     117,    16,   113,    47,    19,    19,    29,   130,    82,    18,
      48,    26,   158,    48,    42,    47,   168,    24,   144,    37,
      37,    37,    47,    37,   214,    19,   206,   173,    52,   177,
     105,   111,    18,    55,    56,    57,    58,   122,    48,    48,
     131,    18,   228,    18,    53,    53,    18,    19,   135,   134,
     136,    37,   142,   144,   144,    59,    60,   182,    48,    17,
      17,    96,    22,    22,    22,    22,    22,   122,   233,    39,
     229,   159,   166,    81,   139,   139,   139,   138,    81,    19,
      19,    49,   178,    49,   180,   200,   175,    19,    97,    98,
      99,   100,    96,   144,    29,    19,   144,   144,    48,   139,
      48,   179,    52,    56,   183,   181,   183,   183,    52,   121,
      96,    96,    96,    96,    19,    52,    19,    19,   140,   183,
     183,    24,    49,   133,    18,    52,   176,    48,   144,   230,
      19,   229
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    70,    69,    69,    69,    69,    69,    69,
      69,    72,    71,    73,    73,    73,    73,    74,    74,    74,
      76,    75,    75,    77,    78,    80,    79,    79,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    83,    84,    84,    85,    85,    86,    86,    87,
      88,    89,    88,    90,    91,    92,    91,    94,    93,    95,
      93,    96,    96,    96,    96,    96,    97,    96,    98,    96,
      99,    96,   100,    96,    96,    96,    96,   102,   101,   104,
     103,   106,   105,   105,   108,   107,   110,   109,   112,   111,
     111,   114,   113,   116,   115,   115,   118,   117,   120,   119,
     119,   121,   121,   122,   123,   122,   122,   125,   124,   126,
     126,   127,   127,   129,   128,   131,   130,   130,   132,   134,
     133,   135,   133,   136,   133,   137,   138,   133,   133,   140,
     139,   142,   141,   143,   144,   144,   144,   145,   146,   147,
     145,   148,   149,   145,   150,   145,   145,   151,   152,   145,
     145,   153,   145,   145,   145,   145,   155,   156,   157,   154,
     159,   158,   158,   161,   162,   163,   160,   165,   166,   164,
     164,   167,   168,   168,   170,   171,   169,   173,   172,   174,
     175,   176,   172,   178,   177,   179,   177,   180,   177,   181,
     177,   182,   177,   183,   183,   184,   184,   184,   184,   184,
     185,   184,   186,   184,   184,   187,   184,   188,   184,   189,
     184,   190,   184,   191,   184,   192,   184,   193,   184,   194,
     184,   195,   184,   196,   184,   197,   184,   198,   184,   199,
     184,   200,   201,   201,   203,   204,   202,   206,   205,   207,
     205,   209,   208,   211,   210,   210,   212,   213,   212,   214,
     215,   214,   217,   216,   216,   219,   218,   220,   220,   220,
     222,   221,   223,   221,   224,   224,   225,   225,   225,   227,
     228,   226,   226,   230,   229,   229,   232,   233,   231
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
       1,     0,     4,     1,     2,     2,     0,     0,     0,    11,
       0,     5,     0,     0,     0,     0,    12,     0,     0,     9,
       0,     2,     2,     2,     0,     0,     7,     0,     7,     0,
       0,     0,    13,     0,     4,     0,     5,     0,     4,     0,
       5,     0,     4,     1,     1,     1,     1,     1,     1,     1,
       0,     4,     0,     5,     3,     0,     4,     0,     5,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     5,     0,     4,     0,     5,     0,
       4,     3,     1,     0,     0,     0,     8,     0,     6,     0,
       4,     0,     7,     0,     3,     0,     1,     0,     4,     0,
       0,     5,     0,     3,     0,     0,     8,     2,     2,     0,
       0,     7,     0,     6,     2,     0,     1,     1,     1,     0,
       0,     9,     0,     0,     8,     0,     0,     0,    11
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
#line 1705 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 52 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 1711 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 60 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s = new %s(", (yyvsp[-1].ystr), (yyvsp[-4].ystr), (yyvsp[-1].ystr)); }
#line 1717 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 60 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1723 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 77 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 1729 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 82 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "System.out.println("); }
#line 1735 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 86 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 1741 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 90 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " + "); }
#line 1747 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 95 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yint));}
#line 1753 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 96 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%d", (yyvsp[0].yfloat));}
#line 1759 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 97 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1765 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 98 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"%s", (yyvsp[0].ystr));}
#line 1771 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 106 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "int"; }
#line 1777 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 107 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "String"; }
#line 1783 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 108 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "boolean"; }
#line 1789 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 109 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1795 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 110 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1801 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 111 "parser.y" /* yacc.c:1646  */
    { (yyval.ystr) = "void"; }
#line 1807 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 121 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1813 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 122 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1819 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 125 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"int %s = %d", identifierDefined, (yyvsp[0].yint));}
#line 1825 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 126 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"double %s = %f", identifierDefined, (yyvsp[0].yfloat));}
#line 1831 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 137 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1837 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 141 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1843 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 142 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"String[] %s =", identifierDefined);}
#line 1849 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 148 "parser.y" /* yacc.c:1646  */
    { fprintf(output,";");}
#line 1855 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 152 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean %s = %s", identifierDefined, (yyvsp[0].ystr));}
#line 1861 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 153 "parser.y" /* yacc.c:1646  */
    { fprintf(output,"boolean[] %s =", identifierDefined);}
#line 1867 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 159 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<Any, Object> %s = new HashMap<>(); \n", identifierDefined); }
#line 1873 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 160 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "HashMap<%s, Object> %s = new HashMap<>(); \n", (yyvsp[-2].ystr), identifierDefined); }
#line 1879 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 166 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1885 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 167 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yint)); }
#line 1891 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 168 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].yfloat)); }
#line 1897 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 169 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-2].ystr), (yyvsp[0].ystr)); }
#line 1903 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 171 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1909 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 172 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%d); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yint)); }
#line 1915 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 173 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%f); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].yfloat)); }
#line 1921 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 174 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.put(\"%s\",%s); \n", identifierDefined, (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 1927 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 183 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "int[] %s = {", identifierDefined); }
#line 1933 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 183 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1939 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 187 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1945 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 187 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1951 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 191 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d,", (yyvsp[-1].yint)); }
#line 1957 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 192 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 1963 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 195 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "double[] %s = {", identifierDefined); }
#line 1969 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 195 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1975 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 1981 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 199 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 1987 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 203 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[-1].yfloat)); }
#line 1993 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 204 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%f,", (yyvsp[0].yfloat)); }
#line 1999 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 207 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2005 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 207 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2011 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 211 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2017 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 212 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2023 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 215 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2029 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 215 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2035 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 219 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s,", (yyvsp[-1].ystr)); }
#line 2041 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 220 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2047 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 224 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s++", (yyvsp[-2].ystr)); }
#line 2053 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 225 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s--", (yyvsp[-2].ystr)); }
#line 2059 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 229 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2065 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 230 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.", (yyvsp[-1].ystr)); }
#line 2071 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 235 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s.%s", (yyvsp[-3].ystr), remove_quotes((yyvsp[-1].ystr))); }
#line 2077 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 249 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", (yyvsp[0].ystr)); }
#line 2083 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 253 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "."); }
#line 2089 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 258 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".%s", remove_quotes((yyvsp[-1].ystr))); }
#line 2095 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 262 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %d: return ", (yyvsp[-2].yint)); }
#line 2101 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 263 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2107 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 264 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case %s: return ", (yyvsp[-2].ystr)); }
#line 2113 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 265 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "case "); }
#line 2119 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 265 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ": return" ); }
#line 2125 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 270 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2131 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 274 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "default: return "); }
#line 2137 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 274 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2143 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 280 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2149 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 294 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2155 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 294 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2161 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 294 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2167 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 295 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "do {"); }
#line 2173 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 295 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "} while("); }
#line 2179 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 295 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2185 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 296 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "throw new %s(", (yyvsp[-1].ystr)); }
#line 2191 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 296 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2197 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 298 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "while("); }
#line 2203 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 298 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2209 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 298 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2215 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 300 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "return "); }
#line 2221 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 300 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2227 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 302 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "break;"); }
#line 2233 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 303 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "continue;"); }
#line 2239 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 307 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "if("); }
#line 2245 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 307 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2251 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 307 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2257 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 311 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "else{"); }
#line 2263 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 311 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2269 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "try {"); }
#line 2275 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2281 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "finally {"); }
#line 2287 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 316 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2293 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "catch ("); }
#line 2299 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2305 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 320 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2311 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 325 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-1].ystr)); }
#line 2317 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 329 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2323 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 330 "parser.y" /* yacc.c:1646  */
    {(yyval.ystr) = (yyvsp[0].ystr);}
#line 2329 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "for ("); }
#line 2335 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 334 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "let %s ", (yyvsp[0].ystr)); }
#line 2341 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 338 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "of %s){", (yyvsp[-2].ystr)); }
#line 2347 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 338 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2353 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 339 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "= %d;",(yyvsp[-1].yint)); }
#line 2359 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 339 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2365 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 339 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "){"); }
#line 2371 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 339 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2377 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 344 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s < ", (yyvsp[-1].ystr)); }
#line 2383 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 345 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s <=", (yyvsp[-2].ystr)); }
#line 2389 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 346 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s > ", (yyvsp[-1].ystr)); }
#line 2395 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 347 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s >=", (yyvsp[-2].ystr)); }
#line 2401 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 348 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2407 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 348 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2413 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 352 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2419 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 353 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2425 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 356 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2431 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 357 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yint)); }
#line 2437 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 358 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%d", (yyvsp[0].yfloat)); }
#line 2443 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 359 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s", (yyvsp[0].ystr)); }
#line 2449 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 361 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<"); }
#line 2455 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 362 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "<="); }
#line 2461 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 363 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2467 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 364 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">"); }
#line 2473 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 365 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ">="); }
#line 2479 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 366 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "+"); }
#line 2485 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 367 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "-"); }
#line 2491 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 213:
#line 368 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "*"); }
#line 2497 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 215:
#line 369 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "/"); }
#line 2503 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 217:
#line 370 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "^"); }
#line 2509 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 219:
#line 371 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%"); }
#line 2515 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 221:
#line 372 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "|"); }
#line 2521 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 223:
#line 373 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "||"); }
#line 2527 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 225:
#line 374 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&"); }
#line 2533 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 227:
#line 375 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "&&"); }
#line 2539 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 229:
#line 376 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "("); }
#line 2545 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 230:
#line 376 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2551 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 231:
#line 380 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ".equals("); }
#line 2557 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 234:
#line 389 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public static void %s(", (yyvsp[-1].ystr)); }
#line 2563 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 235:
#line 389 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ")"); }
#line 2569 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 237:
#line 393 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2575 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 238:
#line 393 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2581 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 239:
#line 394 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "{"); }
#line 2587 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 240:
#line 394 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2593 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 241:
#line 399 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2599 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 242:
#line 399 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ");"); }
#line 2605 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 243:
#line 403 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2611 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 247:
#line 408 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ","); }
#line 2617 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 250:
#line 413 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2623 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 252:
#line 417 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ", "); }
#line 2629 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 255:
#line 424 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public class %s {", (yyvsp[-1].ystr)); }
#line 2635 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 256:
#line 424 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2641 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 260:
#line 434 "parser.y" /* yacc.c:1646  */
    { fprintf(output, " %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2647 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 261:
#line 434 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2653 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 262:
#line 435 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public %s %s", (yyvsp[0].ystr), (yyvsp[-2].ystr)); }
#line 2659 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 263:
#line 435 "parser.y" /* yacc.c:1646  */
    { fprintf(output, ";"); }
#line 2665 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 266:
#line 444 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "public"); }
#line 2671 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 267:
#line 445 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "private"); }
#line 2677 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 268:
#line 446 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "protected"); }
#line 2683 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 269:
#line 450 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "Public constructor("); }
#line 2689 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 270:
#line 450 "parser.y" /* yacc.c:1646  */
    {fprintf(output, "){");}
#line 2695 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 271:
#line 450 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2701 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 273:
#line 455 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "this.%s = %s;", (yyvsp[-3].ystr), (yyvsp[-1].ystr)); }
#line 2707 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 276:
#line 460 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "%s(", (yyvsp[-1].ystr)); }
#line 2713 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 277:
#line 460 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "): %s {", (yyvsp[-1].ystr)); }
#line 2719 "parser.tab.c" /* yacc.c:1646  */
    break;

  case 278:
#line 460 "parser.y" /* yacc.c:1646  */
    { fprintf(output, "}"); }
#line 2725 "parser.tab.c" /* yacc.c:1646  */
    break;


#line 2729 "parser.tab.c" /* yacc.c:1646  */
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
#line 466 "parser.y" /* yacc.c:1906  */

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
