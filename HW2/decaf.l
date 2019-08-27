%{
#include <stdio.h>
#include <string.h>
int line = 1;
%}


Void void
String string
This this
While while
Break break
ReadInteger ReadInteger
Int int
Class class
Extends extends
If if
New new
ReadLine ReadLine
Double doubel
Interface interface
Implements implements
Else else
NewArray NewArray
Bool bool
Null null
For for
Return return
Print Print
Continue continue
Extern extern

Identifier [a-zA-Z]+[a-zA-Z0-9_]*
Blank [ ]
Tab \t
True true
False false
Base10int [-+]?[0-9]+
Base8int [-+]?"0"[Xx][0-9a-fA-F]+
DoubleConstant1 [-+]?[0-9]+"."[0-9]*
DoubleConstant2 [-+]?[0-9]+"."[0-9]*[Ee]([+-]?)[0-9]+

StringConstant \"[ a-zA-Z0-9\'`~!@#$%^&\*()_\-=\+\]\[\{\},\.?]*(\\[ntvrfb\\"'a0])*\"
CharConstant1 \'[ a-zA-Z0-9\"`~!@#$%^&\*()_\-=\+\]\[\{\},\.?]\'
CharConstant2 \'\\[ntvrfb\\"'a0]\'
CommentType1 "/*".*"*/"
CommentType2 "//".*

Plus "+"
Minus "-"
And "&&"
Assign "="
Comma ","
Div "/"
Dot "."
Eq "=="
Geq ">="
Gt ">"
LeftShift "<<"
Leq "<="
LParen "("
RParen ")"
Lt "<"
Mod "%"
Mult "*"
Neq "!="
Not "!"
Or "||"
RightShift ">>"
Semicolon ";"
LeftCurlyBraces "{"
RightCurlyBraces "}"
LeftSB "["
RightSB "]"
Line \n


%%
{Void} {printf("T_VOID %s\n", yytext);}
{String} {printf("T_STRINGTYPE %s\n", yytext);}
{This} {printf("T_THIS %s\n", yytext);}
{While} {printf("T_WHILE %s\n", yytext);}
{Break} {printf("T_BREAK %s\n", yytext);}
{ReadInteger} {printf("T_READINTEGER %s\n", yytext);}
{Int} {printf("T_INTTYPE %s\n", yytext);}
{Class} {printf("T_CLASS %s\n", yytext);}
{Extends} {printf("T_EXTENDS %s\n", yytext);}
{If} {printf("T_IF %s\n", yytext);}
{New} {printf("T_NEW %s\n", yytext);}
{ReadLine} {printf("T_READLINE %s\n", yytext);}
{Double} {printf("T_DOUBLE %s\n", yytext);}
{Interface} {printf("T_INTERFACE %s\n", yytext);}
{Implements} {printf("T_IMPLEMENTS %s\n", yytext);}
{Else} {printf("T_ELSE %s\n", yytext);}
{NewArray} {printf("T_NEWARRAY %s\n", yytext);}
{Bool} {printf("T_BOOLTYPE %s\n", yytext);}
{Null} {printf("T_NULL %s\n", yytext);}
{For} {printf("T_FOR %s\n", yytext);}
{Return} {printf("T_RETURN %s\n", yytext);}
{Print} {printf("T_PRINT %s\n", yytext);}
{Continue} {printf("T_CONTINUE %s\n", yytext);}
{Extern} {printf("T_EXTERN %s\n", yytext);}

{Line} {printf("T_WHITESPACE \\n\n"); line++;}
{Blank} {printf("T_WHITESPACE %s\n", yytext);}
{Tab} {}

{True} {printf("T_TRUE %s\n", yytext);}
{False} {printf("T_FALSE %s\n", yytext);}
{Identifier} {printf("T_ID %s\n", yytext);}

{Base10int} {printf("T_INTCONSTANT %s\n", yytext);}
{Base8int} {printf("T_INTCONSTANT %s\n", yytext);}

{DoubleConstant1} {printf("T_DOUBLECONSTANT %s\n", yytext);}
{DoubleConstant2} {printf("T_DOUBLECONSTANT %s\n", yytext);}

{StringConstant} {printf("T_STRINGCONSTANT %s\n", yytext);}
{CharConstant1} {printf("T_CHARCONSTANT %s\n", yytext);}
{CharConstant2} {printf("T_CHARCONSTANT %s\n", yytext);}

{CommentType1} {printf("T_COMMENT %s\n", yytext);}
{CommentType2} {printf("T_COMMENT %s\n", yytext);}

{Plus} {printf("T_PLUS %s\n", yytext);}
{Minus} {printf("T_MINUS %s\n", yytext);}
{And} {printf("T_AND %s\n", yytext);}
{Assign} {printf("T_ASSIGN %s\n", yytext);}
{Comma} {printf("T_COMMA %s\n", yytext);}
{Div} {printf("T_DIV %s\n", yytext);}
{Dot} {printf("T_DOT %s\n", yytext);}
{Eq} {printf("T_EQ %s\n", yytext);}
{Geq} {printf("T_GEQ %s\n", yytext);}
{Gt} {printf("T_GT %s\n", yytext);}
{LeftShift} {printf("T_LEFTSHIFT %s\n", yytext);}
{Leq} {printf("T_LEQ %s\n", yytext);}
{LParen} {printf("T_LPAREN %s\n", yytext);}
{RParen} {printf("T_RPAREN %s\n", yytext);}
{Lt} {printf("T_LT %s\n", yytext);}
{Mod} {printf("T_MOD %s\n", yytext);}
{Mult} {printf("T_MULT %s\n", yytext);}
{Neq} {printf("T_NEQ %s\n", yytext);}
{Not} {printf("T_NOT %s\n", yytext);}
{Or} {printf("T_OR %s\n", yytext);}
{RightShift} {printf("T_RIGHTSHIFT %s\n", yytext);}
{Semicolon} {printf("T_SEMICOLON %s\n", yytext);}
{LeftCurlyBraces} {printf("T_LCB %s\n", yytext);}
{RightCurlyBraces} {printf("T_RCB %s\n", yytext);}
{LeftSB} {printf("T_LSB %s\n", yytext);}
{RightSB} {printf("T_RSB %s\n", yytext);}


<<EOF>> return 0;
. {printf("Lexical Error on line : %d\n", line);}
%%

int yywrap(){}

void yyerror(char *s){
	printf("Error :: %s\n", s);
}
int main(){
	extern FILE* yyin;
	char name[20];
	printf("Please Enter the name of file\n");
	scanf("%s", name);
	yyin = fopen(name, "r"); // read only  
	yylex();
	return 0;
}