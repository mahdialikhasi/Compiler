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

#line 67 "y.tab.c" /* yacc.c:339  */

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
/* "%code requires" blocks.  */
#line 1 "decaf.y" /* yacc.c:355  */

	#include <stdio.h>
	#include <stdbool.h>
	#include <string.h>
	
	int tabCount;
	typedef struct tnode{
		struct tnode ** childs;
		char *token;
		int size;
	} tnode;
	
	tnode * ProgramNode(char *token, tnode *child);
	tnode * merge(tnode *addchild, tnode *child);
	tnode * NewNodeWithLabel(char *token,tnode ** arr, int size);
	tnode * emptyNode();
	void printtree(tnode *tree);


#line 117 "y.tab.c" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_STRINGCONSTANT = 258,
    T_CHARCONSTANT = 259,
    T_BOOLEANCONSTANT = 260,
    T_INTCONSTANT = 261,
    T_DOUBLECONSTANT = 262,
    T_ID = 263,
    T_VOID = 264,
    T_STRINGTYPE = 265,
    T_THIS = 266,
    T_WHILE = 267,
    T_BREAK = 268,
    T_READINTEGER = 269,
    T_INTTYPE = 270,
    T_CLASS = 271,
    T_EXTENDS = 272,
    T_IF = 273,
    T_NEW = 274,
    T_READLINE = 275,
    T_DOUBLE = 276,
    T_INTERFACE = 277,
    T_IMPLEMENTS = 278,
    T_ELSE = 279,
    T_NEWARRAY = 280,
    T_BOOLTYPE = 281,
    T_NULL = 282,
    T_FOR = 283,
    T_RETURN = 284,
    T_PRINT = 285,
    T_CONTINUE = 286,
    T_EXTERN = 287,
    T_WHITESPACE = 288,
    T_COMMENT = 289,
    T_PLUS = 290,
    T_MINUS = 291,
    T_AND = 292,
    T_ASSIGN = 293,
    T_COMMA = 294,
    T_DIV = 295,
    T_DOT = 296,
    T_EQ = 297,
    T_GEQ = 298,
    T_GT = 299,
    T_LEFTSHIFT = 300,
    T_LEQ = 301,
    T_LPAREN = 302,
    T_RPAREN = 303,
    T_LT = 304,
    T_MOD = 305,
    T_MULT = 306,
    T_NEQ = 307,
    T_NOT = 308,
    T_OR = 309,
    T_RIGHTSHIFT = 310,
    T_SEMICOLON = 311,
    T_LCB = 312,
    T_RCB = 313,
    T_LSB = 314,
    T_RSB = 315,
    LOWER_THAN_ELSE = 316,
    UMINUS = 317
  };
#endif
/* Tokens.  */
#define T_STRINGCONSTANT 258
#define T_CHARCONSTANT 259
#define T_BOOLEANCONSTANT 260
#define T_INTCONSTANT 261
#define T_DOUBLECONSTANT 262
#define T_ID 263
#define T_VOID 264
#define T_STRINGTYPE 265
#define T_THIS 266
#define T_WHILE 267
#define T_BREAK 268
#define T_READINTEGER 269
#define T_INTTYPE 270
#define T_CLASS 271
#define T_EXTENDS 272
#define T_IF 273
#define T_NEW 274
#define T_READLINE 275
#define T_DOUBLE 276
#define T_INTERFACE 277
#define T_IMPLEMENTS 278
#define T_ELSE 279
#define T_NEWARRAY 280
#define T_BOOLTYPE 281
#define T_NULL 282
#define T_FOR 283
#define T_RETURN 284
#define T_PRINT 285
#define T_CONTINUE 286
#define T_EXTERN 287
#define T_WHITESPACE 288
#define T_COMMENT 289
#define T_PLUS 290
#define T_MINUS 291
#define T_AND 292
#define T_ASSIGN 293
#define T_COMMA 294
#define T_DIV 295
#define T_DOT 296
#define T_EQ 297
#define T_GEQ 298
#define T_GT 299
#define T_LEFTSHIFT 300
#define T_LEQ 301
#define T_LPAREN 302
#define T_RPAREN 303
#define T_LT 304
#define T_MOD 305
#define T_MULT 306
#define T_NEQ 307
#define T_NOT 308
#define T_OR 309
#define T_RIGHTSHIFT 310
#define T_SEMICOLON 311
#define T_LCB 312
#define T_RCB 313
#define T_LSB 314
#define T_RSB 315
#define LOWER_THAN_ELSE 316
#define UMINUS 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "decaf.y" /* yacc.c:355  */

    int rvalue;  				//real values
    int bvalue; 				//boolean values
    char *svalue;				//string values
    double dvalue; 				//double values
    char *name; 				// +1 for terminating null

    tnode * NTnode;

#line 263 "y.tab.c" /* yacc.c:355  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 280 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  20
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   476

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  99
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  198

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   317

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    65,    65,    71,    73,    75,    77,    80,    81,    83,
      86,    87,    89,    94,    95,    97,    98,    99,   100,   101,
     103,   113,   125,   126,   128,   141,   144,   146,   147,   149,
     153,   156,   158,   161,   162,   164,   169,   176,   185,   186,
     188,   192,   194,   196,   198,   200,   202,   204,   206,   209,
     210,   212,   213,   219,   224,   229,   231,   233,   235,   236,
     238,   240,   241,   243,   245,   246,   247,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   265,   267,   268,   270,   271,   273,   278,   282,
     287,   290,   294,   295,   297,   298,   299,   300,   301,   302
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_STRINGCONSTANT", "T_CHARCONSTANT",
  "T_BOOLEANCONSTANT", "T_INTCONSTANT", "T_DOUBLECONSTANT", "T_ID",
  "T_VOID", "T_STRINGTYPE", "T_THIS", "T_WHILE", "T_BREAK",
  "T_READINTEGER", "T_INTTYPE", "T_CLASS", "T_EXTENDS", "T_IF", "T_NEW",
  "T_READLINE", "T_DOUBLE", "T_INTERFACE", "T_IMPLEMENTS", "T_ELSE",
  "T_NEWARRAY", "T_BOOLTYPE", "T_NULL", "T_FOR", "T_RETURN", "T_PRINT",
  "T_CONTINUE", "T_EXTERN", "T_WHITESPACE", "T_COMMENT", "T_PLUS",
  "T_MINUS", "T_AND", "T_ASSIGN", "T_COMMA", "T_DIV", "T_DOT", "T_EQ",
  "T_GEQ", "T_GT", "T_LEFTSHIFT", "T_LEQ", "T_LPAREN", "T_RPAREN", "T_LT",
  "T_MOD", "T_MULT", "T_NEQ", "T_NOT", "T_OR", "T_RIGHTSHIFT",
  "T_SEMICOLON", "T_LCB", "T_RCB", "T_LSB", "T_RSB", "LOWER_THAN_ELSE",
  "UMINUS", "$accept", "program", "Decl", "MDecl", "VariableDecl",
  "VariableDeclStar", "Variable", "MVariable", "Type", "FunctionDecl",
  "Formals", "ClassDecl", "EFirst", "IFirst", "MImplement", "Field",
  "FieldStar", "InterfaceDecl", "Prototype", "PrototypeStar", "StmtBlock",
  "Stmt", "StmtStar", "IfStmt", "WhileStmt", "ForStmt", "ReturnStmt",
  "BreakStmt", "PrintStmt", "Expr", "MExpr", "ExprFirst", "LValue", "Call",
  "Actuals", "Constant", YY_NULLPTR
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317
};
# endif

#define YYPACT_NINF -162

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-162)))

#define YYTABLE_NINF -87

#define yytable_value_is_error(Yytable_value) \
  (!!((Yytable_value) == (-87)))

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     109,     5,  -162,  -162,     8,  -162,    13,  -162,    26,   109,
    -162,  -162,   -16,    -6,  -162,  -162,  -162,    -8,    25,   -14,
    -162,  -162,  -162,    -3,   -11,   160,    42,    40,    10,   160,
    -162,    27,  -162,    -2,    17,  -162,    63,    33,  -162,    74,
       3,    10,    38,    43,   160,  -162,    41,    58,   159,    60,
      68,  -162,  -162,    41,  -162,   160,  -162,    40,  -162,  -162,
     159,    47,   160,   160,  -162,   160,    81,  -162,  -162,  -162,
      75,    78,  -162,  -162,  -162,  -162,  -162,  -162,    69,  -162,
      80,    72,    85,    86,    89,    98,    99,  -162,   104,   191,
     105,   191,   191,   191,  -162,    81,    95,  -162,  -162,  -162,
    -162,  -162,  -162,   357,   101,   120,  -162,  -162,   103,   106,
     191,   191,  -162,   112,   191,   163,   119,   191,   191,  -162,
     191,   -36,   226,   -36,  -162,  -162,   191,   191,   191,   191,
     165,   191,   191,   191,   191,   191,   191,   191,   191,   191,
     191,  -162,   191,  -162,  -162,   246,  -162,   128,   271,  -162,
     291,   129,  -162,   312,   123,   134,  -162,    62,    62,   179,
     -36,   140,   397,   417,   417,   417,   417,   -36,   -36,   397,
     377,   205,   357,   191,  -162,   136,   136,  -162,   160,   191,
     127,   191,  -162,  -162,  -162,   164,   -41,   332,  -162,   142,
     136,  -162,   191,  -162,  -162,   143,   136,  -162
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,    18,    16,     0,    15,     0,    17,     0,     8,
       2,     3,     0,     0,     4,     5,     6,     0,    26,     0,
       1,     7,     9,    12,     0,    23,     0,    28,    39,    23,
      19,    14,    22,     0,     0,    25,     0,     0,    27,     0,
       0,    39,     0,     0,     0,    12,     0,    30,    34,     0,
       0,    38,    35,     0,    13,    11,    21,     0,    31,    32,
      34,     0,    23,    23,    20,    11,    50,    29,    33,    24,
       0,     0,    10,    97,    98,    96,    94,    95,    87,    61,
       0,     0,     0,     0,     0,     0,     0,    99,     0,    86,
       0,     0,     0,     0,    48,    50,     0,    42,    43,    44,
      46,    45,    47,    85,     0,    60,    62,    59,     0,     0,
       0,     0,    56,     0,     0,     0,     0,     0,    86,    55,
       0,    69,     0,    78,    49,    40,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,     0,    37,    36,    84,    92,     0,     0,    79,
       0,     0,    80,     0,     0,     0,    63,    64,    65,    76,
      67,    88,    74,    72,    73,    71,    70,    68,    66,    75,
      77,     0,    58,     0,    90,    86,    86,    81,     0,     0,
       0,     0,    89,    83,    53,    51,     0,     0,    57,     0,
      86,    82,     0,    91,    52,     0,    86,    54
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -162,  -162,  -162,   183,    -1,   135,   -17,   157,     0,   -38,
     -25,  -162,  -162,  -162,   146,  -162,   144,  -162,  -162,   166,
     -29,  -161,   111,  -162,  -162,  -162,  -162,  -162,  -162,   -59,
    -117,   -88,  -162,  -162,    28,  -162
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     8,     9,    10,    11,    66,    12,    32,    33,    14,
      34,    15,    27,    37,    38,    60,    61,    16,    41,    42,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     146,   104,   105,   106,   147,   107
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      13,   119,    23,   155,    43,   130,    45,   191,    31,    13,
      59,    50,    31,    17,   184,   185,    18,    56,    24,    39,
       2,    19,    59,   140,    64,     3,    20,    31,    40,   194,
     154,     5,   121,   122,   123,   197,     7,    70,    71,    25,
      22,    40,    26,    28,    29,    31,    31,    58,    13,    30,
      35,   145,   148,    24,    65,   150,   183,    24,   153,    58,
      13,   145,    24,    36,    65,    46,    44,   157,   158,   159,
     160,    47,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,    49,   172,    73,    74,    75,    76,    77,    78,
      48,    53,    79,    80,    81,    82,    52,    57,    55,    83,
      84,    85,   129,   130,   195,    69,    86,    62,    87,    88,
      89,    90,   136,   137,   145,    63,   110,    91,     1,     2,
     187,   140,   145,   108,     3,     4,   109,   111,   112,    92,
       5,     6,   113,   114,    93,     7,   115,   -86,    55,    73,
      74,    75,    76,    77,    78,   116,   117,    79,    80,    81,
      82,   118,   120,   125,    83,    84,    85,   141,   142,   143,
     149,    86,   144,    87,    88,    89,    90,   152,     1,     2,
       2,   151,    91,   161,     3,     3,   174,   177,   186,   179,
       5,     5,   180,   188,    92,     7,     7,   181,   190,    93,
     193,   196,    21,    55,    73,    74,    75,    76,    77,    78,
      72,    54,    79,    67,    68,    82,   124,    51,     0,   189,
      84,    85,     0,     0,   126,   127,    86,     0,    87,   129,
     130,   131,   132,   133,     0,   134,     0,    91,   135,   136,
     137,   138,     0,     0,     0,     0,     0,     0,   140,    92,
     126,   127,   128,     0,    93,   129,   130,   131,   132,   133,
       0,   134,     0,     0,   135,   136,   137,   138,     0,   139,
       0,   126,   127,   128,   140,   182,   129,   130,   131,   132,
     133,     0,   134,   156,     0,   135,   136,   137,   138,     0,
     139,   126,   127,   128,     0,   140,   129,   130,   131,   132,
     133,     0,   134,     0,     0,   135,   136,   137,   138,     0,
     139,     0,   173,     0,     0,   140,   126,   127,   128,     0,
       0,   129,   130,   131,   132,   133,     0,   134,     0,   175,
     135,   136,   137,   138,     0,   139,   126,   127,   128,     0,
     140,   129,   130,   131,   132,   133,     0,   134,     0,   176,
     135,   136,   137,   138,     0,   139,     0,   126,   127,   128,
     140,   178,   129,   130,   131,   132,   133,     0,   134,     0,
       0,   135,   136,   137,   138,     0,   139,   126,   127,   128,
       0,   140,   129,   130,   131,   132,   133,     0,   134,     0,
       0,   135,   136,   137,   138,     0,   139,     0,   192,     0,
       0,   140,   126,   127,   128,     0,     0,   129,   130,   131,
     132,   133,     0,   134,     0,     0,   135,   136,   137,   138,
       0,   139,   126,   127,   128,     0,   140,   129,   130,   131,
     132,   133,     0,   134,     0,     0,   135,   136,   137,   138,
       0,     0,   126,   127,     0,     0,   140,   129,   130,   -87,
     132,   133,     0,   134,     0,     0,   135,   136,   137,   -87,
       0,     0,   126,   127,     0,     0,   140,   129,   130,     0,
     -87,   -87,     0,   -87,     0,     0,   -87,   136,   137,     0,
       0,     0,     0,     0,     0,     0,   140
};

static const yytype_int16 yycheck[] =
{
       0,    89,     8,   120,    29,    41,     8,    48,    25,     9,
      48,     8,    29,     8,   175,   176,     8,    46,    59,     9,
      10,     8,    60,    59,    53,    15,     0,    44,    28,   190,
     118,    21,    91,    92,    93,   196,    26,    62,    63,    47,
      56,    41,    17,    57,    47,    62,    63,    48,    48,    60,
       8,   110,   111,    59,    55,   114,   173,    59,   117,    60,
      60,   120,    59,    23,    65,    48,    39,   126,   127,   128,
     129,     8,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,     8,   142,     3,     4,     5,     6,     7,     8,
      57,    48,    11,    12,    13,    14,    58,    39,    57,    18,
      19,    20,    40,    41,   192,    58,    25,    47,    27,    28,
      29,    30,    50,    51,   173,    47,    47,    36,     9,    10,
     179,    59,   181,    48,    15,    16,    48,    47,    56,    48,
      21,    22,    47,    47,    53,    26,    47,    56,    57,     3,
       4,     5,     6,     7,     8,    47,    47,    11,    12,    13,
      14,    47,    47,    58,    18,    19,    20,    56,    38,    56,
      48,    25,    56,    27,    28,    29,    30,    48,     9,    10,
      10,     8,    36,     8,    15,    15,    48,    48,   178,    56,
      21,    21,    48,    56,    48,    26,    26,    47,    24,    53,
      48,    48,     9,    57,     3,     4,     5,     6,     7,     8,
      65,    44,    11,    57,    60,    14,    95,    41,    -1,   181,
      19,    20,    -1,    -1,    35,    36,    25,    -1,    27,    40,
      41,    42,    43,    44,    -1,    46,    -1,    36,    49,    50,
      51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    59,    48,
      35,    36,    37,    -1,    53,    40,    41,    42,    43,    44,
      -1,    46,    -1,    -1,    49,    50,    51,    52,    -1,    54,
      -1,    35,    36,    37,    59,    60,    40,    41,    42,    43,
      44,    -1,    46,    47,    -1,    49,    50,    51,    52,    -1,
      54,    35,    36,    37,    -1,    59,    40,    41,    42,    43,
      44,    -1,    46,    -1,    -1,    49,    50,    51,    52,    -1,
      54,    -1,    56,    -1,    -1,    59,    35,    36,    37,    -1,
      -1,    40,    41,    42,    43,    44,    -1,    46,    -1,    48,
      49,    50,    51,    52,    -1,    54,    35,    36,    37,    -1,
      59,    40,    41,    42,    43,    44,    -1,    46,    -1,    48,
      49,    50,    51,    52,    -1,    54,    -1,    35,    36,    37,
      59,    39,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    -1,    54,    35,    36,    37,
      -1,    59,    40,    41,    42,    43,    44,    -1,    46,    -1,
      -1,    49,    50,    51,    52,    -1,    54,    -1,    56,    -1,
      -1,    59,    35,    36,    37,    -1,    -1,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      -1,    54,    35,    36,    37,    -1,    59,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    35,    36,    -1,    -1,    59,    40,    41,    42,
      43,    44,    -1,    46,    -1,    -1,    49,    50,    51,    52,
      -1,    -1,    35,    36,    -1,    -1,    59,    40,    41,    -1,
      43,    44,    -1,    46,    -1,    -1,    49,    50,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    59
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     9,    10,    15,    16,    21,    22,    26,    64,    65,
      66,    67,    69,    71,    72,    74,    80,     8,     8,     8,
       0,    66,    56,     8,    59,    47,    17,    75,    57,    47,
      60,    69,    70,    71,    73,     8,    23,    76,    77,     9,
      71,    81,    82,    73,    39,     8,    48,     8,    57,     8,
       8,    82,    58,    48,    70,    57,    83,    39,    67,    72,
      78,    79,    47,    47,    83,    67,    68,    77,    79,    58,
      73,    73,    68,     3,     4,     5,     6,     7,     8,    11,
      12,    13,    14,    18,    19,    20,    25,    27,    28,    29,
      30,    36,    48,    53,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    94,    95,    96,    98,    48,    48,
      47,    47,    56,    47,    47,    47,    47,    47,    47,    94,
      47,    92,    92,    92,    85,    58,    35,    36,    37,    40,
      41,    42,    43,    44,    46,    49,    50,    51,    52,    54,
      59,    56,    38,    56,    56,    92,    93,    97,    92,    48,
      92,     8,    48,    92,    94,    93,    47,    92,    92,    92,
      92,     8,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    56,    48,    48,    48,    48,    39,    56,
      48,    47,    60,    93,    84,    84,    71,    92,    56,    97,
      24,    48,    56,    48,    84,    94,    48,    84
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    65,    65,    65,    65,    66,    66,    67,
      68,    68,    69,    70,    70,    71,    71,    71,    71,    71,
      72,    72,    73,    73,    74,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    81,    81,    82,    82,
      83,    84,    84,    84,    84,    84,    84,    84,    84,    85,
      85,    86,    86,    87,    88,    89,    90,    91,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    93,    93,    94,    94,    95,    95,    95,
      96,    96,    97,    97,    98,    98,    98,    98,    98,    98
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     2,     1,     2,
       2,     0,     2,     3,     1,     1,     1,     1,     1,     3,
       6,     6,     1,     0,     7,     2,     0,     1,     0,     4,
       2,     1,     1,     2,     0,     5,     6,     6,     2,     0,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       0,     5,     7,     5,     9,     2,     2,     5,     3,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     2,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     3,
       3,     4,     6,     3,     1,     1,     0,     1,     3,     4,
       4,     6,     1,     0,     1,     1,     1,     1,     1,     1
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
#line 65 "decaf.y" /* yacc.c:1646  */
    {
													tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("Program", a, 1);
													tabCount = 0;
													printtree((yyval.NTnode));}
#line 1561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 71 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1568 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 73 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1575 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 75 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1582 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 77 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 80 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-1].NTnode), (yyvsp[0].NTnode));}
#line 1595 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 81 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 1601 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 83 "decaf.y" /* yacc.c:1646  */
    { tnode * a[1] = {(yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("VarDef",a, 1);}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 86 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-1].NTnode), (yyvsp[0].NTnode));}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 87 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 89 "decaf.y" /* yacc.c:1646  */
    {
													tnode * a[0] = {};
													tnode *b[2] = {(yyvsp[-1].NTnode), NewNodeWithLabel((yyvsp[0].name),a , 0)};
													(yyval.NTnode) = NewNodeWithLabel("",b, 2);}
#line 1629 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 94 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-2].NTnode), (yyvsp[0].NTnode));}
#line 1635 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 95 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 1641 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 97 "decaf.y" /* yacc.c:1646  */
    {tnode * a[0] = {}; (yyval.NTnode) = NewNodeWithLabel("DoubleType",a, 0);}
#line 1647 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 98 "decaf.y" /* yacc.c:1646  */
    {tnode * a[0] = {}; (yyval.NTnode) = NewNodeWithLabel("IntType",a, 0);}
#line 1653 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 99 "decaf.y" /* yacc.c:1646  */
    {tnode * a[0] = {}; (yyval.NTnode) = NewNodeWithLabel("BooleanType",a, 0);}
#line 1659 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 100 "decaf.y" /* yacc.c:1646  */
    {tnode * a[0] = {}; (yyval.NTnode) = NewNodeWithLabel("StringType",a, 0);}
#line 1665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 101 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[-2].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("[]",a, 1);}
#line 1671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 104 "decaf.y" /* yacc.c:1646  */
    {
													tnode * a[1] = {(yyvsp[-2].NTnode)};
													(yyvsp[-2].NTnode) = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[1] = {(yyvsp[0].NTnode)};
													(yyvsp[0].NTnode) = NewNodeWithLabel("Body", b, 1);
													tnode * c[0] = {};
													tnode * d[4] = {(yyvsp[-5].NTnode), NewNodeWithLabel((yyvsp[-4].name),c,0), (yyvsp[-2].NTnode), (yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("FuncDef",d, 4);
													}
#line 1685 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 114 "decaf.y" /* yacc.c:1646  */
    {
     												tnode * a[1] = {(yyvsp[-2].NTnode)};
													(yyvsp[-2].NTnode) = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[1] = {(yyvsp[0].NTnode)};
													(yyvsp[0].NTnode) = NewNodeWithLabel("Body", b, 1);
													tnode * c[0] = {};
													(yyvsp[-5].NTnode) = NewNodeWithLabel("VoidType", c, 0); 
													tnode * d[4] = {(yyvsp[-5].NTnode), NewNodeWithLabel((yyvsp[-4].name),c,0), (yyvsp[-2].NTnode), (yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("FuncDef",d, 4);
													}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 125 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 126 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 129 "decaf.y" /* yacc.c:1646  */
    {
													tnode * a[1] = {(yyvsp[-4].NTnode)};
													(yyvsp[-4].NTnode) = NewNodeWithLabel("extends", a, 1);

													tnode * b[1] = {(yyvsp[-3].NTnode)};
													// $4 = NewNodeWithLabel("implement", b, 1);
													
													tnode * c[0] = {}; 
													tnode * d[4] = {NewNodeWithLabel((yyvsp[-5].name),c, 0), (yyvsp[-4].NTnode), (yyvsp[-3].NTnode), (yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("Class",d, 4);
													}
#line 1728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 141 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													(yyval.NTnode) = NewNodeWithLabel((yyvsp[0].name),c , 0);}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 144 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 146 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 147 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 149 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													
													(yyval.NTnode) = merge( NewNodeWithLabel((yyvsp[-2].name),c, 0), (yyvsp[0].NTnode));}
#line 1763 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 153 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};
													(yyval.NTnode) = NewNodeWithLabel((yyvsp[0].name),c, 0);}
#line 1770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 156 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1777 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 158 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 161 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-1].NTnode), (yyvsp[0].NTnode));}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 162 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 164 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													tnode * a[2] = {NewNodeWithLabel((yyvsp[-3].name),c, 0), (yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("interface", a, 2);}
#line 1805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 169 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													tnode * a[1] = {(yyvsp[-2].NTnode)};
													(yyvsp[-2].NTnode) = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[3] = {(yyvsp[-5].NTnode), NewNodeWithLabel((yyvsp[-4].name),c, 0), (yyvsp[-2].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("Prototype", b, 3);
													}
#line 1817 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 176 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													(yyvsp[-5].NTnode) = NewNodeWithLabel("VoidType",c, 0);
													tnode * a[1] = {(yyvsp[-2].NTnode)};
													(yyvsp[-2].NTnode) = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[3] = {(yyvsp[-5].NTnode), NewNodeWithLabel((yyvsp[-4].name),c, 0), (yyvsp[-2].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("Prototype", b, 3);
													}
#line 1830 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 185 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-1].NTnode), (yyvsp[0].NTnode));}
#line 1836 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 186 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 188 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("StmtBlock",c, 2);
													}
#line 1850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 192 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1857 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 194 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 196 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1871 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 198 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1878 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 200 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 202 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1892 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 204 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 206 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 209 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-1].NTnode), (yyvsp[0].NTnode));}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 210 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 212 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)};(yyval.NTnode) = NewNodeWithLabel("If", c, 2);}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 213 "decaf.y" /* yacc.c:1646  */
    {
	 															tnode * c[1] = {(yyvsp[0].NTnode)};
	 															(yyvsp[0].NTnode) = NewNodeWithLabel("Else", c, 1); 
	 															tnode * a[3] = {(yyvsp[-4].NTnode), (yyvsp[-2].NTnode), (yyvsp[0].NTnode)};
	 															(yyval.NTnode) = NewNodeWithLabel("If", a, 3);}
#line 1934 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 219 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("while", c, 2);
													}
#line 1943 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 225 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[4] = {(yyvsp[-6].NTnode), (yyvsp[-4].NTnode), (yyvsp[-2].NTnode), (yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("for", c, 4);}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 229 "decaf.y" /* yacc.c:1646  */
    {tnode * c[1] = {(yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("return", c, 1);}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 231 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {}; (yyval.NTnode) = NewNodeWithLabel("break", c, 0);}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 233 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {}; (yyval.NTnode) = NewNodeWithLabel("print", c, 0);}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 235 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("assign", c, 2);}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 236 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1982 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 238 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 240 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("this", c,0);}
#line 1995 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 241 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[0].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 243 "decaf.y" /* yacc.c:1646  */
    {tnode * a[1] = {(yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("",a, 1);}
#line 2009 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 245 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("+", c, 2);}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 246 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("-", c, 2);}
#line 2021 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 247 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("*", c, 2);}
#line 2027 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 248 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("/", c, 2);}
#line 2033 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 249 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("%", c, 2);}
#line 2039 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 250 "decaf.y" /* yacc.c:1646  */
    {tnode * c[1] = {(yyvsp[0].NTnode)};(yyval.NTnode) = NewNodeWithLabel("-",c, 1);}
#line 2045 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 251 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("<", c, 2);}
#line 2051 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 252 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("<=", c, 2);}
#line 2057 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 253 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel(">=", c, 2);}
#line 2063 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 254 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel(">", c, 2);}
#line 2069 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 255 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("==", c, 2);}
#line 2075 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 256 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("!=", c, 2);}
#line 2081 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 257 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("&&", c, 2);}
#line 2087 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 258 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-2].NTnode), (yyvsp[0].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("||", c, 2);}
#line 2093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 259 "decaf.y" /* yacc.c:1646  */
    {tnode * c[1] = {(yyvsp[0].NTnode)};(yyval.NTnode) = NewNodeWithLabel("!",c, 1);}
#line 2099 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 260 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("ReadInteger", c, 0);}
#line 2105 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 261 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("ReadLine", c, 0);}
#line 2111 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 262 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};
     												tnode * d[1] = {NewNodeWithLabel((yyvsp[-1].name), c, 0)};
     												(yyval.NTnode) = NewNodeWithLabel("New",c, 1);}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 265 "decaf.y" /* yacc.c:1646  */
    {tnode * c[2] = {(yyvsp[-3].NTnode), (yyvsp[-1].NTnode)}; (yyval.NTnode) = NewNodeWithLabel("NewArray", c, 2);}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 267 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = merge((yyvsp[-2].NTnode), (yyvsp[0].NTnode));}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 268 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 270 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 271 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 273 "decaf.y" /* yacc.c:1646  */
    {
													tnode * c[0] = {};
													tnode * d[1] = {NewNodeWithLabel((yyvsp[0].name), c, 0)};
													(yyval.NTnode) = NewNodeWithLabel("LValue", d, 1);
													}
#line 2159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 278 "decaf.y" /* yacc.c:1646  */
    {
     												tnode * c[0] = {};
     												tnode * d[2] = {(yyvsp[-2].NTnode), NewNodeWithLabel((yyvsp[0].name), c, 0)};
     												(yyval.NTnode) = NewNodeWithLabel("LValue",d,2);}
#line 2168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 282 "decaf.y" /* yacc.c:1646  */
    {
     												tnode * c[2] = {(yyvsp[-3].NTnode), (yyvsp[-1].NTnode)};
     												(yyval.NTnode) = NewNodeWithLabel("LValue",c,2);
     												}
#line 2177 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 287 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};
													tnode * d[2] = {NewNodeWithLabel((yyvsp[-3].name), c, 0), (yyvsp[-1].NTnode)};
													(yyval.NTnode) = NewNodeWithLabel("Call", d, 2);}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 290 "decaf.y" /* yacc.c:1646  */
    {
     												tnode * c[0] = {};
     												tnode * d[3] = {(yyvsp[-5].NTnode), NewNodeWithLabel((yyvsp[-3].name), c, 0), (yyvsp[-1].NTnode)}; 
     												(yyval.NTnode) = NewNodeWithLabel("Call", d, 3);}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 294 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = (yyvsp[0].NTnode);}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 295 "decaf.y" /* yacc.c:1646  */
    {(yyval.NTnode) = emptyNode();}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 297 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("IntConstant", c, 0);}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 298 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("DoubleConstant", c, 0);}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 299 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("BoolConstant", c, 0);}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 300 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("StringConstant", c, 0);}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 301 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("CharConstant", c, 0);}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 302 "decaf.y" /* yacc.c:1646  */
    {tnode * c[0] = {};(yyval.NTnode) = NewNodeWithLabel("NullConstant", c, 0);}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2246 "y.tab.c" /* yacc.c:1646  */
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
#line 304 "decaf.y" /* yacc.c:1906  */


struct tnode ** push(int size, struct tnode ** childs, struct tnode * child){
	struct tnode ** newchilds = (struct tnode **)malloc(sizeof(tnode *) * (size + 1));
	for(int i = 0; i < size; i++){
		newchilds[i] = childs[i];
	}
	newchilds[size] = child;
	return newchilds;
}

tnode * ProgramNode(char *token, tnode *child){
	child->token = token;
	return child;
}
tnode * merge(tnode *child, tnode *addchild){
	//printf("%s, %s", child->token, addchild->token);
	for(int i = 0; i < addchild->size; i++){
		child->childs = push(child->size ,child->childs, addchild->childs[i]);
		child->size++;
	}
	return child;
}
tnode * NewNodeWithLabel(char *token,tnode ** arr, int size){
	tnode *newnode = (tnode *)malloc(sizeof(tnode));
	newnode->size = 0;
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->token = newstr;
	for(int i = 0; i < size; i++){
		newnode->childs = push(newnode->size,newnode->childs, arr[i]);
		newnode->size++;
	}
	return(newnode);
}
tnode * emptyNode(){
	char token[2] = "";
	tnode *newnode = (tnode *)malloc(sizeof(tnode));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->token = newstr;
	newnode->size = 0;
	return(newnode);
}

void printtree(tnode *tree){
	tabCount++;
	if(strcmp(tree->token, "")){
		for(int j = 0; j < tabCount - 1; j++){
			printf("\t");
		}
		printf("%s\n", tree->token);
	}else{
		tabCount--;
	}
	for(int i = 0; i < tree->size; i++){
		if (tree->childs[i]){
 			printtree(tree->childs[i]);	
		}
	}
	if(strcmp(tree->token, "")){
		//printf(")");
	}else{
		tabCount++;
	}
	tabCount--;
}


/*void printtree(tnode *tree){
	printf("%d %s\n", tree->size,tree->token);
	
	if(strcmp(tree->token, "")){
		for(int j = 0; j < tabCount - 1; j++){
			//printf("\t");
		}
	}
	for(int i = 0; i < tree->size; i++){
		if (tree->childs[i]){
 			printtree(tree->childs[i]);	
		}
	}
	if(strcmp(tree->token, "")){
		//printf(")");
	}
	tabCount--;
}
*/
