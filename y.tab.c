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
#line 1 "analise_sinto_semantica.yacc" /* yacc.c:339  */

#include <stdio.h>
#include "tabela.h"
#include "tabela.c"
#include "arvore.h"
#include "arvore.c"
#include "codigo_intermediario.h"
#include "codigo_intermediario.c"
#include "tabela_funcoes.h"
#include "tabela_funcoes.c"


int yylex(void);
void yyerror(char *);

pilha_contexto *pilha;
tabela_func* funcs;


#line 86 "y.tab.c" /* yacc.c:339  */

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
   by #include "y.tab.h".  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    TYPE = 258,
    INT = 259,
    FLOAT = 260,
    GT = 261,
    LT = 262,
    GE = 263,
    LE = 264,
    EQ = 265,
    NE = 266,
    FUNC = 267,
    ID = 268,
    MAIN = 269,
    VAR = 270,
    IF = 271,
    ELSE = 272,
    FOR = 273,
    INTEIRO = 274,
    REAL = 275,
    AND = 276,
    OR = 277,
    NOT = 278,
    PRINT = 279,
    SCANF = 280,
    EXPR = 281,
    ATTR = 282,
    COND = 283,
    LOOP = 284,
    IO = 285,
    STMT = 286,
    STMTS = 287,
    DECL = 288,
    FUNC_CALL = 289,
    RETURN = 290
  };
#endif
/* Tokens.  */
#define TYPE 258
#define INT 259
#define FLOAT 260
#define GT 261
#define LT 262
#define GE 263
#define LE 264
#define EQ 265
#define NE 266
#define FUNC 267
#define ID 268
#define MAIN 269
#define VAR 270
#define IF 271
#define ELSE 272
#define FOR 273
#define INTEIRO 274
#define REAL 275
#define AND 276
#define OR 277
#define NOT 278
#define PRINT 279
#define SCANF 280
#define EXPR 281
#define ATTR 282
#define COND 283
#define LOOP 284
#define IO 285
#define STMT 286
#define STMTS 287
#define DECL 288
#define FUNC_CALL 289
#define RETURN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 22 "analise_sinto_semantica.yacc" /* yacc.c:355  */

    int dval;
    float fval;

#line 201 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 218 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   298

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  27
/* YYNRULES -- Number of rules.  */
#define YYNRULES  62
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  129

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   290

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    40,     2,     2,
      41,    42,    38,    36,    43,    37,     2,    39,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    46,
       2,    49,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    47,     2,    48,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    44,     2,    45,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    39,    39,    46,    50,    54,    58,    58,    89,    92,
      96,    97,   109,   126,   138,   144,   144,   156,   163,   167,
     171,   172,   173,   174,   175,   176,   177,   178,   182,   195,
     212,   230,   234,   266,   267,   271,   272,   288,   335,   340,
     347,   357,   358,   379,   387,   395,   403,   407,   410,   414,
     418,   419,   423,   427,   431,   435,   439,   446,   468,   473,
     482,   490,   499
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TYPE", "INT", "FLOAT", "GT", "LT", "GE",
  "LE", "EQ", "NE", "FUNC", "ID", "MAIN", "VAR", "IF", "ELSE", "FOR",
  "INTEIRO", "REAL", "AND", "OR", "NOT", "PRINT", "SCANF", "EXPR", "ATTR",
  "COND", "LOOP", "IO", "STMT", "STMTS", "DECL", "FUNC_CALL", "RETURN",
  "'+'", "'-'", "'*'", "'/'", "'%'", "'('", "')'", "','", "'{'", "'}'",
  "';'", "'['", "']'", "'='", "$accept", "program", "functions",
  "function", "$@1", "parameter_list", "parameter_list_not_void",
  "parameter", "blocoFunc", "retorno", "bloco", "$@2", "main", "stmts",
  "stmt", "decl", "declnattr", "variables", "function_call",
  "argument_list", "argument_list_not_void", "argument", "expr", "attr",
  "cond", "loop", "ioop", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,    43,    45,    42,    47,
      37,    40,    41,    44,   123,   125,    59,    91,    93,    61
};
# endif

#define YYPACT_NINF -44

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-44)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -44,    13,   -44,     2,    -9,   -44,   -44,   -25,   -20,   -44,
       0,    30,     9,    51,    14,    12,   -44,   -44,   -44,   -44,
      54,    30,   -44,    15,   -44,   221,   -44,   -44,     3,    47,
      20,    25,   -44,   -44,    26,    29,    31,    45,   -44,   -44,
     -44,   -44,   -44,    24,   -44,   211,   -44,   -44,   -44,   -44,
     254,    45,    -1,    45,    45,    45,    61,    62,   -44,   123,
      45,    45,    45,    45,    45,    45,    45,    45,    45,    45,
      45,    45,    45,    45,    45,    37,    34,    40,   -44,   211,
     -43,    65,   145,   167,   189,    43,    52,   -44,    41,   211,
     211,   211,   211,   211,   211,   211,   211,     1,     1,   275,
     275,   275,    82,   -44,    49,    45,   -44,    45,    48,     9,
       9,   -44,    53,    55,   -44,   -44,   -44,   -44,   102,    97,
      85,   -44,   -44,   -44,   -44,    59,     9,   -44,   -44
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     5,     1,     0,     0,     4,     2,     0,     0,     6,
       0,     9,     0,     0,     0,     8,    10,    15,    17,    12,
       0,     0,    19,     0,    11,     0,    19,     7,    31,     0,
       0,     0,    38,    39,     0,     0,     0,     0,    16,    23,
      18,    20,    21,    40,    41,    22,    24,    25,    26,    27,
       0,    34,     0,     0,     0,     0,     0,     0,    40,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,    35,    37,
       0,     0,     0,     0,     0,     0,     0,    47,     0,    51,
      52,    53,    54,    55,    56,    48,    49,    42,    43,    44,
      45,    46,     0,    13,     0,     0,    28,     0,     0,     0,
       0,    50,     0,     0,    57,    14,    32,    36,     0,     0,
      58,    60,    61,    62,    30,     0,     0,    29,    59
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -44,   -44,   -44,   -44,   -44,   -44,   -44,    86,   -44,   -44,
     -12,   -44,   -44,    80,   -44,   -44,   -44,    -5,   -44,   -44,
     -44,    10,   -36,   -44,   -44,   -44,   -44
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     3,     5,    11,    14,    15,    16,    27,    75,
      39,    22,     6,    25,    40,    41,    42,    58,    44,    76,
      77,    78,    45,    46,    47,    48,    49
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      18,    59,    80,   106,     7,     8,   107,    61,    62,    63,
      64,    65,    66,     2,     4,    79,     9,    82,    83,    84,
      43,    10,    67,    68,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,    71,
      72,    73,    12,    13,    51,    43,    81,    61,    62,    63,
      64,    65,    66,    17,    19,    21,    20,    23,    28,    26,
      52,    53,    67,    68,    32,    33,    54,    55,    34,    79,
      56,   118,    57,    60,    85,    86,   104,    69,    70,    71,
      72,    73,   103,   105,   108,   112,    37,   114,    61,    62,
      63,    64,    65,    66,   113,   116,   119,   120,   121,   122,
     125,   123,   126,    67,    68,   127,    50,    24,    61,    62,
      63,    64,    65,    66,   128,   117,     0,     0,    69,    70,
      71,    72,    73,    67,    68,     0,     0,     0,   115,    61,
      62,    63,    64,    65,    66,     0,     0,     0,    69,    70,
      71,    72,    73,     0,    67,    68,     0,     0,   124,     0,
       0,    61,    62,    63,    64,    65,    66,     0,     0,    69,
      70,    71,    72,    73,     0,    87,    67,    68,     0,     0,
       0,     0,     0,    61,    62,    63,    64,    65,    66,     0,
       0,    69,    70,    71,    72,    73,     0,   109,    67,    68,
       0,     0,     0,     0,     0,    61,    62,    63,    64,    65,
      66,     0,     0,    69,    70,    71,    72,    73,     0,   110,
      67,    68,     0,     0,     0,     0,     0,    61,    62,    63,
      64,    65,    66,     0,     0,    69,    70,    71,    72,    73,
       0,   111,    67,    68,    28,     0,    29,    30,     0,    31,
      32,    33,     0,     0,    34,    35,    36,    69,    70,    71,
      72,    73,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,     0,     0,    17,    38,    28,     0,    29,
      30,     0,    31,    32,    33,     0,     0,    34,    35,    36,
       0,    61,    62,    63,    64,    65,    66,     0,     0,    74,
       0,     0,     0,     0,     0,    37,    67,    68,    17
};

static const yytype_int8 yycheck[] =
{
      12,    37,     3,    46,    13,    14,    49,     6,     7,     8,
       9,    10,    11,     0,    12,    51,    41,    53,    54,    55,
      25,    41,    21,    22,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    38,
      39,    40,    42,    13,    41,    50,    47,     6,     7,     8,
       9,    10,    11,    44,     3,    43,    42,     3,    13,    44,
      13,    41,    21,    22,    19,    20,    41,    41,    23,   105,
      41,   107,    41,    49,    13,    13,    42,    36,    37,    38,
      39,    40,    45,    43,    19,    42,    41,    46,     6,     7,
       8,     9,    10,    11,    42,    46,    48,   109,   110,    46,
       3,    46,    17,    21,    22,    46,    26,    21,     6,     7,
       8,     9,    10,    11,   126,   105,    -1,    -1,    36,    37,
      38,    39,    40,    21,    22,    -1,    -1,    -1,    46,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    36,    37,
      38,    39,    40,    -1,    21,    22,    -1,    -1,    46,    -1,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    36,
      37,    38,    39,    40,    -1,    42,    21,    22,    -1,    -1,
      -1,    -1,    -1,     6,     7,     8,     9,    10,    11,    -1,
      -1,    36,    37,    38,    39,    40,    -1,    42,    21,    22,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    10,
      11,    -1,    -1,    36,    37,    38,    39,    40,    -1,    42,
      21,    22,    -1,    -1,    -1,    -1,    -1,     6,     7,     8,
       9,    10,    11,    -1,    -1,    36,    37,    38,    39,    40,
      -1,    42,    21,    22,    13,    -1,    15,    16,    -1,    18,
      19,    20,    -1,    -1,    23,    24,    25,    36,    37,    38,
      39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    44,    45,    13,    -1,    15,
      16,    -1,    18,    19,    20,    -1,    -1,    23,    24,    25,
      -1,     6,     7,     8,     9,    10,    11,    -1,    -1,    35,
      -1,    -1,    -1,    -1,    -1,    41,    21,    22,    44
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    51,     0,    52,    12,    53,    62,    13,    14,    41,
      41,    54,    42,    13,    55,    56,    57,    44,    60,     3,
      42,    43,    61,     3,    57,    63,    44,    58,    13,    15,
      16,    18,    19,    20,    23,    24,    25,    41,    45,    60,
      64,    65,    66,    67,    68,    72,    73,    74,    75,    76,
      63,    41,    13,    41,    41,    41,    41,    41,    67,    72,
      49,     6,     7,     8,     9,    10,    11,    21,    22,    36,
      37,    38,    39,    40,    35,    59,    69,    70,    71,    72,
       3,    47,    72,    72,    72,    13,    13,    42,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    45,    42,    43,    46,    49,    19,    42,
      42,    42,    42,    42,    46,    46,    46,    71,    72,    48,
      60,    60,    46,    46,    46,     3,    17,    46,    60
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    51,    52,    52,    54,    53,    55,    55,
      56,    56,    57,    58,    59,    61,    60,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    65,    65,
      66,    67,    68,    69,    69,    70,    70,    71,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    72,    72,    72,
      72,    72,    72,    72,    72,    72,    72,    73,    74,    74,
      75,    76,    76
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     0,     2,     0,     0,     8,     1,     0,
       1,     3,     2,     4,     3,     0,     4,     5,     2,     0,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     7,
       6,     1,     5,     1,     0,     1,     3,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     3,     3,
       4,     3,     3,     3,     3,     3,     3,     4,     5,     7,
       5,     5,     5
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
        case 2:
#line 39 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		print_funcoes(funcs);
		printf("\n---------------\nPrograma executado\n---------------\n\n");
		gerar_codigo_completo((no_arvore*) (yyvsp[-1].dval));
		gerar_codigo_completo((no_arvore*) (yyvsp[0].dval));
		printf("\n");
	}
#line 1422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 50 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore* no = criar_no_funcs((yyvsp[-1].dval), (yyvsp[0].dval));
		(yyval.dval) = (int) no;
	}
#line 1431 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 54 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1437 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 58 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		tabela* contexto = criar_contexto(topo_pilha(pilha));
		pilha = empilhar_contexto(pilha,contexto);
	}
#line 1446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 62 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
	 	no_arvore* no = (yyvsp[0].dval);
	 	no_arvore* retorno = no->dado.stmts->stmt;
	 	//printf("3 - bloco: %d,tipo: %d , expr %d\n",(int) no,retorno->tipo,(int) retorno);
	 	//exit(0);
	 	no_arvore* bloco = (yyvsp[0].dval);
	 	//t_expr* retorno = bloco->dado.stmts->stmt;

	 	printf("%d %d\n",retorno->dado.expr->tipo, (yyvsp[-1].dval));
	 	if(retorno->dado.expr->tipo != (yyvsp[-1].dval)){
	 		yyerror("Tipos de retorno e valor retornado são diferentes");
	 		exit(0);
	 	}

	 	retorno->dado.expr->tipo = RETURN;

		if(buscar_function(funcs, (yyvsp[-6].dval)) != NULL){
			yyerror("Funcao ja declarada!");
			exit(0);
		}
		no_func* func = criar_no_func((yyvsp[-6].dval), (yyvsp[-1].dval), (yyvsp[-3].dval), bloco);
		funcs = (tabela_func*) inserir_funcao(funcs,func);
		(yyval.dval) = (int) func;
	}
#line 1475 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 89 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		//printf("TUDO BOM, QUERIDA?\n");
	}
#line 1483 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 92 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1489 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 97 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		param* params = (yyvsp[-2].dval);
		param* aux = params;
		while(aux->prox!=NULL){
			aux=aux->prox;
		}
		aux->prox = (yyvsp[0].dval);
		(yyval.dval) = (int) params;
	}
#line 1503 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 109 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		param* params = NULL;
		params = inserir_params(params,(yyvsp[-1].dval),(yyvsp[0].dval));
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) (yyvsp[-1].dval));
		if(s!=NULL){
			yyerror("Nome de parâmetros duplicado");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) (yyvsp[-1].dval), (yyvsp[0].dval));
			inserir_simbolo(topo_pilha(pilha),s);
		}
		(yyval.dval) = (int) params;
	}
#line 1522 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 126 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore* no = criar_no_stmts((yyvsp[-2].dval), (yyvsp[-1].dval));
		t_expr* expr = (yyvsp[-1].dval);
		printf("2 - exp: %d, tipo: %d, bloco %d\n",(int) expr,((no_arvore*)(yyvsp[-1].dval))->tipo,(int) no);


		desempilhar_contexto(&pilha);
		(yyval.dval) = (int) no;
	}
#line 1536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 138 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		printf("1 - expr: %d\n",(yyvsp[-1].dval));
		(yyval.dval) = (yyvsp[-1].dval);
	}
#line 1545 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 144 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		tabela* contexto = criar_contexto(topo_pilha(pilha));
		pilha = empilhar_contexto(pilha,contexto);
	}
#line 1554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 148 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		//imprimir_contexto(topo_pilha(pilha));
		desempilhar_contexto(&pilha);
		(yyval.dval) = (int) (yyvsp[-1].dval);
	}
#line 1564 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 156 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore* no = criar_no_main((yyvsp[0].dval));
		(yyval.dval) = (int) no;
	}
#line 1573 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 163 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore* no = criar_no_stmts((yyvsp[-1].dval), (yyvsp[0].dval));
		(yyval.dval) = (int) no;
	}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 167 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    { (yyval.dval) = 0;}
#line 1588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 182 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) (yyvsp[-2].dval));
		if(s!=NULL){
			yyerror("Variável já declarada");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) (yyvsp[-2].dval), (yyvsp[-1].dval));
			inserir_simbolo(topo_pilha(pilha),s);
			no_arvore* no = criar_no_decl((yyvsp[-2].dval), (yyvsp[-1].dval));
			(yyval.dval) = (int) no;
		}
	}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 195 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s =localizar_simbolo(topo_pilha(pilha), (char*) (yyvsp[-5].dval));
		if(s!=NULL){
			yyerror("Variável já declarada");
			exit(0);
		}
		else{
			simbolo* s = criar_simbolo((char*) (yyvsp[-5].dval), (yyvsp[-4].dval));
			s->val.dval = (yyvsp[-3].dval);
			inserir_simbolo(topo_pilha(pilha),s);
			no_arvore* no = criar_no_decl((char*) (yyvsp[-5].dval), (yyvsp[-4].dval));
			(yyval.dval) = (int) no;
		}
	}
#line 1625 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 212 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s = criar_simbolo((char*) (yyvsp[-4].dval), (yyvsp[-3].dval));
		no_arvore* no = criar_no_atribuicao(s, (void*) (yyvsp[-1].dval));
		no_arvore* no_expr = (no_arvore*) (yyvsp[-1].dval);

		int tipo_atual = no_expr->dado.expr->tipo;

		if (tipo_atual > s->tipo){
			yyerror("Tipos incompatíveis.");
			exit(0);
		}else{
			inserir_simbolo(topo_pilha(pilha),s);
			(yyval.dval) = (int) no;
		}
	}
#line 1645 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 234 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_func* func = buscar_function(funcs,(yyvsp[-4].dval));
		if(func == NULL){
			yyerror("Função chamada não existe!\n");
			exit(0);
		}
		arg* args = (yyvsp[-2].dval);
		param* params = func->params;
		int len_args = count_args(args);
		int len_params = count_params(params);
		if(len_args != len_params){
			yyerror("Tamanho dos argumentos não bate com o dos parametros");
			exit(0);
		}
		arg* aux_a = args;
		param* aux_p = params;
		while(aux_a!=NULL){
			no_arvore* atual = aux_a->expr;
			if(atual->dado.expr->tipo != aux_p->tipo){
				yyerror("Tipos incompatíveis.");
				exit(0);
			}
			aux_a = aux_a->prox;
			aux_p = aux_p->prox;

		}
		no_arvore* no = criar_no_func_call(func,args,label_funcs(funcs,func));
		(yyval.dval) = (int) no;
	}
#line 1679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 267 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {(yyval.dval) = 0;}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 272 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		arg* args = (yyvsp[-2].dval);
		/*if(verificar_args(args,((arg*) $<dval>3)->id) == 0){
			yyerror("Argumento duplicado");
			exit(0);
		}*/
		arg* aux = args;
		while(aux->prox != NULL){
			aux= aux->prox;
		}
		aux->prox = (yyvsp[0].dval);
		(yyval.dval) = (int) args;
	}
#line 1703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 288 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		arg* args = NULL;

		no_arvore* no = (yyvsp[0].dval);
		char* op = no->dado.expr->op;
		if(op == '>'){
			//printf("WHAT I NEED: %d\n",GT);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='<'){
			//printf("WHAT I NEED: %d\n",LT);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='>='){
			//printf("WHAT I NEED: %d\n",GE);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='<='){
			//printf("WHAT I NEED: %d\n",LE);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='=='){
			//printf("WHAT I NEED: %d\n",EQ);
			yyerror("Tipo booleano!");
			exit(0);
		}
		if(op=='!='){
			//printf("WHAT I NEED: %d\n",NE);
			yyerror("Tipo booleano!");
			exit(0);
		}

		args = inserir_args(args,no);

		if(args==NULL){
			yyerror("Erro na chamada de função");
		}

		(yyval.dval) = (int) args;
	}
#line 1752 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 335 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao(INTEIRO, (void *) (yyvsp[0].dval), NULL);
		//printf("O inteiro tá aqui: %d\n",no->dado.expr->dir);
		(yyval.dval) = (int) no; 
	}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 340 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		float * nf = (float *) malloc (sizeof(float));
		*nf = (yyvsp[0].fval);
		//printf("Aqui foi: %f\n",*((float*) nf));
		no_arvore *no = criar_no_expressao(REAL, (int) nf, NULL);
		(yyval.dval) = (int) no; 
	}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 347 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo * s = localizar_simbolo(topo_pilha(pilha), (char *) (yyvsp[0].dval));
	 	if(s == NULL){
			yyerror("Identificador não declarado");
			exit(0);
	 	}else{
			no_arvore *no = criar_no_expressao(ID, s, NULL);
			(yyval.dval) = (int) no;
		}
	}
#line 1789 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 358 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore* expr1 = (no_arvore*) (yyvsp[-2].dval);
		no_arvore* expr2 = (no_arvore*) (yyvsp[0].dval);
		//printf("o bilhete tem de ser: %d\n",expr1->dado.expr->dir);
		//printf("o bilhete tem de ser: %f\n",*((float*) expr2->dado.expr->dir));
		//exit(0);
		int esq;
		int dir;
		esq = expr1->dado.expr->op;
		//printf("expr1 %d\n",esq);
		//printf("expr2\n");
		dir = expr2->dado.expr->op;
		//printf("%d %d %d %d\n",esq,INTEIRO,dir,REAL);
		no_arvore *no = criar_no_expressao('+', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval));
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		//printf("%d\n",no->dado.expr->tipo);
		(yyval.dval) = (int) no;
	}
#line 1815 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 379 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('-', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		(yyval.dval) = (int) no;
	}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 387 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('*', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		(yyval.dval) = (int) no;
	}
#line 1841 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 395 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('/', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		if(no->dado.expr->tipo == NULL){
			yyerror("Operações aritméticas apenas sobre valores de mesmo tipo");
			exit(0);
		}
		(yyval.dval) = (int) no;
	}
#line 1854 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 403 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('%', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1863 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 407 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		(yyval.dval) = (yyvsp[-1].dval);
	}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 410 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('&&', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1880 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 414 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('||', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1889 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 419 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('>', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 423 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('<', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 427 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('>=', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1916 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 431 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('<=', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1925 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 435 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('==', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 439 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *no = criar_no_expressao('!=', (void *) (yyvsp[-2].dval), (void *) (yyvsp[0].dval)); 
		(yyval.dval) = (int) no;
	}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 446 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s = localizar_simbolo(topo_pilha(pilha), (char*) (yyvsp[-3].dval));
		if(s==NULL){
			yyerror("Variável não instanciada.");
			exit(0);
		}else{
			no_arvore* no = criar_no_atribuicao(s, (void*) (yyvsp[-1].dval));
			no_arvore* no_expr = (no_arvore*) (yyvsp[-1].dval);

			int tipo_atual = no_expr->dado.expr->tipo;

			if (tipo_atual > s->tipo){
				yyerror("Tipos incompatíveis.");
				exit(0);
			}else{
				(yyval.dval) = (int) no;
			}
		}
	}
#line 1967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 468 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *noBloco = (no_arvore*) (yyvsp[0].dval);
		no_arvore *no = criar_no_condicao((t_expr *) (yyvsp[-2].dval), noBloco, NULL);
		(yyval.dval) = (int) no;
	}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 473 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *noBlocoIf = (no_arvore*) (yyvsp[-2].dval);
		no_arvore *noBlocoElse = (no_arvore*) (yyvsp[0].dval);
		no_arvore *no = criar_no_condicao((t_expr *) (yyvsp[-4].dval), noBlocoIf, noBlocoElse);
		(yyval.dval) = (int) no;
	}
#line 1988 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 482 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		no_arvore *noBloco = (no_arvore*) (yyvsp[0].dval);
		no_arvore *no = criar_no_loop((t_expr *) (yyvsp[-2].dval), noBloco);
		(yyval.dval) = (int) no;
	}
#line 1998 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 490 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s = localizar_simbolo(topo_pilha(pilha),(char*) (yyvsp[-2].dval));
		if(s==NULL){
			yyerror("Variável não declarada.");
			exit(0);
		}
		no_arvore *no = criar_no_io((char*)s->lexema, (int)PRINT);
		(yyval.dval) = (int) no;
	}
#line 2012 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 499 "analise_sinto_semantica.yacc" /* yacc.c:1646  */
    {
		simbolo* s = localizar_simbolo(topo_pilha(pilha),(char*) (yyvsp[-2].dval));
		if(s==NULL){
			yyerror("Variável não declarada.");
			exit(0);
		}
		no_arvore *no = criar_no_io((char*)s->lexema, (int)SCANF);
		(yyval.dval) = (int) no;
	}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2030 "y.tab.c" /* yacc.c:1646  */
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
#line 510 "analise_sinto_semantica.yacc" /* yacc.c:1906  */


void yyerror(char *s) {
	fprintf(stderr, "%s\n", s);
}

int main(void) {
	pilha = NULL;
	funcs = criar_tabela_funcoes();
	yyparse();
	return 0;
}
