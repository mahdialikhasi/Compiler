#include <iostream>
using namespace std;
#include <algorithm>
#include <stdio.h>
#include <vector>
#include <string>

void key_word(string a, vector<vector<vector<pair<char, int> > > > &graph){
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	int rowNo = graph.size() - 1;
	for (int i = 0; i < a.size(); ++i)
	{
		graph[rowNo].push_back(vector<pair<char, int> >()); // add node
		int nodeNo = graph[rowNo].size() - 1;
		graph[rowNo][nodeNo].push_back(make_pair(a[i], nodeNo + 1)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add Accept
}

void create_graph(vector<vector<vector<pair<char, int> > > > &graph, vector<string> &lex){
	// void
	key_word("void", graph);	// graph[0]
	lex.push_back("T_VOID");
	
	// string
	key_word("string", graph);	// graph[1]
	lex.push_back("T_STRINGTYPE");

	// this
	key_word("this", graph);	// graph[2]
	lex.push_back("T_THIS");

	// while
	key_word("while", graph);	// graph[3]
	lex.push_back("T_WHILE");

	// break
	key_word("break", graph);	// graph[4]
	lex.push_back("T_BREAK");

	// ReadInteger
	key_word("ReadInteger", graph);	// graph[5]
	lex.push_back("T_READINTEGER");

	// int
	key_word("int", graph);	// graph[6]
	lex.push_back("T_INTTYPE");

	// class
	key_word("class", graph);	// graph[7]
	lex.push_back("T_CLASS");

	// extends
	key_word("extends", graph);	// graph[8]
	lex.push_back("T_EXTENDS");

	// if
	key_word("if", graph);	// graph[9]
	lex.push_back("T_IF");

	// new
	key_word("new", graph);	// graph[10]
	lex.push_back("T_NEW");

	// ReadLine
	key_word("ReadLine", graph);	// graph[11]
	lex.push_back("T_READLINE");

	// doubel
	key_word("doubel", graph);	// graph[12]
	lex.push_back("T_DOUBLE");

	// interface
	key_word("interface", graph);	// graph[13]
	lex.push_back("T_INTERFACE");

	// implements
	key_word("implements", graph);	// graph[14]
	lex.push_back("T_IMPLEMENTS");

	// else
	key_word("else", graph);	// graph[15]
	lex.push_back("T_ELSE");

	// NewArray
	key_word("NewArray", graph);	// graph[16]
	lex.push_back("T_NEWARRAY");

	// bool
	key_word("bool", graph);	// graph[17]
	lex.push_back("T_BOOLTYPE");

	// null
	key_word("null", graph);	// graph[18]
	lex.push_back("T_NULL");

	// for
	key_word("for", graph);	// graph[19]
	lex.push_back("T_FOR");

	// return
	key_word("return", graph);	// graph[20]
	lex.push_back("T_RETURN");

	// Print
	key_word("Print", graph);	// graph[21]
	lex.push_back("T_PRINT");

	// continue
	key_word("continue", graph);	// graph[22]
	lex.push_back("T_CONTINUE");

	// extern
	key_word("extern", graph);	// graph[23]
	lex.push_back("T_EXTERN");

	// \n
	string a;
	a.push_back('\n');
	key_word(a, graph);	// graph[24]
	lex.push_back("T_WHITESPACE");

	// 
	key_word(" ", graph);	// graph[25]
	lex.push_back("T_WHITESPACE");

	// \t
	string b;
	a.push_back('\t');
	key_word(b, graph);	// graph[26]
	lex.push_back("T_WHITESPACE");

	// true
	key_word("true", graph);	// graph[27]
	lex.push_back("T_BOOLEANCONSTANT");

	// false
	key_word("false", graph);	// graph[28]
	lex.push_back("T_BOOLEANCONSTANT");

	// "+"
	key_word("+", graph);	// graph[29]
	lex.push_back("T_PLUS");

	// "-"
	key_word("-", graph);	// graph[30]
	lex.push_back("T_MINUS");

	// "&&"
	key_word("&&", graph);	// graph[31]
	lex.push_back("T_AND");

	// "="
	key_word("=", graph);	// graph[32]
	lex.push_back("T_ASSIGN");

	// ","
	key_word(",", graph);	// graph[33]
	lex.push_back("T_COMMA");

	// "/"
	key_word("/", graph);	// graph[34]
	lex.push_back("T_DIV");

	// "."
	key_word(".", graph);	// graph[35]
	lex.push_back("T_DOT");

	// "=="
	key_word("==", graph);	// graph[36]
	lex.push_back("T_EQ");

	// ">="
	key_word(">=", graph);	// graph[37]
	lex.push_back("T_GEQ");

	// ">"
	key_word(">", graph);	// graph[38]
	lex.push_back("T_GT");

	// "<<"
	key_word("<<", graph);	// graph[39]
	lex.push_back("T_LEFTSHIFT");

	// "<="
	key_word("<=", graph);	// graph[40]
	lex.push_back("T_LEQ");

	// "("
	key_word("(", graph);	// graph[41]
	lex.push_back("T_LPAREN");

	// ")"
	key_word(")", graph);	// graph[42]
	lex.push_back("T_RPAREN");

	// "<"
	key_word("<", graph);	// graph[43]
	lex.push_back("T_LT");

	// "%"
	key_word("%", graph);	// graph[44]
	lex.push_back("T_MOD");

	// "*"
	key_word("*", graph);	// graph[45]
	lex.push_back("T_MULT");

	// "!="
	key_word("!=", graph);	// graph[46]
	lex.push_back("T_NEQ");

	// "!"
	key_word("!", graph);	// graph[47]
	lex.push_back("T_NOT");

	// "||"
	key_word("||", graph);	// graph[48]
	lex.push_back("T_OR");

	// ">>"
	key_word(">>", graph);	// graph[49]
	lex.push_back("T_RIGHTSHIFT");

	// ";"
	key_word(";", graph);	// graph[50]
	lex.push_back("T_SEMICOLON");

	// "{"
	key_word("{", graph);	// graph[51]
	lex.push_back("T_LCB");

	// "}"
	key_word("}", graph);	// graph[52]
	lex.push_back("T_RCB");

	// "["
	key_word("[", graph);	// graph[53]
	lex.push_back("T_LSB");

	// "]"
	key_word("]", graph);	// graph[54]
	lex.push_back("T_RSB");

	// identifier // graph[55]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	int rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	int nodeNo = graph[rowNo].size() - 1;
	for (char i = 'a'; i <= 'z'; ++i)
	{
		graph[rowNo][nodeNo].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	for (char i = 'A'; i <= 'Z'; ++i)
	{
		graph[rowNo][nodeNo].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add Accept
	for (char i = 'a'; i <= 'z'; ++i)
	{
		graph[rowNo][nodeNo + 1].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	for (char i = 'A'; i <= 'Z'; ++i)
	{
		graph[rowNo][nodeNo + 1].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][nodeNo + 1].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	graph[rowNo][nodeNo + 1].push_back(make_pair('_', nodeNo + 1)); // add edge
	lex.push_back("T_ID");

	// Base10int // graph[56]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	nodeNo = graph[rowNo].size() - 1;
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][nodeNo].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add Accept
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][nodeNo + 1].push_back(make_pair(i, nodeNo + 1)); // add edge
	}
	lex.push_back("T_INTCONSTANT");

	// Base16int // graph[57]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	graph[rowNo][0].push_back(make_pair('0', 1)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	graph[rowNo][1].push_back(make_pair('x', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('X', 2)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][2].push_back(make_pair(i, 3)); // add edge
	}
	for (char i = 'a'; i <= 'f'; ++i)
	{
		graph[rowNo][2].push_back(make_pair(i, 3)); // add edge
	}
	for (char i = 'A'; i <= 'F'; ++i)
	{
		graph[rowNo][2].push_back(make_pair(i, 3)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][3].push_back(make_pair(i, 3)); // add edge
	}
	for (char i = 'a'; i <= 'f'; ++i)
	{
		graph[rowNo][3].push_back(make_pair(i, 3)); // add edge
	}
	for (char i = 'A'; i <= 'F'; ++i)
	{
		graph[rowNo][3].push_back(make_pair(i, 3)); // add edge
	}
	lex.push_back("T_INTCONSTANT");

	// DoubleConstant1 // graph[58]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 0
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][0].push_back(make_pair(i, 1)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 1
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 1)); // add edge
	}
	graph[rowNo][1].push_back(make_pair('.', 2)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 2
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][2].push_back(make_pair(i, 2)); // add edge
	}
	lex.push_back("T_DOUBLECONSTANT");

	// DoubleConstant2 // graph[59]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 0
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][0].push_back(make_pair(i, 1)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 1
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 1)); // add edge
	}
	graph[rowNo][1].push_back(make_pair('.', 2)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 2
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][2].push_back(make_pair(i, 2)); // add edge
	}
	graph[rowNo][2].push_back(make_pair('e', 3)); // add edge
	graph[rowNo][2].push_back(make_pair('E', 3)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 3
	graph[rowNo][2].push_back(make_pair('e', 4)); // add edge
	graph[rowNo][2].push_back(make_pair('E', 4)); // add edge
	graph[rowNo][3].push_back(make_pair('+', 4)); // add edge
	graph[rowNo][3].push_back(make_pair('-', 4)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 4
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][4].push_back(make_pair(i, 5)); // add edge
	}
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 5
	
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][5].push_back(make_pair(i, 5)); // add edge
	}
	lex.push_back("T_DOUBLECONSTANT");

	// StringConstant // graph[60]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 0
	graph[rowNo][0].push_back(make_pair('"', 1)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 1
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 1)); // add edge
	}
	for (char i = 'a'; i <= 'z'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 1)); // add edge
	}
	for (char i = 'A'; i <= 'Z'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 1)); // add edge
	}
	graph[rowNo][1].push_back(make_pair('\'', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('`', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('!', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('@', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('#', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('$', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('%', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('^', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('&', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('*', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('(', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(')', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('-', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('_', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('=', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('+', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('[', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(']', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('{', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('}', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('|', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(':', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(';', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('.', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(',', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('/', 1)); // add edge
	graph[rowNo][1].push_back(make_pair(' ', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('?', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('<', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('>', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('\\', 2)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 2
	graph[rowNo][2].push_back(make_pair('\\', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('n', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('t', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('v', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('r', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('f', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('b', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('"', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('0', 1)); // add edge
	graph[rowNo][2].push_back(make_pair('a', 1)); // add edge
	graph[rowNo][1].push_back(make_pair('"', 3)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 3
	lex.push_back("T_STRINGCONSTANT");

	// CharConstant1 // graph[61]
	graph.push_back(vector<vector<pair<char, int> > >()); // add row
	rowNo = graph.size() - 1;
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 0
	graph[rowNo][0].push_back(make_pair('\'', 1)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 1
	for (char i = '0'; i <= '9'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 2)); // add edge
	}
	for (char i = 'a'; i <= 'z'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 2)); // add edge
	}
	for (char i = 'A'; i <= 'Z'; ++i)
	{
		graph[rowNo][1].push_back(make_pair(i, 2)); // add edge
	}
	graph[rowNo][1].push_back(make_pair('"', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('`', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('!', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('@', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('#', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('$', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('%', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('^', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('&', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('*', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('(', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(')', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('-', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('_', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('=', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('+', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('[', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(']', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('{', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('}', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('|', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(':', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(';', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('.', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(',', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('/', 2)); // add edge
	graph[rowNo][1].push_back(make_pair(' ', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('?', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('<', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('>', 2)); // add edge
	graph[rowNo][1].push_back(make_pair('\\', 3)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 2
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 3
	graph[rowNo][2].push_back(make_pair('\'', 4)); // add edge
	graph[rowNo].push_back(vector<pair<char, int> >()); // add node 4
	graph[rowNo][3].push_back(make_pair('\\', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('n', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('t', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('v', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('r', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('f', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('b', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('\'', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('0', 2)); // add edge
	graph[rowNo][3].push_back(make_pair('a', 2)); // add edge
	lex.push_back("T_CHARCONSTANT");
}
int main(){
	// create graph
	vector<vector<vector<pair<char, int> > > > graph;
	vector<string> lex;

	create_graph(graph, lex);
	
	string line;
	int lineNo = 0;
	while(getline(cin, line)){
		lineNo++;
		line.push_back('\n');
		line.push_back(' ');

		// initial vector
		vector<pair<int, int> > states;
		vector<pair<int, int> > initail;
		for (int i = 0; i < graph.size(); ++i)
		{
			initail.push_back(make_pair(i, 0));
		}
		states = initail;
		for (int i = 0; i < line.size(); ++i)
		{
			vector<pair<int, int> > new_states;
		// accepting states
			vector<int> acc_states;
		//cout << "-------" << endl;
			for (int j = 0; j < states.size(); ++j)
			{
			// states[j] = pair<x, y> ==> graph[x][y] is a node
				pair<int, int> tmp(states[j]);
			//cout << tmp.first << " " << tmp.second << endl;
				if (tmp.second == graph[tmp.first].size() - 1){
					acc_states.push_back(tmp.first);

				}

				for (int k = 0; k < graph[tmp.first][tmp.second].size(); ++k){
				// graph[tmp.first][tmp.second][k] is edge
					if(graph[tmp.first][tmp.second][k].first == line[i]){
						new_states.push_back(make_pair(tmp.first, graph[tmp.first][tmp.second][k].second));
					}
				}
			}

			states.clear();
			if(new_states.size() == 0){
			// print accepted
				int min = 1000;
				if(acc_states.size() == 0){
					cout << "Lexical error on line " << lineNo << endl;
				}else{
					for (int i = 0; i < acc_states.size(); ++i){
						if(min > acc_states[i])
							min = acc_states[i];
					}
					cout << lex[min] << endl;
					states = initail;
					i--;
				}
			}else{ 
				states = new_states;
			}
		}
	}
	
	

	return 0;
}