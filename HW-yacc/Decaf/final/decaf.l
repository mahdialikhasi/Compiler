%{
	#include <stdio.h>
	#include <string.h>
	#include <stdio.h>
	#include "y.tab.h"
%}

Identifier [a-zA-Z]+[a-zA-Z0-9_]*

Base10int [0-9]+
Base16int "0"[Xx][0-9a-fA-F]+
DoubleConstant1 [0-9]+"."[0-9]*
DoubleConstant2 [0-9]+"."[0-9]*[Ee]([+-]?)[0-9]+

StringConstant \"[ a-zA-Z0-9\'`~!@#$%^&\*()_\-=\+\]\[\{\},\.?]*(\\[ntvrfb\\"'a0])*\"
CharConstant1 \'[ a-zA-Z0-9\"`~!@#$%^&\*()_\-=\+\]\[\{\},\.?]\'
CharConstant2 \'\\[ntvrfb\\"'a0]\'

CommentType1 "/*".*"*/"
CommentType2 "//".*

%%
void 		{return T_VOID; }
string 		{return T_STRINGTYPE; }
this 		{return T_THIS; }
while 		{return T_WHILE; }
break 		{return T_BREAK; }
ReadInteger {return T_READINTEGER; }

int 		{return T_INTTYPE; }
class 		{return T_CLASS; }
extends 	{return T_EXTENDS; }
if 			{return T_IF; }
New 		{return T_NEW; }
ReadLine 	{return T_READLINE; }

doubel 		{return T_DOUBLE; }
interface 	{return T_INTERFACE; }
implements 	{return T_IMPLEMENTS; }
else 		{return T_ELSE; }
NewArray 	{return T_NEWARRAY; }

bool 		{return T_BOOLTYPE; }
null 		{return T_NULL; }
for 		{return T_FOR; }
return 		{return T_RETURN; }
Print 		{return T_PRINT; }

continue 	{return T_CONTINUE; }
extern 		{return T_EXTERN; }

"\n" 		{/*return T_WHITESPACE;*/ }
[ ]+ 		{/*return T_WHITESPACE;*/ }
"\t" 		{/*return T_WHITESPACE;*/ }

true 		{yylval.bvalue = 1; return T_BOOLEANCONSTANT; }
false 		{yylval.bvalue = 0;return T_BOOLEANCONSTANT; }

{Identifier} {yylval.name = (char * )malloc(strlen(yytext)+1);strcpy(yylval.name,yytext); return T_ID; }

{Base10int}	{ yylval.rvalue = atoi(yytext); return T_INTCONSTANT; }
{Base16int}	{ yylval.rvalue = strtol(yytext, NULL, 16); return T_INTCONSTANT; }

{DoubleConstant1} { sscanf(yytext, "%lf", &yylval.dvalue); return T_DOUBLECONSTANT; }
{DoubleConstant2} { sscanf(yytext, "%lf", &yylval.dvalue); return T_DOUBLECONSTANT; }


{StringConstant} { yylval.svalue = yytext; return T_STRINGCONSTANT; }
{CharConstant1} { yylval.svalue = yytext; return T_CHARCONSTANT; }
{CharConstant2} { yylval.svalue = yytext; return T_CHARCONSTANT; }

{CommentType1} {/*return T_COMMENT; */}
{CommentType2} {/*return T_COMMENT; */}

"+" 		{return T_PLUS; }
"-" 		{return T_MINUS; }
"&&" 		{return T_AND; }
"=" 		{return T_ASSIGN; }
"," 		{return T_COMMA; }
"/" 		{return T_DIV; }
"." 		{return T_DOT; }
"==" 		{return T_EQ; }
">=" 		{return T_GEQ; }
">" 		{return T_GT; }
"<<" 		{return T_LEFTSHIFT; }
"<=" 		{return T_LEQ; }
"(" 		{return T_LPAREN; }
")" 		{return T_RPAREN; }
"<" 		{return T_LT; }
"%" 		{return T_MOD; }
"*" 		{return T_MULT; }
"!=" 		{return T_NEQ; }
"!" 		{return T_NOT; }
"||" 		{return T_OR; }
">>" 		{return T_RIGHTSHIFT; }
";" 		{return T_SEMICOLON; }
"{" 		{return T_LCB; }
"}" 		{return T_RCB; }
"[" 		{return T_LSB; }
"]" 		{return T_RSB; }


<<EOF>> return 0;
. {printf("Lexical Error on line\n");}
%%
int main(int argc, char *argv[])	
{	
	yyparse();	/* REQUIRED */	
}