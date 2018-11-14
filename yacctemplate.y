%{
#include <stdio.h>
#include <stdlib.h>

extern int linenum;             /* declared in lex.l */
extern FILE *yyin;              /* declared by lex */
extern char *yytext;            /* declared by lex */
extern char buf[256];           /* declared in lex.l */
int yylex();
int yyerror();
%}
%token SEMICOLON    /* ; */
%token ID           /* identifier */
%token SCIENTIFIC INTEGER FLOATCONST STRINGCONST
%token CONST
%token BOOL VOID FLOAT DOUBLE STRING INT
%token READ PRINT
%token WHILE DO IF ELSE FOR CONTINUE BREAK RETURN
%token BOOLEAN TRUE FALSE /* not yet */
//%token '(' ')' ',' ';' '[' ']' '{' '}' '='
//%right '-'
%token LLP
%left '*' '/' '%'
%left '+' '-'
%left '<' '>' LE EQ GE NE
%right '!'
%left AND
%left OR
%%

program : decl_and_def_list
	;

decl_and_def_list : declaration_list decl_and_def_list
			| definition_list decl_and_def_list_mustdef
			;

decl_and_def_list_mustdef : declaration_list decl_and_def_list_mustdef
						| definition_list decl_and_def_list_mustdef
						|
						;			

declaration_list : const_decl
				 | var_decl
				 | funct_decl
				 ;

definition_list : funct_defi
				;

var_decl : scalar_type identifier_list SEMICOLON
         ;

scalar_type : INT
	| FLOAT
	| BOOL
	| DOUBLE
	| STRING
     ; 

identifier : ID
		| ID array_int
	   ;	

array_int : '[' INTEGER ']'
		| '[' INTEGER ']' array_int
		;

identifier_list : identifier_list ',' identifier
				| identifier
				| identifier_list ',' ID '=' expression
				| ID '=' expression
				| identifier_list ',' ID array_int '=' initial_array
				| ID array_int '=' initial_array
				;

initial_array : '{' expression_list '}'
			;

const_decl : CONST scalar_type const_list SEMICOLON
		   ;

const_list : ID '=' literal_const ',' const_list
		| ID '=' literal_const
		;

literal_const : INTEGER
			| FLOATCONST
			| STRINGCONST
			| SCIENTIFIC
			| TRUE
			| FALSE
			;

funct_decl : scalar_type ID '(' arguments ')' SEMICOLON
		| VOID ID '(' arguments ')' SEMICOLON
		;

funct_defi : scalar_type ID '(' arguments ')' compound
		| VOID ID '(' arguments ')' compound
		;
	
arguments : nonempty_arguments
		|
		;

nonempty_arguments : nonempty_arguments ',' argument
		| argument 
		;

argument : scalar_type identifier
		;


statement : compound 
		| simple
		| conditional
		| while
		| for
		| jump
		| procedure_call
		;


compound : '{' compound_list '}'
	;

compound_list : var_decl compound_list
			| const_decl compound_list
			| statement compound_list
			|
	;

simple : ID array_expre '=' expression SEMICOLON
	| PRINT expression SEMICOLON
	| READ ID array_expre
	;


array_expre :  array_expre '[' expression ']'		
	    |
		;

expression : expression_component
		| expression '-' expression
		| expression '*' expression
		| expression '/' expression
		| expression '%' expression
		| expression '+' expression
		| expression AND expression
		| expression OR expression
		| expression '<' expression
		| expression '>' expression
		| expression LE expression
		| expression EQ expression
		| expression GE expression
		| expression NE expression
		| '(' expression ')'
		| '!' expression
		| '-' expression %prec '*'
		;

expression_component : literal_const 
				| ID array_expre
				| funciton_invocation
				;


conditional : IF '(' boolean_expression ')' compound ELSE compound
		| IF '(' boolean_expression ')' compound
		;


while : WHILE '(' boolean_expression ')' compound
	| DO compound WHILE '(' boolean_expression ')' SEMICOLON
	;

boolean_expression : expression
				;

for : FOR '(' initial_expression SEMICOLON control_expression SEMICOLON increment_expression ')'
	;

initial_expression : ID '=' expression
				| scalar_type ID '=' expression
				|
				;

control_expression : expression
				|
				;

increment_expression : ID '=' expression
				|
				;

jump : RETURN expression SEMICOLON
	| BREAK SEMICOLON
	| CONTINUE SEMICOLON
	;

procedure_call : funciton_invocation
			;

funciton_invocation : ID '(' expression_list ')' SEMICOLON
				;
			
expression_list : expression ',' expression_list
				| expression
				|
				;


%%

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
