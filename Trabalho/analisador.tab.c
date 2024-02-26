/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
#line 1 "analisador.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include "hash.h"
    #include "analisador.tab.h"

    extern FILE *yyin;

    int yylex(void);
    void yyerror(char *);

    int linha = 1;

    Item *tokens = NULL;
    Item *usuario = NULL;
    Hash *h = NULL;
    Hash *simbolo = NULL;

    


/* Line 371 of yacc.c  */
#line 90 "analisador.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
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
   by #include "analisador.tab.h".  */
#ifndef YY_YY_ANALISADOR_TAB_H_INCLUDED
# define YY_YY_ANALISADOR_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTEIRO = 258,
     REAL = 259,
     LETRA = 260,
     ID = 261,
     BIB = 262,
     WHITESPACE = 263,
     ENTER = 264,
     ERRO = 265,
     ASPAS = 266,
     IF_TOK = 267,
     ELSE_TOK = 268,
     FOR_TOK = 269,
     WHILE_TOK = 270,
     CHAR_TOK = 271,
     INT_TOK = 272,
     FLOAT_TOK = 273,
     DOUBLE_TOK = 274,
     VOID_TOK = 275,
     MAIN_TOK = 276,
     PRINT_TOK = 277,
     SCAN_TOK = 278,
     RETURN_TOK = 279,
     IMPORT_TOK = 280,
     DEFINE_TOK = 281,
     MAIS_TOK = 282,
     MENOS_TOK = 283,
     DIV_TOK = 284,
     MULT_TOK = 285,
     MOD_TOK = 286,
     NEG_TOK = 287,
     OR_TOK = 288,
     XOR_TOK = 289,
     AND_TOK = 290,
     L_AND_TOK = 291,
     L_OR_TOK = 292,
     L_SHL_TOK = 293,
     L_SHR_TOK = 294,
     INC_TOK = 295,
     DEC_TOK = 296,
     ATR_TOK = 297,
     ATR_SM_TOK = 298,
     ATR_DC_TOK = 299,
     ATR_MT_TOK = 300,
     ATR_DV_TOK = 301,
     ATR_MD_TOK = 302,
     IG_TOK = 303,
     DIF_TOK = 304,
     MEN_TOK = 305,
     MAI_TOK = 306,
     MAI_IG_TOK = 307,
     MEN_IG_TOK = 308,
     VIRG_TOK = 309,
     PVIRG_TOK = 310,
     DPONT_TOK = 311,
     A_PAR_TOK = 312,
     F_PAR_TOK = 313,
     A_COL_TOK = 314,
     F_COL_TOK = 315,
     A_CHA_TOK = 316,
     F_CHA_TOK = 317
   };
#endif


#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{
/* Line 387 of yacc.c  */
#line 23 "analisador.y"

    int ival;     
    double dval;  
    char *sval;  


/* Line 387 of yacc.c  */
#line 202 "analisador.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */

#endif /* !YY_YY_ANALISADOR_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 230 "analisador.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

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
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  55
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   159

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  66
/* YYNRULES -- Number of states.  */
#define YYNSTATES  140

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     9,    11,    12,    15,    19,    21,
      23,    25,    27,    29,    31,    33,    35,    37,    45,    53,
      65,    77,    85,    89,    94,    97,   100,   104,   108,   112,
     116,   120,   125,   130,   134,   136,   145,   153,   155,   159,
     162,   165,   170,   174,   176,   178,   180,   182,   184,   186,
     190,   192,   194,   196,   200,   202,   204,   206,   210,   212,
     214,   216,   218,   220,   222,   224,   226
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      64,     0,    -1,    78,    64,    -1,    79,    64,    -1,    65,
      -1,    -1,    66,    55,    -1,    66,    55,    65,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    77,    -1,    87,    21,    57,
      58,    61,    65,    62,    -1,    12,    57,    73,    58,    61,
      65,    62,    -1,    12,    57,    73,    58,    61,    65,    62,
      13,    61,    65,    62,    -1,    14,    57,    70,    55,    73,
      55,    70,    58,    61,    65,    62,    -1,    15,    57,    73,
      58,    61,    65,    62,    -1,     6,    42,    73,    -1,    87,
       6,    42,    73,    -1,     6,    40,    -1,     6,    41,    -1,
       6,    43,    73,    -1,     6,    44,    73,    -1,     6,    45,
      73,    -1,     6,    46,    73,    -1,     6,    47,    73,    -1,
      23,    57,     6,    58,    -1,    22,    57,    73,    58,    -1,
      81,    80,    81,    -1,    81,    -1,    87,     6,    57,    75,
      58,    61,    65,    62,    -1,    87,     6,    57,    58,    61,
      65,    62,    -1,    76,    -1,    75,    54,    76,    -1,    87,
       6,    -1,    24,    73,    -1,    25,    50,     7,    51,    -1,
      26,     6,    73,    -1,    50,    -1,    48,    -1,    51,    -1,
      49,    -1,    52,    -1,    53,    -1,    81,    82,    83,    -1,
      83,    -1,    27,    -1,    28,    -1,    83,    84,    83,    -1,
      85,    -1,    30,    -1,    29,    -1,    57,    73,    58,    -1,
      86,    -1,     6,    -1,     3,    -1,     4,    -1,    17,    -1,
      19,    -1,    16,    -1,    18,    -1,    20,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,   103,   103,   104,   105,   106,   109,   110,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   124,   127,   128,
     131,   132,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   146,   149,   152,   153,   157,   158,   161,   162,   165,
     168,   171,   174,   177,   178,   179,   180,   181,   182,   185,
     186,   189,   190,   192,   193,   196,   197,   200,   201,   202,
     205,   206,   209,   210,   211,   212,   213
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEIRO", "REAL", "LETRA", "ID", "BIB",
  "WHITESPACE", "ENTER", "ERRO", "ASPAS", "IF_TOK", "ELSE_TOK", "FOR_TOK",
  "WHILE_TOK", "CHAR_TOK", "INT_TOK", "FLOAT_TOK", "DOUBLE_TOK",
  "VOID_TOK", "MAIN_TOK", "PRINT_TOK", "SCAN_TOK", "RETURN_TOK",
  "IMPORT_TOK", "DEFINE_TOK", "MAIS_TOK", "MENOS_TOK", "DIV_TOK",
  "MULT_TOK", "MOD_TOK", "NEG_TOK", "OR_TOK", "XOR_TOK", "AND_TOK",
  "L_AND_TOK", "L_OR_TOK", "L_SHL_TOK", "L_SHR_TOK", "INC_TOK", "DEC_TOK",
  "ATR_TOK", "ATR_SM_TOK", "ATR_DC_TOK", "ATR_MT_TOK", "ATR_DV_TOK",
  "ATR_MD_TOK", "IG_TOK", "DIF_TOK", "MEN_TOK", "MAI_TOK", "MAI_IG_TOK",
  "MEN_IG_TOK", "VIRG_TOK", "PVIRG_TOK", "DPONT_TOK", "A_PAR_TOK",
  "F_PAR_TOK", "A_COL_TOK", "F_COL_TOK", "A_CHA_TOK", "F_CHA_TOK",
  "$accept", "program", "seq", "dec", "main", "cond", "rep", "atr", "lei",
  "esc", "exp", "func", "lista_parametros", "parametro", "ret", "imp",
  "def", "comp", "exp_simples", "soma", "termo", "mult", "fator", "numero",
  "tipo", YY_NULL
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    65,    65,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    67,    68,    68,
      69,    69,    70,    70,    70,    70,    70,    70,    70,    70,
      70,    71,    72,    73,    73,    74,    74,    75,    75,    76,
      77,    78,    79,    80,    80,    80,    80,    80,    80,    81,
      81,    82,    82,    83,    83,    84,    84,    85,    85,    85,
      86,    86,    87,    87,    87,    87,    87
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     1,     0,     2,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     7,     7,    11,
      11,     7,     3,     4,     2,     2,     3,     3,     3,     3,
       3,     4,     4,     3,     1,     8,     7,     1,     3,     2,
       2,     4,     3,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     3,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       5,    60,    61,    59,     0,     0,     0,    64,    62,    65,
      63,    66,     0,     0,     0,     0,     0,     0,     0,     4,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
       5,     5,    34,    50,    54,    58,     0,    24,    25,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      59,    40,     0,     0,     0,     1,     6,     2,     3,    51,
      52,    44,    46,    43,    45,    47,    48,     0,     0,    56,
      55,     0,     0,     0,    22,    26,    27,    28,    29,    30,
       0,     0,     0,     0,     0,     0,     0,     0,    42,    57,
       7,    33,    49,    53,     0,     0,     0,     0,     0,     0,
       0,    32,    31,    41,    23,     0,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,    39,     0,     0,     0,
       0,     0,    38,     0,     0,    18,     0,    21,    36,     0,
      17,     0,     0,    35,     0,     0,     0,     0,    19,    20
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,   106,   107,    29,    30,    31,    67,    32,    68,
      33,    71,    34,    35,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -53
static const yytype_int8 yypact[] =
{
      73,   -53,   -53,    82,   -34,   -11,   -10,   -53,   -53,   -53,
     -53,   -53,    -9,     0,     2,    -1,    56,     2,    63,   -53,
       9,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
      73,    73,    -8,     6,   -53,   -53,     1,   -53,   -53,     2,
       2,     2,     2,     2,     2,     2,    88,     2,     2,    60,
     -53,   -53,    61,     2,    12,   -53,    97,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,     2,     2,   -53,
     -53,     2,   -25,    10,   -53,   -53,   -53,   -53,   -53,   -53,
      14,    82,    18,    72,    23,    28,    44,    59,   -53,   -53,
     -53,   -12,     6,     6,     2,    -7,    74,    57,     2,    89,
      75,   -53,   -53,   -53,   -53,    76,   -40,   -53,   127,    77,
      97,    79,    97,    97,    36,    78,   -53,    97,    80,    88,
      81,    83,   -53,    97,    84,   122,    86,   -53,   -53,    85,
     -53,    87,    90,   -53,    97,    97,    91,    93,   -53,   -53
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,     7,   -52,   -53,   -53,   -53,   -53,   -44,   -53,   -53,
     -14,   -53,   -53,    26,   -53,   -53,   -53,   -53,    92,   -53,
     -47,   -53,   -53,   -53,   -45
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      51,    83,    82,    54,    90,     1,     2,    72,    50,     7,
       8,     9,    10,    11,   114,    59,    60,    94,   115,    59,
      60,    92,    73,    45,    93,    74,    75,    76,    77,    78,
      79,    80,    95,    84,    85,    69,    70,    57,    58,    88,
      61,    62,    63,    64,    65,    66,    46,    47,    48,    52,
     108,   105,     7,     8,     9,    10,    11,    49,   118,    17,
     120,   121,    53,    55,    56,   124,    86,    96,    87,   108,
      89,   129,    97,    98,    83,   126,     1,     2,    99,     3,
     104,   100,   136,   137,   111,     4,   101,     5,     6,     7,
       8,     9,    10,    11,    81,    12,    13,    14,    15,    16,
       1,     2,   102,     3,     7,     8,     9,    10,    11,     4,
     103,     5,     6,     7,     8,     9,    10,    11,   110,    12,
      13,    14,    37,    38,    39,    40,    41,    42,    43,    44,
      17,    94,   109,   116,   119,   131,   112,   113,   117,   123,
     122,     0,   125,   127,   132,   128,   130,   133,   134,     0,
       0,   135,     0,   138,    17,   139,     0,     0,     0,    91
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
      14,    46,    46,    17,    56,     3,     4,     6,     6,    16,
      17,    18,    19,    20,    54,    27,    28,    42,    58,    27,
      28,    68,    21,    57,    71,    39,    40,    41,    42,    43,
      44,    45,    57,    47,    48,    29,    30,    30,    31,    53,
      48,    49,    50,    51,    52,    53,    57,    57,    57,    50,
      95,    58,    16,    17,    18,    19,    20,    57,   110,    57,
     112,   113,     6,     0,    55,   117,     6,    57,     7,   114,
      58,   123,    58,    55,   119,   119,     3,     4,     6,     6,
      94,    58,   134,   135,    98,    12,    58,    14,    15,    16,
      17,    18,    19,    20,     6,    22,    23,    24,    25,    26,
       3,     4,    58,     6,    16,    17,    18,    19,    20,    12,
      51,    14,    15,    16,    17,    18,    19,    20,    61,    22,
      23,    24,    40,    41,    42,    43,    44,    45,    46,    47,
      57,    42,    58,     6,    55,    13,    61,    61,    61,    61,
     114,    -1,    62,    62,    58,    62,    62,    62,    61,    -1,
      -1,    61,    -1,    62,    57,    62,    -1,    -1,    -1,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     6,    12,    14,    15,    16,    17,    18,
      19,    20,    22,    23,    24,    25,    26,    57,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    77,
      78,    79,    81,    83,    85,    86,    87,    40,    41,    42,
      43,    44,    45,    46,    47,    57,    57,    57,    57,    57,
       6,    73,    50,     6,    73,     0,    55,    64,    64,    27,
      28,    48,    49,    50,    51,    52,    53,    80,    82,    29,
      30,    84,     6,    21,    73,    73,    73,    73,    73,    73,
      73,     6,    70,    87,    73,    73,     6,     7,    73,    58,
      65,    81,    83,    83,    42,    57,    57,    58,    55,     6,
      58,    58,    58,    51,    73,    58,    75,    76,    87,    58,
      61,    73,    61,    61,    54,    58,     6,    61,    65,    55,
      65,    65,    76,    61,    65,    62,    70,    62,    62,    65,
      62,    13,    58,    62,    61,    61,    65,    65,    62,    62
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

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
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
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
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
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

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

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
      yychar = YYLEX;
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
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
/* Line 1792 of yacc.c  */
#line 105 "analisador.y"
    {printf("Sintaticamente Correto!\n");}
    break;

  case 5:
/* Line 1792 of yacc.c  */
#line 106 "analisador.y"
    {printf("Vazio\n");}
    break;

  case 6:
/* Line 1792 of yacc.c  */
#line 109 "analisador.y"
    {printf("Sequencia -> <declaracao> ;\n");}
    break;

  case 7:
/* Line 1792 of yacc.c  */
#line 110 "analisador.y"
    {printf("Sequencia -> <declaracao> ; <sequencia>\n");}
    break;

  case 8:
/* Line 1792 of yacc.c  */
#line 113 "analisador.y"
    {printf("Declaracao -> <main>\n");}
    break;

  case 9:
/* Line 1792 of yacc.c  */
#line 114 "analisador.y"
    {printf("Declaracao -> <condicional>\n");}
    break;

  case 10:
/* Line 1792 of yacc.c  */
#line 115 "analisador.y"
    {printf("Declaracao -> <repeticao>\n");}
    break;

  case 11:
/* Line 1792 of yacc.c  */
#line 116 "analisador.y"
    {printf("Declaracao -> <atribuicao>\n");}
    break;

  case 12:
/* Line 1792 of yacc.c  */
#line 117 "analisador.y"
    {printf("Declaracao -> <leitura>\n");}
    break;

  case 13:
/* Line 1792 of yacc.c  */
#line 118 "analisador.y"
    {printf("Declaracao -> <escrita>\n");}
    break;

  case 14:
/* Line 1792 of yacc.c  */
#line 119 "analisador.y"
    {printf("Declaracao -> <expressao>\n");}
    break;

  case 15:
/* Line 1792 of yacc.c  */
#line 120 "analisador.y"
    {printf("Declaracao -> <funcao>\n");}
    break;

  case 16:
/* Line 1792 of yacc.c  */
#line 121 "analisador.y"
    {printf("Declaracao -> <retorno>\n");}
    break;

  case 17:
/* Line 1792 of yacc.c  */
#line 124 "analisador.y"
    {printf("Main -> <tipo> main ( ) { <sequencia> }\n");}
    break;

  case 18:
/* Line 1792 of yacc.c  */
#line 127 "analisador.y"
    {printf("Condicional -> if ( <expressao> ) { <sequencia> }\n");}
    break;

  case 19:
/* Line 1792 of yacc.c  */
#line 128 "analisador.y"
    {printf("Condicional -> if ( <expressao> ) { <sequencia> } else { <sequencia> }\n");}
    break;

  case 20:
/* Line 1792 of yacc.c  */
#line 131 "analisador.y"
    {printf("Repeticao -> for ( <atribuicao> ; <expressao> ; <atribuicao> ) { <sequencia> }\n");}
    break;

  case 21:
/* Line 1792 of yacc.c  */
#line 132 "analisador.y"
    {printf("Repeticao -> while ( <expressao> ) { <sequencia> }\n");}
    break;

  case 22:
/* Line 1792 of yacc.c  */
#line 135 "analisador.y"
    {printf("Atribuicao -> %s = <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 23:
/* Line 1792 of yacc.c  */
#line 136 "analisador.y"
    {printf("Atribuicao -> <tipo> %s = <expressao>\n", (yyvsp[(2) - (4)].sval));}
    break;

  case 24:
/* Line 1792 of yacc.c  */
#line 137 "analisador.y"
    {printf("Atribuicao -> %s ++\n", (yyvsp[(1) - (2)].sval));}
    break;

  case 25:
/* Line 1792 of yacc.c  */
#line 138 "analisador.y"
    {printf("Atribuicao -> %s --\n", (yyvsp[(1) - (2)].sval));}
    break;

  case 26:
/* Line 1792 of yacc.c  */
#line 139 "analisador.y"
    {printf("Atribuicao -> %s += <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 27:
/* Line 1792 of yacc.c  */
#line 140 "analisador.y"
    {printf("Atribuicao -> %s -= <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 28:
/* Line 1792 of yacc.c  */
#line 141 "analisador.y"
    {printf("Atribuicao -> %s *= <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 29:
/* Line 1792 of yacc.c  */
#line 142 "analisador.y"
    {printf("Atribuicao -> %s /= <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 30:
/* Line 1792 of yacc.c  */
#line 143 "analisador.y"
    {printf("Atribuicao -> %s %= <expressao>\n", (yyvsp[(1) - (3)].sval));}
    break;

  case 31:
/* Line 1792 of yacc.c  */
#line 146 "analisador.y"
    {printf("Leitura -> scan ( %s )\n", (yyvsp[(3) - (4)].sval));}
    break;

  case 32:
/* Line 1792 of yacc.c  */
#line 149 "analisador.y"
    {printf("Escrita -> print ( <expressao> )\n");}
    break;

  case 33:
/* Line 1792 of yacc.c  */
#line 152 "analisador.y"
    {printf("Expressao -> <exp_simples> <comparacao> <exp_simples>\n");}
    break;

  case 34:
/* Line 1792 of yacc.c  */
#line 153 "analisador.y"
    {printf("Expressao -> <exp_simples>\n");}
    break;

  case 35:
/* Line 1792 of yacc.c  */
#line 157 "analisador.y"
    {printf("Funcao -> <tipo> %s ( <lista_parametros> ) { <sequencia> }\n", (yyvsp[(2) - (8)].sval));}
    break;

  case 36:
/* Line 1792 of yacc.c  */
#line 158 "analisador.y"
    {printf("Funcao -> <tipo> %s ( ) { <sequencia> }\n", (yyvsp[(2) - (7)].sval));}
    break;

  case 37:
/* Line 1792 of yacc.c  */
#line 161 "analisador.y"
    {printf("Lista_parametros -> <parametro>\n");}
    break;

  case 38:
/* Line 1792 of yacc.c  */
#line 162 "analisador.y"
    {printf("Lista_parametros -> <lista_parametros> , <parametro>\n");}
    break;

  case 39:
/* Line 1792 of yacc.c  */
#line 165 "analisador.y"
    {printf("Parametro -> <tipo> %s\n", (yyvsp[(2) - (2)].sval));}
    break;

  case 40:
/* Line 1792 of yacc.c  */
#line 168 "analisador.y"
    {printf("Retorno -> return <expressao>\n");}
    break;

  case 41:
/* Line 1792 of yacc.c  */
#line 171 "analisador.y"
    {printf("Importacao -> #import < %s > \n", (yyvsp[(3) - (4)].sval));}
    break;

  case 42:
/* Line 1792 of yacc.c  */
#line 174 "analisador.y"
    {printf("Definicao -> #define %s <expressao>\n", (yyvsp[(2) - (3)].sval));}
    break;

  case 43:
/* Line 1792 of yacc.c  */
#line 177 "analisador.y"
    {printf("Comparacao -> <\n");}
    break;

  case 44:
/* Line 1792 of yacc.c  */
#line 178 "analisador.y"
    {printf("Comparacao -> ==\n");}
    break;

  case 45:
/* Line 1792 of yacc.c  */
#line 179 "analisador.y"
    {printf("Comparacao -> >\n");}
    break;

  case 46:
/* Line 1792 of yacc.c  */
#line 180 "analisador.y"
    {printf("Comparacao -> !=\n");}
    break;

  case 47:
/* Line 1792 of yacc.c  */
#line 181 "analisador.y"
    {printf("Comparacao -> >=\n");}
    break;

  case 48:
/* Line 1792 of yacc.c  */
#line 182 "analisador.y"
    {printf("Comparacao -> <=\n");}
    break;

  case 49:
/* Line 1792 of yacc.c  */
#line 185 "analisador.y"
    {printf("Exp_simples -> <exp_simples> <soma> <termo>\n");}
    break;

  case 50:
/* Line 1792 of yacc.c  */
#line 186 "analisador.y"
    {printf("Exp_simples -> <termo>\n");}
    break;

  case 51:
/* Line 1792 of yacc.c  */
#line 189 "analisador.y"
    {printf("Soma -> +\n");}
    break;

  case 52:
/* Line 1792 of yacc.c  */
#line 190 "analisador.y"
    {printf("Menos -> -\n");}
    break;

  case 53:
/* Line 1792 of yacc.c  */
#line 192 "analisador.y"
    {printf("Termo -> <termo> <mult> <termo>\n");}
    break;

  case 54:
/* Line 1792 of yacc.c  */
#line 193 "analisador.y"
    {printf("Termo -> <fator>\n");}
    break;

  case 55:
/* Line 1792 of yacc.c  */
#line 196 "analisador.y"
    {printf("Mult -> *\n");}
    break;

  case 56:
/* Line 1792 of yacc.c  */
#line 197 "analisador.y"
    {printf("Mult -> /\n");}
    break;

  case 57:
/* Line 1792 of yacc.c  */
#line 200 "analisador.y"
    {printf("Fator -> ( <expressao> )\n");}
    break;

  case 58:
/* Line 1792 of yacc.c  */
#line 201 "analisador.y"
    {printf("Fator -> <numero>\n");}
    break;

  case 59:
/* Line 1792 of yacc.c  */
#line 202 "analisador.y"
    {printf("Fator -> %s\n", (yyvsp[(1) - (1)].sval));}
    break;

  case 60:
/* Line 1792 of yacc.c  */
#line 205 "analisador.y"
    {printf("Numero -> %d\n", (yyvsp[(1) - (1)].ival));}
    break;

  case 61:
/* Line 1792 of yacc.c  */
#line 206 "analisador.y"
    {printf("Numero -> %lf\n", (yyvsp[(1) - (1)].dval));}
    break;

  case 62:
/* Line 1792 of yacc.c  */
#line 209 "analisador.y"
    {printf("Tipo -> int\n");}
    break;

  case 63:
/* Line 1792 of yacc.c  */
#line 210 "analisador.y"
    {printf("Tipo -> double\n");}
    break;

  case 64:
/* Line 1792 of yacc.c  */
#line 211 "analisador.y"
    {printf("Tipo -> char\n");}
    break;

  case 65:
/* Line 1792 of yacc.c  */
#line 212 "analisador.y"
    {printf("Tipo -> float\n");}
    break;

  case 66:
/* Line 1792 of yacc.c  */
#line 213 "analisador.y"
    {printf("Tipo -> void\n");}
    break;


/* Line 1792 of yacc.c  */
#line 1927 "analisador.tab.c"
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

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

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
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


/* Line 2055 of yacc.c  */
#line 216 "analisador.y"


void yyerror(char *s){
    printf("erro na linha %d -> %s\n", linha, s);
}

int main(){	
    char str[50];
    int saida = 1;
    int opcao;
    FILE* arq;

    menu();
        
    do{
        printf("\n1 - Inserir arquivo de leitura\n");
        printf("2 - Imprimir tabela de tokens\n");
        printf("3 - Imprimir tabela de simbolos\n");
        printf("0 - Sair\n");

        scanf("%d", &opcao);
    
        switch(opcao) {
            case 1 : 
                h = limpaHash(h);
                simbolo = limpaHash(simbolo);
                h = criarHash(200);
                simbolo = criarHash(200);
                printf("\nDigite o nome do arquivo: ");
                scanf("%s", str);
                strcat(str, ".txt");
                arq = fopen(str, "r");
                while(arq == NULL){
                    
                    printf("Digite o nome correto do arquivo: "); 
                    scanf("%s", str);
                    strcat(str, ".txt");
                    arq = fopen(str, "r");
                }

                yyin = arq;
                yyparse(); 
                break;

            case 2 :
                printf("TABELA DE TOKENS\n"); 
                printf(" ______________________ _____________________ \n");
                imprimirHash(h);
                printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ \n");
                break;
            case 3 : 
                printf("TABELA DE SIMBOLOS\n"); 
                printf(" ______________________ _____________________ \n");
                imprimirHash(simbolo);
                printf(" ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ \n");
                break;
    
        }
        printf("Total de linhas: %d\n", linha);

    }while(opcao != 0);
    fclose(arq);
    yyparse();     
	return 0;
}





