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
   23,   30,   30,   31,   32,   32,   13,   13,   13,   13,
   13,   13,   33,   33,   33,   33,   34,   34,   34,   34,
   34,   34,   34,   34,   36,   36,   36,   36,   36,   36,
   24,   24,   25,   25,   37,   26,   38,   38,   38,   39,
   39,   40,   40,   27,   27,   27,   28,   35,   15,   15,
   15,
};
static const YYINT yylen[] = {                            2,
    1,    2,    2,    2,    2,    0,    1,    1,    1,    1,
    3,    1,    1,    1,    1,    1,    1,    2,    3,    4,
    3,    1,    5,    3,    6,    4,    3,    4,    5,    3,
    1,    1,    1,    1,    1,    1,    6,    6,    6,    6,
    1,    0,    3,    1,    2,    1,    1,    1,    1,    1,
    1,    1,    3,    2,    2,    2,    0,    4,    3,    3,
    2,    1,    1,    2,    4,    3,    1,    5,    3,    3,
    2,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    7,    5,    5,    7,    1,    8,    3,    4,    0,    1,
    0,    1,    0,    3,    2,    2,    1,    5,    3,    1,
    0,
};
static const YYINT yydefred[] = {                         0,
    0,   14,    0,   13,   15,   16,   12,    0,    1,    0,
    0,    7,    8,    9,   10,    0,    0,    0,    2,    0,
    0,    3,    0,    0,   22,    0,    0,    0,    4,    5,
    0,    0,    0,    0,   11,    0,    0,   28,    0,    0,
    0,   44,    0,    0,   34,   31,   32,   33,   35,   36,
    0,    0,    0,   24,   73,   76,    0,   75,    0,    0,
    0,   21,    0,    0,   45,    0,    0,    0,    0,    0,
   64,   72,   71,    0,   78,   79,   80,   81,   77,   85,
   86,   87,   88,   89,   90,   83,   84,    0,   82,    0,
    0,   26,    0,    0,    0,   18,   38,    0,   40,   43,
   20,    0,    0,    0,   70,    0,   69,   37,   39,    0,
   23,    0,   29,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   46,    0,   47,   48,
   49,   50,   51,   52,    0,    0,   63,  107,    0,    0,
    0,    0,   27,   25,    0,   61,    0,    0,    0,    0,
    0,    0,    0,    0,  106,  105,    0,   55,   54,    0,
   56,   53,    0,   65,  109,  108,   68,   60,   59,   95,
    0,    0,    0,    0,    0,    0,  104,    0,    0,    0,
    0,    0,    0,    0,   58,   93,    0,    0,   97,    0,
  100,    0,    0,    0,   98,    0,   94,   91,  102,    0,
   96,
};
static const YYINT yydgoto[] = {                          8,
    9,   20,   21,   22,   12,   13,   14,   15,   16,   24,
   25,   34,  103,   92,  104,   27,   55,   40,  127,   41,
   42,  128,  129,  130,  131,  132,  133,  134,  135,  136,
   56,   71,   57,   88,   58,   89,  171,  176,  192,  200,
};
static const YYINT yysindex[] = {                         1,
  -93,    0, -229,    0,    0,    0,    0,    0,    0,    1,
    1,    0,    0,    0,    0, -220, -214,    6,    0,    1,
    1,    0,   15,  -43,    0,   16, -198,  -93,    0,    0,
 -181,   38,  -93,   20,    0, -173,   45,    0, -168,   57,
   55,    0,   22,  -18,    0,    0,    0,    0,    0,    0,
   38,   38,   38,    0,    0,    0,   27,    0,   68,    3,
  -34,    0,   87,   44,    0, -109,  -93,   44,   38,   38,
    0,    0,    0,  104,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   63,    0, -108,
   38,    0,   38,   89, -214,    0,    0,  -69,    0,    0,
    0,   54,  109,  128,    0,   38,    0,    0,    0,   81,
    0,    3,    0,  -18,  -88,   71,  123,   56,  171,  172,
  -44,  -40,   38,  -69,  -69,  -39,    0,  -69,    0,    0,
    0,    0,    0,    0,   93,  161,    0,    0,  132,   38,
  -33,  187,    0,    0,  132,    0,  -18,  -19,  -14,    0,
   38,  -28,   38, -128,    0,    0,  -12,    0,    0,   14,
    0,    0,   38,    0,    0,    0,    0,    0,    0,    0,
  213,  218,  220,  202,   13,   23,    0,   24,   56,   38,
   56,   38,  227,   38,    0,    0,  238,   26,    0,   38,
    0,   46,   52,   56,    0,   38,    0,    0,    0,  254,
    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  302,    0,    0,    0,    0,    0,    0,    0,    0,  302,
  302,    0,  -42,    0,    0,    0,    0,  269,    0,    0,
    0,    0,  269,  -41,    0,    0,    0,    0,    0,    0,
  277,    0,    0,  -11,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,  -32,    0,    0,    0,
  -42,    0,   82,   69,    0,    0,    0,   51,    0,  287,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  210,    0,    0,  -41,    0,    0,    0,  215,    0,    0,
    0,    0,  -25,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  280,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  215,  215,    0,    0,  215,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  -37,  -24,
    0,    0,    0,    0, -112,    0,   -2,    0,    0,    5,
    0,    0,    0,   85,    0,    0,    0,    0,    0,  -42,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   90,    0,    0,    0,  -86,    0,    0,
    0,    0,    0,    0,    0,  305,    0,    0,    0,    0,
    0,
};
static const YYINT yygindex[] = {                         0,
  338,   18,   84,  122,   -7,   -1,    0,    0,  333,    0,
   86,  192,  285,  231,  -72,  255,  312,  318,   78,    0,
  288,    0,    0,    0,    0,    0,    0,    0,  -62,  -95,
    4,  217,    0,    0,    9,    0, -100,    0,    0,    0,
};
#define YYTABLESIZE 487
static const YYINT yytable[] = {                         66,
   36,   17,   18,   66,   66,   66,   66,   66,   67,   66,
   62,   67,   62,   98,   98,  110,  111,   10,  110,  146,
  149,   70,   66,   66,   66,   74,   93,   10,   18,   74,
   74,   74,   74,   74,   74,   74,   92,   23,   92,   74,
   74,   76,   74,   26,   74,   28,   76,   76,   74,   76,
   74,   76,  173,   98,   33,   66,   31,   74,   38,   74,
   67,  158,  159,   77,   76,  161,   76,  165,   75,   78,
   52,   79,   69,   76,   32,   32,   37,   53,   43,  187,
   60,   74,   51,   11,   61,   66,   80,   66,   81,   64,
  124,   19,   67,   11,   19,   52,  125,   66,   67,  110,
  111,  137,  106,   52,   31,   31,  138,   51,   90,   17,
   53,   19,   17,   74,   68,   51,  124,  124,  137,  150,
  124,   62,  125,  125,   65,   91,  125,  137,  137,  174,
   95,  137,  138,  138,   31,    2,  138,    4,    5,    6,
    7,   29,   30,   99,  105,   62,  139,   97,  108,  112,
   62,   62,  140,   62,   62,   62,   62,   62,   62,   62,
   62,   62,  151,   62,   62,   62,   62,  109,  141,  145,
    2,   92,    4,    5,    6,    7,   92,   92,   98,   92,
   92,   92,   92,   92,   92,   92,   92,   92,  114,   92,
   92,   92,   92,    1,    2,  152,    4,    5,    6,    7,
  115,  116,  117,  118,  119,  143,  120,  121,  122,  123,
  153,  154,  155,   35,   17,   18,  156,  162,  160,   66,
   66,  163,   69,  166,   67,   66,   66,  167,   66,   66,
   66,   66,   66,   66,   66,   66,   66,  168,   66,   66,
   66,   66,  169,  172,  177,   74,   66,   66,   66,   66,
   66,   66,   94,  179,   62,   96,  186,  180,  188,  101,
  181,   63,  182,    1,    2,    3,    4,    5,    6,    7,
  183,  198,   74,   74,   74,   74,   74,   74,  193,  184,
  185,   74,   74,   74,   74,   74,   74,  190,   76,   76,
   76,   76,   76,   76,  201,   44,   45,   46,   47,   48,
  194,    6,  196,   45,   46,   47,   48,   19,  197,   42,
   82,   83,   84,   85,   86,   87,   54,   41,   49,   50,
   44,   45,   46,   47,   48,   49,   50,  111,  147,   45,
   46,   47,   48,   17,  111,   72,   73,   74,   30,   57,
   62,   99,  144,   49,   50,  103,  101,   19,   63,  113,
   59,   49,   50,  102,  100,  164,    0,    0,    0,    0,
   39,    0,    0,    0,    0,   39,    0,    0,    0,    0,
    0,    0,  107,    0,    0,    0,    0,  111,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  142,    0,    0,    0,    0,    0,    0,    0,    0,   39,
  148,    0,    0,    0,    0,    0,    0,  157,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  126,    0,    0,    0,    0,  170,    0,  170,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  178,    0,    0,
    0,    0,    0,    0,    0,    0,  126,  126,    0,    0,
  126,    0,    0,    0,  170,    0,  189,    0,  191,    0,
    0,    0,    0,    0,  195,    0,    0,    0,    0,    0,
  199,    0,    0,    0,    0,    0,  175,
};
static const YYINT yycheck[] = {                         37,
   44,   44,   44,   41,   42,   43,   44,   45,   41,   47,
  123,   44,  125,  123,  123,   41,   41,    0,   91,  115,
  116,   40,   60,   61,   62,   37,   61,   10,  258,   41,
   42,   43,   44,   45,   37,   47,  123,  258,  125,   42,
   43,   37,   45,  258,   47,   40,   42,   43,   60,   45,
   62,   47,  153,  123,   40,   93,   91,   60,  257,   62,
   93,  124,  125,   37,   60,  128,   62,  140,   42,   43,
   33,   45,   91,   47,   61,   61,   61,   40,  260,  180,
   61,   93,   45,    0,  258,  123,   60,  125,   62,  258,
   98,   41,  125,   10,   44,   33,   98,   41,   44,  125,
  125,   98,   40,   33,   91,   91,   98,   45,   41,   41,
   40,   61,   44,  125,   93,   45,  124,  125,  115,  116,
  128,   36,  124,  125,   39,  123,  128,  124,  125,  258,
   44,  128,  124,  125,   91,  264,  128,  266,  267,  268,
  269,   20,   21,   66,   41,  258,   93,  257,  257,   61,
  263,  264,   44,  266,  267,  268,  269,  270,  271,  272,
  273,  274,   40,  276,  277,  278,  279,   90,   41,  258,
  264,  258,  266,  267,  268,  269,  263,  264,  123,  266,
  267,  268,  269,  270,  271,  272,  273,  274,  258,  276,
  277,  278,  279,  263,  264,  118,  266,  267,  268,  269,
  270,  271,  272,  273,  274,  125,  276,  277,  278,  279,
   40,   40,  257,  257,  257,  257,  257,  125,  258,  257,
  258,   61,   91,  257,  257,  263,  264,   41,  266,  267,
  268,  269,  270,  271,  272,  273,  274,  257,  276,  277,
  278,  279,  257,  272,  257,  257,  284,  285,  286,  287,
  288,  289,   61,   41,  257,   64,  179,   40,  181,   68,
   41,  257,   61,  263,  264,  265,  266,  267,  268,  269,
  258,  194,  284,  285,  286,  287,  288,  289,   41,  257,
  257,  284,  285,  286,  287,  288,  289,   61,  284,  285,
  286,  287,  288,  289,   41,  258,  259,  260,  261,  262,
  275,    0,  257,  259,  260,  261,  262,  257,  257,   41,
  284,  285,  286,  287,  288,  289,   32,   41,  281,  282,
  258,  259,  260,  261,  262,  281,  282,   41,  258,  259,
  260,  261,  262,    1,  125,   51,   52,   53,  257,  125,
   61,  257,  112,  281,  282,   41,  257,   10,   37,   95,
   33,  281,  282,   69,   67,  139,   -1,   -1,   -1,   -1,
   28,   -1,   -1,   -1,   -1,   33,   -1,   -1,   -1,   -1,
   -1,   -1,   88,   -1,   -1,   -1,   -1,   93,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
  106,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   67,
  116,   -1,   -1,   -1,   -1,   -1,   -1,  123,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   98,   -1,   -1,   -1,   -1,  151,   -1,  153,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  163,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  124,  125,   -1,   -1,
  128,   -1,   -1,   -1,  180,   -1,  182,   -1,  184,   -1,
   -1,   -1,   -1,   -1,  190,   -1,   -1,   -1,   -1,   -1,
  196,   -1,   -1,   -1,   -1,   -1,  154,
};
#define YYFINAL 8
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 289
#define YYUNDFTOKEN 332
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
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
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
"simple : variable_reference '=' expression SEMICOLON",
"simple : PRINT variable_reference SEMICOLON",
"simple : PRINT expression SEMICOLON",
"simple : READ variable_reference",
"variable_reference : ID",
"variable_reference : array_reference",
"array_reference : ID array_expre",
"array_expre : '[' expression ']' array_expre",
"array_expre : '[' expression ']'",
"expression : expression_component",
"expression : expression_component operator '(' expression ')'",
"expression : expression_component operator expression",
"expression : '(' expression ')'",
"expression : '!' expression",
"expression : '-' expression",
"expression_component : literal_const",
"expression_component : ID",
"expression_component : funciton_invocation",
"expression_component : array_reference",
"operator : '-'",
"operator : '*'",
"operator : '/'",
"operator : '%'",
"operator : '+'",
"operator : logical",
"operator : AND",
"operator : OR",
"logical : '<'",
"logical : '>'",
"logical : LE",
"logical : EQ",
"logical : GE",
"logical : NE",
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
"increment_expression : expression",
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
#line 228 "yacctemplate.y"


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
#line 528 "y.tab.c"

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
