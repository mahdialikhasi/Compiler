%{
#include <stdio.h>
#include <string.h>
%}

%x C_COMMENT

%%

"/*"            { BEGIN(C_COMMENT); }
<C_COMMENT>"*/" { BEGIN(INITIAL); }
<C_COMMENT>.    { }

"//".* {}

%%

int yywrap(){}

int main(){
	extern FILE* yyin;
	char name[20];
	printf("Please Enter the name of file\n");
	scanf("%s", name);
	yyin = fopen(name, "r"); // read only  
	yylex();
	return 0;
}