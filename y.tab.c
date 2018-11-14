/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170201

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 1 "yacctemplate.y"

#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */
int yylex();
int yyerror();
#line 32 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define SEMICOLON 257
#define ID 258
#define SCIENTIFIC 259
#define INTEGER 260
#define FLOATCONST 261
#define STRINGCONST 262
#define CONST 263
#define BOOL 264
#define VOID 265
#define FLOAT 266
#define DOUBLE 267
#define STRING 268
#define INT 269
#define READ 270
#define PRINT 271
#define WHILE 272
#define DO 273
#define IF 274
#define ELSE 275
#define FOR 276
#define CONTINUE 277
#define BREAK 278
#define RETURN 279
#define BOOLEAN 280
#define TRUE 281
#define FALSE 282
#define LLP 283
#define LE 284
#define EQ 285
#define GE 286
#define NE 287
#define AND 288
#define OR 289
#define YYERRCODE 256
typedef int YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    4,    4,    4,    2,    2,    2,    3,
    6,    9,    9,    9,    9,    9,   11,   11,   12,   12,
   10,   10,   10,   10,   10,   10,   14,    5,   16,   16,
   17,   17,   17,   17,   17,   17,    7,    7,    8,    8,
   18,   18,   20,   20,   21,   22,   22,   22,   22,   22,
   22,   22,   19,   29,   29,   29,   29,   23,   23,   23,
   30,   30,   13,   13,   13,   13,   13,   13,   13,   13,
   13,   13,   13,   13,   13,   13,   13,   13,   13,   31,
   31,   31,   24,   24,   25,   25,   33,   26,   34,   34,
   34,   35,   35,   36,   36,   27,   27,   27,   28,   32,
   15,   15,   15,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    2,    2,    0,    1,    1,    1,    1,
    3,    1,    1,    1,    1,    1,    1,    2,    3,    4,
    3,    1,    5,    3,    6,    4,    3,    4,    5,    3,
    1,    1,    1,    1,    1,    1,    6,    6,    6,    6,
    1,    0,    3,    1,    2,    1,    1,    1,    1,    1,
    1,    1,    3,    2,    2,    2,    0,    5,    3,    3,
    4,    0,    1,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    2,    2,    1,
    2,    1,    7,    5,    5,    7,    1,    8,    3,    4,
    0,    1,    0,    3,    0,    3,    2,    2,    1,    5,
    3,    1,    0,
};
static const YYINT yydefred[] = {                         0,
    0,   14,    0,   13,   15,   16,   12,    0,    1,    0,
    0,    7,    8,    9,   10,    0,    0,    0,    2,    0,
    0,    3,    0,    0,   22,    0,    0,    0,    4,    5,
    0,    0,    0,    0,   11,    0,    0,   28,    0,    0,
    0,   44,    0,    0,   34,   31,   32,   33,   35,   36,
    0,    0,    0,    0,   80,   63,   82,    0,    0,    0,
   21,    0,    0,   45,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   26,    0,    0,
    0,   18,   38,    0,   40,   43,   20,    0,    0,    0,
   77,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   70,   37,   39,    0,    0,    0,   29,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   46,    0,   47,   48,   49,   50,   51,
   52,    0,   99,    0,    0,    0,   27,   25,    0,   62,
    0,    0,    0,    0,    0,   98,   97,    0,   55,   54,
    0,   56,   53,  101,  100,   61,    0,    0,   59,    0,
    0,    0,    0,    0,    0,    0,   96,    0,    0,    0,
    0,    0,    0,    0,   58,   85,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   86,   83,    0,    0,
    0,   88,    0,
};
static const YYINT yydgoto[] = {                          8,
    9,   20,   21,   22,   12,   13,   14,   15,   16,   24,
   25,   34,   98,   88,   99,   27,   55,   40,  134,   41,
   42,  135,  136,  137,  138,  139,  140,  141,  142,   69,
   56,   57,  171,  176,  192,  200,
};
static const YYINT yysindex[] = {                       179,
  191,    0, -216,    0,    0,    0,    0,    0,    0,  179,
  179,    0,    0,    0,    0, -181, -175,   45,    0,  179,
  179,    0,   85,  -43,    0,   37, -147,  191,    0,    0,
 -133,   42,  191,   68,    0, -122,  117,    0, -100,  122,
  121,    0,   78,  139,    0,    0,    0,    0,    0,    0,
   42,   42,   42,   64,    0,    0,    0,  147,   63,  -11,
    0,  136,  104,    0, -105,  191,  104,   42,  107,  178,
 -240,   -2,   42,   42,   42,   42,   42,   42,   42,   42,
   42,   42,   42,   42,   42, -103,   42,    0,   42,  142,
 -175,    0,    0,  563,    0,    0,    0,  -16,  165,   42,
    0,  178,  178,  178,  184,  184, -240, -240, -240, -240,
 -240, -240,  -76,    0,    0,    0,   94,   64,   63,    0,
  139,  -30,   42,  192,  111,  195,  196,  -20,  -15,   42,
  563,  563,  -17,    0,  563,    0,    0,    0,    0,    0,
    0,  118,    0,   42,  -12,   10,    0,    0,   44,    0,
   24,   42,  -19,   42,  -57,    0,    0,   31,    0,    0,
   69,    0,    0,    0,    0,    0,   42,  107,    0,   64,
  213,  215,  221,  202,    6,    9,    0,   57,  111,   42,
  111,   42,  206,   42,    0,    0,  233,    1,   64,   42,
   64,   20,   22,  111,   64,   32,    0,    0,  219,  248,
   42,    0,   64,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  291,    0,    0,    0,    0,    0,    0,    0,    0,  291,
  291,    0,  -42,    0,    0,    0,    0,  251,    0,    0,
    0,    0,  251,  -41,    0,    0,    0,    0,    0,    0,
  252,    0,    0,  -37,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -33,    0,    0,    0,    0,    0,  -42,
    0,   48,  148,    0,    0,    0,   18,  265,  -28,  462,
   97,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  182,    0,    0,  -41,
    0,    0,    0,  197,    0,    0,    0,   -5,    0,    0,
    0,  471,  479,  488,  438,  453,  106,  140,  325,  359,
  368,  394,   71,    0,    0,    0,    0,  -32,    0,    0,
  100,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  197,  197,    0,    0,  197,    0,    0,    0,    0,    0,
    0,    0,    0,   -4,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   70,    0,    0,    0,    0,    0,
  -42,    0,    0,    0,    0,    0,    0,  524,    0,  280,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   72,    0,    0,    0,  546,   74,    0,
   76,    0,    0,    0,   79,  284,    0,    0,    0,    0,
    0,    0,  285,
};
static const YYINT yygindex[] = {                         0,
  320,  145,  162,  102,   38,   43,    0,    0,   62,    0,
   -6,   29,  583,  216,  -63,  246,  301,  306,  153,    0,
  274,    0,    0,    0,    0,    0,    0,    0,   95,  -99,
    0,   73, -116,    0,    0,    0,
};
#define YYTABLESIZE 842
static const YYINT yytable[] = {                         62,
   36,   17,   18,   62,   62,   62,   62,   62,   81,   62,
   24,   23,   81,   81,   81,   81,   81,   94,   81,   94,
   75,  149,   62,  117,   62,   73,   76,  144,   77,   61,
   74,   81,   64,   81,   75,  102,  103,  173,  101,   73,
   76,   18,   77,   78,   74,   79,   75,   84,   85,   89,
  168,   73,   76,   62,   77,   62,   74,   78,   19,   79,
   75,   19,   17,  187,   81,   73,   76,   75,   77,   78,
   74,   79,   73,   76,   52,   77,   23,   74,   19,   31,
  164,   53,   26,   78,   28,   79,   51,   62,   90,   39,
   78,   92,   79,   75,   39,   97,   81,   37,   73,   76,
   75,   77,  166,   74,  167,   73,   76,   69,   77,   38,
   74,   69,   69,   69,   69,   69,   78,   69,   79,  102,
  103,   29,   30,   78,   33,   79,   43,   39,   59,   32,
   69,  131,   69,   78,  100,   60,  132,   78,   78,   78,
   78,   78,   71,   78,   10,   32,   71,   71,   71,   71,
   71,   93,   71,  115,   10,  133,   78,   63,   78,   31,
   62,   11,   65,   69,   66,   71,  143,   71,  131,  131,
   67,   11,  131,  132,  132,   31,   72,  132,   68,   91,
   72,   72,   72,   72,   72,   87,   72,   86,   17,   78,
   62,   17,  133,  133,   31,   69,  133,  100,   71,   72,
  174,   72,  119,  143,  143,  145,    2,  143,    4,    5,
    6,    7,   85,   35,   17,   18,  175,   95,  147,   62,
   76,   78,   77,   24,   23,  159,  160,  150,   81,  162,
   71,  152,   72,   94,  154,  155,  156,   78,  116,   79,
  161,  157,  163,   78,  165,   79,   62,   62,   62,   62,
   62,   62,  172,  179,  180,   81,   81,   81,   81,   81,
   81,  181,  182,  183,   72,  184,  190,   80,   81,   82,
   83,   84,   85,  193,   19,  194,  196,  153,  197,  201,
  169,   80,   81,   82,   83,   84,   85,  177,  202,  199,
    6,   42,   41,   80,   81,   82,   83,   84,   85,   44,
   45,   46,   47,   48,   30,  103,  103,   80,   81,   82,
   83,   84,   85,  185,   80,   81,   82,   83,   84,   85,
   87,   57,   49,   50,   95,   94,   91,   69,   93,   19,
   89,  186,   92,  188,  148,   90,  120,   62,   58,   96,
   80,   81,   82,   83,   84,   85,  198,   80,   81,   82,
   83,   84,   85,   78,   69,   69,   69,   69,   69,    0,
    0,   73,   71,    0,    0,   73,   73,   73,   73,   73,
    0,   73,    0,    0,    0,   45,   46,   47,   48,    0,
   78,   78,   78,   78,   73,    0,   73,    0,    0,   71,
   71,   71,   71,    0,    0,   74,   72,   49,   50,   74,
   74,   74,   74,   74,   75,   74,    0,    0,   75,   75,
   75,   75,   75,    0,   75,    0,    0,   73,   74,    0,
   74,    0,    0,   72,   72,   72,   72,   75,    0,   75,
   76,    0,    0,    0,   76,   76,   76,   76,   76,    0,
   76,    1,    2,    3,    4,    5,    6,    7,    0,   73,
    0,   74,    0,   76,    2,   76,    4,    5,    6,    7,
   75,   80,   81,   82,   83,   84,   85,   80,   81,   82,
   83,   84,   85,    0,   68,    0,    0,    0,   68,   68,
   68,   68,   68,   74,   68,    0,   76,    0,    0,   64,
    0,    0,   75,   64,   64,   64,   64,   64,   79,   64,
    0,    0,   79,   79,    0,   79,    0,   65,   79,    0,
    0,   65,   65,    0,   65,   66,    0,   65,   76,   66,
   66,    0,   66,    0,   67,   66,    0,    0,   67,   67,
   68,   67,    0,    0,   67,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   64,    0,    0,    0,    0,
    0,    0,    0,    0,   79,    0,    0,    0,    0,    0,
    0,    0,   68,   65,    0,    0,    0,    0,    0,    0,
    0,   66,    0,    0,    0,    0,    0,   64,    0,    0,
   67,   73,    0,    0,    0,    0,   79,    0,    0,    0,
    0,    0,    0,    0,    0,   65,    0,    0,    0,    0,
    0,    0,    0,   66,    0,    0,    0,    0,   73,   73,
   73,   73,   67,    0,   54,   74,    0,    0,    0,    0,
    0,    0,    0,    0,   75,    0,    0,    0,    0,    0,
    0,    0,    0,   70,   71,   72,    0,    0,    0,    0,
    0,    0,   74,   74,   74,   74,   60,    0,   60,    0,
   76,   75,   75,   75,   75,  102,  103,  104,  105,  106,
  107,  108,  109,  110,  111,  112,  113,  114,   84,    0,
   84,  118,    0,    0,    0,    0,    0,   76,   76,   76,
   76,    0,  146,    0,    0,   94,    0,    0,    0,    0,
    0,    0,    0,    0,   68,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  151,    0,    0,    0,   64,
    0,    0,  158,    0,    0,    0,    0,    0,   79,    0,
    0,    0,    0,    0,    0,    0,    0,   65,    0,    0,
    0,    0,    0,    0,  170,   66,  170,    0,    0,    0,
    0,    0,    0,    0,   67,    0,    0,    0,    0,  178,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  170,    0,  189,    0,  191,    0,    0,    0,
    0,    0,  195,    0,    0,    0,    0,    0,    0,    0,
    0,   60,    0,  203,    0,    0,   60,   60,    0,   60,
   60,   60,   60,   60,   60,   60,   60,   60,    0,   60,
   60,   60,   60,   84,    0,    0,    0,    0,   84,   84,
    0,   84,   84,   84,   84,   84,   84,   84,   84,   84,
  121,   84,   84,   84,   84,    1,    2,    0,    4,    5,
    6,    7,  122,  123,  124,  125,  126,    0,  127,  128,
  129,  130,
};
static const YYINT yycheck[] = {                         37,
   44,   44,   44,   41,   42,   43,   44,   45,   37,   47,
   44,   44,   41,   42,   43,   44,   45,  123,   47,  123,
   37,  121,   60,   87,   62,   42,   43,   44,   45,   36,
   47,   60,   39,   62,   37,   41,   41,  154,   41,   42,
   43,  258,   45,   60,   47,   62,   37,  288,  289,   61,
  150,   42,   43,   91,   45,   93,   47,   60,   41,   62,
   37,   44,    1,  180,   93,   42,   43,   37,   45,   60,
   47,   62,   42,   43,   33,   45,  258,   47,   61,   91,
  144,   40,  258,   60,   40,   62,   45,  125,   60,   28,
   60,   63,   62,   37,   33,   67,  125,   61,   42,   43,
   37,   45,   93,   47,   61,   42,   43,   37,   45,  257,
   47,   41,   42,   43,   44,   45,   60,   47,   62,  125,
  125,   20,   21,   60,   40,   62,  260,   66,   61,   61,
   60,   94,   62,   37,   91,  258,   94,   41,   42,   43,
   44,   45,   37,   47,    0,   61,   41,   42,   43,   44,
   45,  257,   47,  257,   10,   94,   60,  258,   62,   91,
   61,    0,   41,   93,   44,   60,   94,   62,  131,  132,
   93,   10,  135,  131,  132,   91,   37,  135,   40,   44,
   41,   42,   43,   44,   45,  123,   47,   41,   41,   93,
   91,   44,  131,  132,   91,  125,  135,   91,   93,   60,
  258,   62,   61,  131,  132,   41,  264,  135,  266,  267,
  268,  269,  289,  257,  257,  257,  155,   65,  125,  257,
   43,  125,   45,  257,  257,  131,  132,  258,  257,  135,
  125,   40,   93,  123,   40,   40,  257,   60,   86,   62,
  258,  257,  125,   60,  257,   62,  284,  285,  286,  287,
  288,  289,  272,   41,   40,  284,  285,  286,  287,  288,
  289,   41,   61,  258,  125,  257,   61,  284,  285,  286,
  287,  288,  289,   41,  257,  275,  257,  125,  257,   61,
  257,  284,  285,  286,  287,  288,  289,  257,   41,  258,
    0,   41,   41,  284,  285,  286,  287,  288,  289,  258,
  259,  260,  261,  262,  257,   41,  125,  284,  285,  286,
  287,  288,  289,  257,  284,  285,  286,  287,  288,  289,
   41,  125,  281,  282,   41,   41,  257,  257,  257,   10,
  257,  179,  257,  181,  119,  257,   91,   37,   33,   66,
  284,  285,  286,  287,  288,  289,  194,  284,  285,  286,
  287,  288,  289,  257,  284,  285,  286,  287,  288,   -1,
   -1,   37,  257,   -1,   -1,   41,   42,   43,   44,   45,
   -1,   47,   -1,   -1,   -1,  259,  260,  261,  262,   -1,
  284,  285,  286,  287,   60,   -1,   62,   -1,   -1,  284,
  285,  286,  287,   -1,   -1,   37,  257,  281,  282,   41,
   42,   43,   44,   45,   37,   47,   -1,   -1,   41,   42,
   43,   44,   45,   -1,   47,   -1,   -1,   93,   60,   -1,
   62,   -1,   -1,  284,  285,  286,  287,   60,   -1,   62,
   37,   -1,   -1,   -1,   41,   42,   43,   44,   45,   -1,
   47,  263,  264,  265,  266,  267,  268,  269,   -1,  125,
   -1,   93,   -1,   60,  264,   62,  266,  267,  268,  269,
   93,  284,  285,  286,  287,  288,  289,  284,  285,  286,
  287,  288,  289,   -1,   37,   -1,   -1,   -1,   41,   42,
   43,   44,   45,  125,   47,   -1,   93,   -1,   -1,   37,
   -1,   -1,  125,   41,   42,   43,   44,   45,   37,   47,
   -1,   -1,   41,   42,   -1,   44,   -1,   37,   47,   -1,
   -1,   41,   42,   -1,   44,   37,   -1,   47,  125,   41,
   42,   -1,   44,   -1,   37,   47,   -1,   -1,   41,   42,
   93,   44,   -1,   -1,   47,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   93,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   93,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  125,   93,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   93,   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,
   93,  257,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  125,   -1,   -1,   -1,   -1,  284,  285,
  286,  287,  125,   -1,   32,  257,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   51,   52,   53,   -1,   -1,   -1,   -1,
   -1,   -1,  284,  285,  286,  287,  123,   -1,  125,   -1,
  257,  284,  285,  286,  287,   73,   74,   75,   76,   77,
   78,   79,   80,   81,   82,   83,   84,   85,  123,   -1,
  125,   89,   -1,   -1,   -1,   -1,   -1,  284,  285,  286,
  287,   -1,  100,   -1,   -1,  123,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,   -1,  257,
   -1,   -1,  130,   -1,   -1,   -1,   -1,   -1,  257,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,   -1,   -1,
   -1,   -1,   -1,   -1,  152,  257,  154,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  257,   -1,   -1,   -1,   -1,  167,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  180,   -1,  182,   -1,  184,   -1,   -1,   -1,
   -1,   -1,  190,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  258,   -1,  201,   -1,   -1,  263,  264,   -1,  266,
  267,  268,  269,  270,  271,  272,  273,  274,   -1,  276,
  277,  278,  279,  258,   -1,   -1,   -1,   -1,  263,  264,
   -1,  266,  267,  268,  269,  270,  271,  272,  273,  274,
  258,  276,  277,  278,  279,  263,  264,   -1,  266,  267,
  268,  269,  270,  271,  272,  273,  274,   -1,  276,  277,
  278,  279,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 289
#define YYUNDFTOKEN 328
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,"'%'",0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,
0,0,0,0,0,"'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"'['",0,"']'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"SEMICOLON","ID","SCIENTIFIC","INTEGER",
"FLOATCONST","STRINGCONST","CONST","BOOL","VOID","FLOAT","DOUBLE","STRING",
"INT","READ","PRINT","WHILE","DO","IF","ELSE","FOR","CONTINUE","BREAK","RETURN",
"BOOLEAN","TRUE","FALSE","LLP","LE","EQ","GE","NE","AND","OR",0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : decl_and_def_list",
"decl_and_def_list : declaration_list decl_and_def_list",
"decl_and_def_list : definition_list decl_and_def_list_mustdef",
"decl_and_def_list_mustdef : declaration_list decl_and_def_list_mustdef",
"decl_and_def_list_mustdef : definition_list decl_and_def_list_mustdef",
"decl_and_def_list_mustdef :",
"declaration_list : const_decl",
"declaration_list : var_decl",
"declaration_list : funct_decl",
"definition_list : funct_defi",
"var_decl : scalar_type identifier_list SEMICOLON",
"scalar_type : INT",
"scalar_type : FLOAT",
"scalar_type : BOOL",
"scalar_type : DOUBLE",
"scalar_type : STRING",
"identifier : ID",
"identifier : ID array_int",
"array_int : '[' INTEGER ']'",
"array_int : '[' INTEGER ']' array_int",
"identifier_list : identifier_list ',' identifier",
"identifier_list : identifier",
"identifier_list : identifier_list ',' ID '=' expression",
"identifier_list : ID '=' expression",
"identifier_list : identifier_list ',' ID array_int '=' initial_array",
"identifier_list : ID array_int '=' initial_array",
"initial_array : '{' expression_list '}'",
"const_decl : CONST scalar_type const_list SEMICOLON",
"const_list : ID '=' literal_const ',' const_list",
"const_list : ID '=' literal_const",
"literal_const : INTEGER",
"literal_const : FLOATCONST",
"literal_const : STRINGCONST",
"literal_const : SCIENTIFIC",
"literal_const : TRUE",
"literal_const : FALSE",
"funct_decl : scalar_type ID '(' arguments ')' SEMICOLON",
"funct_decl : VOID ID '(' arguments ')' SEMICOLON",
"funct_defi : scalar_type ID '(' arguments ')' compound",
"funct_defi : VOID ID '(' arguments ')' compound",
"arguments : nonempty_arguments",
"arguments :",
"nonempty_arguments : nonempty_arguments ',' argument",
"nonempty_arguments : argument",
"argument : scalar_type identifier",
"statement : compound",
"statement : simple",
"statement : conditional",
"statement : while",
"statement : for",
"statement : jump",
"statement : procedure_call",
"compound : '{' compound_list '}'",
"compound_list : var_decl compound_list",
"compound_list : const_decl compound_list",
"compound_list : statement compound_list",
"compound_list :",
"simple : ID array_expre '=' expression SEMICOLON",
"simple : PRINT expression SEMICOLON",
"simple : READ ID array_expre",
"array_expre : array_expre '[' expression ']'",
"array_expre :",
"expression : expression_component",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : expression '%' expression",
"expression : expression '+' expression",
"expression : expression AND expression",
"expression : expression OR expression",
"expression : expression '<' expression",
"expression : expression '>' expression",
"expression : expression LE expression",
"expression : expression EQ expression",
"expression : expression GE expression",
"expression : expression NE expression",
"expression : '(' expression ')'",
"expression : '!' expression",
"expression : '-' expression",
"expression_component : literal_const",
"expression_component : ID array_expre",
"expression_component : funciton_invocation",
"conditional : IF '(' boolean_expression ')' compound ELSE compound",
"conditional : IF '(' boolean_expression ')' compound",
"while : WHILE '(' boolean_expression ')' compound",
"while : DO compound WHILE '(' boolean_expression ')' SEMICOLON",
"boolean_expression : expression",
"for : FOR '(' initial_expression SEMICOLON control_expression SEMICOLON increment_expression ')'",
"initial_expression : ID '=' expression",
"initial_expression : scalar_type ID '=' expression",
"initial_expression :",
"control_expression : expression",
"control_expression :",
"increment_expression : ID '=' expression",
"increment_expression :",
"jump : RETURN expression SEMICOLON",
"jump : BREAK SEMICOLON",
"jump : CONTINUE SEMICOLON",
"procedure_call : funciton_invocation",
"funciton_invocation : ID '(' expression_list ')' SEMICOLON",
"expression_list : expression ',' expression_list",
"expression_list : expression",
"expression_list :",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 214 "yacctemplate.y"


int yyerror( char *msg )
{
  fprintf( stderr, "\n|--------------------------------------------------------------------------\n" );
	fprintf( stderr, "| Error found in Line #%d: %s\n", linenum, buf );
	fprintf( stderr, "|\n" );
	fprintf( stderr, "| Unmatched token: %s\n", yytext );
  fprintf( stderr, "|--------------------------------------------------------------------------\n" );
  exit(-1);
}

int  main( int argc, char **argv )
{
	if( argc != 2 ) {
		fprintf(  stdout,  "Usage:  ./parser  [filename]\n"  );
		exit(0);
	}

	FILE *fp = fopen( argv[1], "r" );
	
	if( fp == NULL )  {
		fprintf( stdout, "Open  file  error\n" );
		exit(-1);
	}
	
	yyin = fp;
	yyparse();

	fprintf( stdout, "\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	fprintf( stdout, "|  There is no syntactic error!  |\n" );
	fprintf( stdout, "|--------------------------------|\n" );
	exit(0);
}
#line 589 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yym = 0;
    yyn = 0;
    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
