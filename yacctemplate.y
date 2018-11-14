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
%token '(' ')' ',' ';' '[' ']' '{' '}' '='
//%right '-'
%left '*' '/' '%'
%left '+' '-'
%left '<' '>' LE EQ GE NE
%right '!'
%left AND
%left OR
%%

program : decl_and_def_list
	;

decl_and_def_list : decl_and_def_list declaration_list
			| decl_and_def_list definition_list
			| definition_list
			| declaration_list
			;

declaration_list : declaration_list const_decl
                 | declaration_list var_decl
                 | declaration_list funct_decl
				 | const_decl
				 | var_decl
				 | funct_decl
				 |
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

identifier_list : identifier_list ',' identifier_list
				| identifier
				| ID '=' expression
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
			;

funct_decl : scalar_type ID '(' arguments ')' SEMICOLON
		| scalar_type ID '(' ')' SEMICOLON
		| VOID ID '(' arguments ')' SEMICOLON
		| VOID ID '(' ')' SEMICOLON
		;

funct_defi : scalar_type ID '(' arguments ')' compound
		| VOID ID '(' arguments ')' compound
		;
	
arguments : nomempty_arguments
		|
		;

nomempty_arguments : arguments ',' argument
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
		| '{' '}'
	;

compound_list : declaration_list_const_var compound_list
			| statement compound_list
			| statement
			| declaration_list_const_var
	;

declaration_list_const_var : declaration_list_const_var const_decl
                 | declaration_list_const_var var_decl
				 | const_decl
				 | var_decl
				;

simple : variable_reference '=' expression SEMICOLON
	| PRINT variable_reference SEMICOLON
	| PRINT expression SEMICOLON
	| READ variable_reference
	;

variable_reference : ID
				| array_reference
				;

array_reference : ID array_expre
			;

array_expre : '[' expression ']' array_expre
		| '[' expression ']'
		;

expression : expression_component
		| expression operator expression
		| '(' expression ')'
		| '!' expression
		| '-' expression
		;

expression_component : literal_const 
				| ID
				| funciton_invocation
				| array_reference
				;

operator : '-' 
		| '*'
		| '/'
		| '%'
		| '+'
		| logical
		| AND
		| OR
		;

logical : '<'
		| '>'
		| LE
		| EQ
		| GE
		| NE
		;

conditional : IF '(' boolean_expression ')' compound ELSE compound
		| IF '(' boolean_expression ')' compound
		;


while : WHILE '(' boolean_expression ')' compound
	| DO compound WHILE '(' boolean_expression ')'
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

increment_expression : expression
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
