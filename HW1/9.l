%{
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
#include <vector>
#include <iostream>
#include <fstream>
#include <string>
string str;
int count = 0;
int line = 0;
vector<int> linelist;
int bs = 0;
%}

line \n
word [a-zA-z0-9]+
blank [ ]
%%
{line} {
	line++;
}
{word} {
	string tmp1(yytext);
	if(tmp1 == str){
		count++;
		linelist.push_back(line);
	}
}
{blank} {
	bs++;
}
%%

int yywrap(){}
void printlines(char name[20]){
	ifstream myfile(name);
	int i = 0;
	int d = 0;
	char st[1000];
	while(i < linelist.size()){
		int l = linelist[i];
		i++;
		while(d <= l){
			myfile.getline(st, 1000);
			d++;
		}
		cout << l + 1 << ":" << st << endl;
	}
}

int main(){
	extern FILE* yyin;
	char name[20];
	printf("Please Enter the name of file\n");
	scanf("%s", name);
	printf("Please Enter the text you want to search in file\n");
	cin >> str;
	yyin = fopen(name, "r"); // read only
	yylex();
	cout << count << endl;
	printlines(name);  
	return 0;
}