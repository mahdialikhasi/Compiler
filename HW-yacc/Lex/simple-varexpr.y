%{
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
double symtbl[26];
bool issym[26];
%}

%union {
  int rvalue; /* value of evaluated expression */
  int lvalue; /* index into symtbl for variable name */
  double doubleValue;
}

%token PRECEDENCE
%token <rvalue> NUMBER
%token <doubleValue> DOUBLE
%token <lvalue> NAME 
%token T_EXP T_SQRT T_LOG T_ENDOFLINE

%right '='
%left '+' '-'
%left '*' '/'
%right PRECEDENCE


%type <doubleValue> expression

%%
statement_list : statement T_ENDOFLINE statement_list
	| statement
	;

statement: NAME '=' expression { symtbl[$1] = $3; issym[$1] = true; }
	| expression  { printf("%lf\n", $1); }
	;

expression: expression '+' expression { $$ = $1 + $3; }
	| expression '-' expression { $$ = $1 - $3; }
	| expression '*' expression { $$ = $1 * $3; }
	| expression '/' expression { $$ = $1 / $3; }
	| NUMBER { $$ = $1; }
	| DOUBLE { $$ = $1; }
	| T_EXP '(' expression ')' { $$ = exp($3); } 
	| T_SQRT '(' expression ')' { $$ = sqrt($3); }
	| T_LOG '(' expression ')' { $$ = log($3); }
	| NAME {$$ = symtbl[$1]; if(!issym[$1]){printf("error, use of variable before declaration\n");} }
	| '+' expression  %prec PRECEDENCE    { $$ =  $2; }
	| '-' expression  %prec PRECEDENCE    { $$ = -$2; }
    | '(' expression ')'              { $$ =  $2; }
	;
%%

