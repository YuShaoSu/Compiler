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

#line 1 "parser.y"

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
    0,   56,   53,    0,  100,   61,    0,    0,   59,    0,
    0,    0,    0,    0,    0,    0,   96,    0,    0,    0,
    0,    0,    0,    0,   58,   85,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   86,   83,    0,    0,
    0,   88,    0,
};
static const YYINT yydgoto[] = {                          8,
    9,   20,   21,   22,   12,   13,   14,   15,   16,   24,
   25,   34,  170,   88,   99,   27,   55,   40,  134,   41,
   42,  135,  136,  137,  138,  139,  140,  141,  142,   69,
   56,   57,  171,  176,  192,  200,
};
static const YYINT yysindex[] = {                       207,
  283,    0, -230,    0,    0,    0,    0,    0,    0,  207,
  207,    0,    0,    0,    0, -222, -162,   83,    0,  207,
  207,    0,   87,  -43,    0,   43, -129,  283,    0,    0,
 -131,  166,  283,   69,    0, -120,  360,    0, -119,  106,
  112,    0,   71,  129,    0,    0,    0,    0,    0,    0,
  166,  166,  166,   38,    0,    0,    0,  134,   56,  -49,
    0,  143,  102,    0, -103,  283,  102,  166,  105,  180,
 -239,   -2,  166,  166,  166,  166,  166,  166,  166,  166,
  166,  166,  166,  166,  166,  -99,  166,    0,  166,  130,
 -162,    0,    0,  421,    0,    0,    0,   38,  -11,  166,
    0,  180,  180,  180,  193,  193, -239, -239, -239, -239,
 -239, -239,  -87,    0,    0,    0,  -33,   38,   56,    0,
  129,  -55,  166,  164,   82,  167,  168,  -45,  -39,  166,
  421,  421,  -36,    0,  421,    0,    0,    0,    0,    0,
    0,   94,    0,  166,  -31,  -16,    0,    0,    3,    0,
   10,  166,  -51,  166,  109,    0,    0,   24,    0,    0,
   21,    0,    0,   38,    0,    0,  166,  105,    0,   38,
  186,  188,  189,  173,  -21,  -18,    0,   31,   82,  166,
   82,  166,  175,  166,    0,    0,  200,  -32,   38,  166,
   38,  -13,  -12,   82,   38,   -4,    0,    0,  201,  225,
  166,    0,   38,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  274,    0,    0,    0,    0,    0,    0,    0,    0,  274,
  274,    0,  -42,    0,    0,    0,    0,  235,    0,    0,
    0,    0,  235,  -41,    0,    0,    0,    0,    0,    0,
  238,    0,    0,  -37,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -26,    0,    0,    0,    0,    0,  -42,
    0,   23,   93,    0,    0,    0,   18,  121,  -28,  153,
   73,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   -6,    0,    0,  -41,
    0,    0,    0,  165,    0,    0,    0,    7,    0,    0,
    0,  446,  455,  463,  139,  297,   99,  108,  327,  361,
  370,  396,   64,    0,    0,    0,    0,  -22,    0,    0,
   34,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  165,  165,    0,    0,  165,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   32,    0,    0,    0,    0,    0,
  -42,    0,    0,   46,    0,    0,    0,  256,    0,  250,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   35,    0,    0,    0,  328,   36,    0,
   48,    0,    0,    0,   50,  273,    0,    0,    0,    0,
    0,    0,  287,
};
static const YYINT yygindex[] = {                         0,
  319,   89,  103,  101,   78,  169,    0,    0,  602,    0,
  149,  100,  485,  213,  248,  245,  300,  310,  152,    0,
  279,    0,    0,    0,    0,    0,    0,    0,   42,  -19,
    0,  171, -117,    0,    0,    0,
};
#define YYTABLESIZE 757
static const YYINT yytable[] = {                         62,
   36,   17,   18,   62,   62,   62,   62,   62,   81,   62,
  144,   89,   81,   81,   81,   81,   81,   24,   81,   94,
   75,   23,   62,   94,   62,   73,   76,   18,   77,  145,
   74,   81,  144,   81,   75,   23,  173,  103,  101,   73,
   76,   31,   77,   78,   74,   79,   75,  102,   84,   85,
  102,   73,   76,   62,   77,   62,   74,   78,   19,   79,
   75,   19,  187,  167,   81,   73,   76,   75,   77,   78,
   74,   79,   73,   76,   75,   77,  166,   74,   19,   73,
   76,   32,   77,   78,   74,   79,  101,   62,   10,  101,
   78,  147,   79,  100,   62,   26,   81,   78,   10,   79,
   69,  149,   11,   37,   69,   69,   69,   69,   69,   78,
   69,   31,   11,   78,   78,   78,   78,   78,  103,   78,
   29,   30,   28,   69,   62,   69,   33,   38,   43,   59,
  168,  102,   78,   17,   78,   71,   17,   60,   63,   71,
   71,   71,   71,   71,   72,   71,   65,   32,   72,   72,
   72,   72,   72,   93,   72,   66,   69,  115,   71,   90,
   71,  103,   92,   67,  103,   78,   97,   72,   68,   72,
  101,  131,  159,  160,   86,   68,  162,   31,   87,   68,
   68,   68,   68,   68,   61,   68,   91,   64,   69,   79,
  119,   71,   31,   79,   79,  100,   79,   78,   52,   79,
   72,   85,  150,  152,   94,   53,  154,  155,  131,  131,
   51,  156,  131,   35,   17,   18,   95,  157,  163,   62,
  172,  161,   76,   71,   77,  165,  179,  180,   81,  181,
   24,   68,   72,  182,   23,  190,  183,  116,  184,   78,
  193,   79,  194,  196,  197,   79,   62,   62,   62,   62,
   62,   62,   78,  199,   79,   81,   81,   81,   81,   81,
   81,  201,  132,   68,  143,  202,  169,   80,   81,   82,
   83,   84,   85,    6,   19,   42,  153,   79,   41,   30,
  177,   80,   81,   82,   83,   84,   85,  185,   91,   57,
   87,   93,   89,   80,   81,   82,   83,   84,   85,  132,
  132,  143,  143,  132,   92,  143,   90,   80,   81,   82,
   83,   84,   85,   95,   80,   81,   82,   83,   84,   85,
   69,   80,   81,   82,   83,   84,   85,   94,   19,   78,
  186,  148,  188,   64,  117,  120,   62,   64,   64,   64,
   64,   64,   58,   64,   96,  198,    0,   69,   69,   69,
   69,   69,    0,    0,    0,   71,   78,   78,   78,   78,
    0,    0,    0,   73,   72,    0,  174,   73,   73,   73,
   73,   73,    2,   73,    4,    5,    6,    7,   60,    0,
   60,    0,   71,   71,   71,   71,   73,    0,   73,   64,
    0,   72,   72,   72,   72,   68,    0,   74,    0,    0,
    0,   74,   74,   74,   74,   74,   75,   74,    0,   79,
   75,   75,   75,   75,   75,    0,   75,    0,    0,   73,
   74,   64,   74,   44,   45,   46,   47,   48,    0,   75,
    0,   75,   76,    0,    0,    0,   76,   76,   76,   76,
   76,    0,   76,    0,    0,    0,   49,   50,    0,    0,
   84,   73,   84,   74,    0,   76,    0,   76,    0,    0,
    0,    0,   75,   80,   81,   82,   83,   84,   85,    1,
    2,    3,    4,    5,    6,    7,   80,   81,   82,   83,
   84,   85,   65,    0,    0,   74,   65,   65,   76,   65,
    0,   66,   65,    0,   75,   66,   66,    0,   66,   67,
    0,   66,    0,   67,   67,    0,   67,    0,    0,   67,
    0,    0,    0,   60,    0,    0,   54,    0,   60,   60,
   76,   60,   60,   60,   60,   60,   60,   60,   60,   60,
    0,   60,   60,   60,   60,   70,   71,   72,   65,    0,
    0,    0,    0,   94,    0,    0,    2,   66,    4,    5,
    6,    7,   98,   64,    0,   67,    0,  102,  103,  104,
  105,  106,  107,  108,  109,  110,  111,  112,  113,  114,
   65,   98,    0,  118,    0,    0,    0,    0,    0,   66,
    0,    0,    0,   73,  146,   84,    0,   67,    0,    0,
   84,   84,    0,   84,   84,   84,   84,   84,   84,   84,
   84,   84,   17,   84,   84,   84,   84,  151,    0,    0,
   73,   73,   73,   73,  158,    0,    0,   74,   45,   46,
   47,   48,    0,    0,    0,    0,   75,    0,  164,   39,
    0,    0,    0,    0,   39,    0,    0,    0,    0,    0,
   49,   50,    0,    0,   74,   74,   74,   74,    0,    0,
    0,  178,   76,   75,   75,   75,   75,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  189,   39,  191,    0,
    0,    0,    0,    0,  195,    0,    0,    0,  121,   76,
   76,   76,   76,    1,    2,  203,    4,    5,    6,    7,
  122,  123,  124,  125,  126,  133,  127,  128,  129,  130,
    0,    0,   65,    0,    0,    0,    0,    0,    0,    0,
    0,   66,    0,    0,    0,    0,    0,    0,    0,   67,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  133,  133,    0,    0,  133,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  175,
};
static const YYINT yycheck[] = {                         37,
   44,   44,   44,   41,   42,   43,   44,   45,   37,   47,
   44,   61,   41,   42,   43,   44,   45,   44,   47,  123,
   37,   44,   60,  123,   62,   42,   43,  258,   45,   41,
   47,   60,   44,   62,   37,  258,  154,   44,   41,   42,
   43,   91,   45,   60,   47,   62,   37,   41,  288,  289,
   44,   42,   43,   91,   45,   93,   47,   60,   41,   62,
   37,   44,  180,   61,   93,   42,   43,   37,   45,   60,
   47,   62,   42,   43,   37,   45,   93,   47,   61,   42,
   43,   61,   45,   60,   47,   62,   41,  125,    0,   44,
   60,  125,   62,   91,   61,  258,  125,   60,   10,   62,
   37,  121,    0,   61,   41,   42,   43,   44,   45,   37,
   47,   91,   10,   41,   42,   43,   44,   45,  125,   47,
   20,   21,   40,   60,   91,   62,   40,  257,  260,   61,
  150,  125,   60,   41,   62,   37,   44,  258,  258,   41,
   42,   43,   44,   45,   37,   47,   41,   61,   41,   42,
   43,   44,   45,  257,   47,   44,   93,  257,   60,   60,
   62,   41,   63,   93,   44,   93,   67,   60,   40,   62,
  125,   94,  131,  132,   41,   37,  135,   91,  123,   41,
   42,   43,   44,   45,   36,   47,   44,   39,  125,   37,
   61,   93,   91,   41,   42,   91,   44,  125,   33,   47,
   93,  289,  258,   40,  123,   40,   40,   40,  131,  132,
   45,  257,  135,  257,  257,  257,   65,  257,  125,  257,
  272,  258,   43,  125,   45,  257,   41,   40,  257,   41,
  257,   93,  125,   61,  257,   61,  258,   86,  257,   60,
   41,   62,  275,  257,  257,   93,  284,  285,  286,  287,
  288,  289,   60,  258,   62,  284,  285,  286,  287,  288,
  289,   61,   94,  125,   94,   41,  257,  284,  285,  286,
  287,  288,  289,    0,  257,   41,  125,  125,   41,  257,
  257,  284,  285,  286,  287,  288,  289,  257,  257,  125,
   41,  257,  257,  284,  285,  286,  287,  288,  289,  131,
  132,  131,  132,  135,  257,  135,  257,  284,  285,  286,
  287,  288,  289,   41,  284,  285,  286,  287,  288,  289,
  257,  284,  285,  286,  287,  288,  289,   41,   10,  257,
  179,  119,  181,   37,   87,   91,   37,   41,   42,   43,
   44,   45,   33,   47,   66,  194,   -1,  284,  285,  286,
  287,  288,   -1,   -1,   -1,  257,  284,  285,  286,  287,
   -1,   -1,   -1,   37,  257,   -1,  258,   41,   42,   43,
   44,   45,  264,   47,  266,  267,  268,  269,  123,   -1,
  125,   -1,  284,  285,  286,  287,   60,   -1,   62,   93,
   -1,  284,  285,  286,  287,  257,   -1,   37,   -1,   -1,
   -1,   41,   42,   43,   44,   45,   37,   47,   -1,  257,
   41,   42,   43,   44,   45,   -1,   47,   -1,   -1,   93,
   60,  125,   62,  258,  259,  260,  261,  262,   -1,   60,
   -1,   62,   37,   -1,   -1,   -1,   41,   42,   43,   44,
   45,   -1,   47,   -1,   -1,   -1,  281,  282,   -1,   -1,
  123,  125,  125,   93,   -1,   60,   -1,   62,   -1,   -1,
   -1,   -1,   93,  284,  285,  286,  287,  288,  289,  263,
  264,  265,  266,  267,  268,  269,  284,  285,  286,  287,
  288,  289,   37,   -1,   -1,  125,   41,   42,   93,   44,
   -1,   37,   47,   -1,  125,   41,   42,   -1,   44,   37,
   -1,   47,   -1,   41,   42,   -1,   44,   -1,   -1,   47,
   -1,   -1,   -1,  258,   -1,   -1,   32,   -1,  263,  264,
  125,  266,  267,  268,  269,  270,  271,  272,  273,  274,
   -1,  276,  277,  278,  279,   51,   52,   53,   93,   -1,
   -1,   -1,   -1,  123,   -1,   -1,  264,   93,  266,  267,
  268,  269,   68,  257,   -1,   93,   -1,   73,   74,   75,
   76,   77,   78,   79,   80,   81,   82,   83,   84,   85,
  125,   87,   -1,   89,   -1,   -1,   -1,   -1,   -1,  125,
   -1,   -1,   -1,  257,  100,  258,   -1,  125,   -1,   -1,
  263,  264,   -1,  266,  267,  268,  269,  270,  271,  272,
  273,  274,    1,  276,  277,  278,  279,  123,   -1,   -1,
  284,  285,  286,  287,  130,   -1,   -1,  257,  259,  260,
  261,  262,   -1,   -1,   -1,   -1,  257,   -1,  144,   28,
   -1,   -1,   -1,   -1,   33,   -1,   -1,   -1,   -1,   -1,
  281,  282,   -1,   -1,  284,  285,  286,  287,   -1,   -1,
   -1,  167,  257,  284,  285,  286,  287,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  182,   66,  184,   -1,
   -1,   -1,   -1,   -1,  190,   -1,   -1,   -1,  258,  284,
  285,  286,  287,  263,  264,  201,  266,  267,  268,  269,
  270,  271,  272,  273,  274,   94,  276,  277,  278,  279,
   -1,   -1,  257,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  257,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,  131,  132,   -1,   -1,  135,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  155,
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
"expression_list : expression_list ',' expression",
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
#line 214 "parser.y"


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
#line 571 "y.tab.c"

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
