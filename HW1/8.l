%{
int l = 1;
#include <stdio.h>
#include <string.h>
%}

line .*\n
%%

{line} {l++; }

%%

int yywrap(){}

int main(){
	extern FILE* yyin;
	char name[20];
	printf("Please Enter the name of file\n");
	scanf("%s", name);
	yyin = fopen(name, "r"); // read only  
	yylex();
	printf("%d\n", l);
	return 0;
}