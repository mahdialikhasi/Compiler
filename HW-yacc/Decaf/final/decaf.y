%code requires{
	#include <stdio.h>
	#include <stdbool.h>
	#include <string.h>
	
	int tabCount;
	typedef struct tnode{
		struct tnode ** childs;
		char *token;
		int size;
	} tnode;
	
	tnode * ProgramNode(char *token, tnode *child);
	tnode * merge(tnode *addchild, tnode *child);
	tnode * NewNodeWithLabel(char *token,tnode ** arr, int size);
	tnode * emptyNode();
	void printtree(tnode *tree);

}

%union {
    int rvalue;  				//real values
    int bvalue; 				//boolean values
    char *svalue;				//string values
    double dvalue; 				//double values
    char *name; 				// +1 for terminating null

    tnode * NTnode;
}

%token <svalue> T_STRINGCONSTANT
%token <svalue> T_CHARCONSTANT
%token <bvalue> T_BOOLEANCONSTANT
%token <rvalue> T_INTCONSTANT
%token <dvalue> T_DOUBLECONSTANT
%token <name> T_ID 
%token    T_VOID T_STRINGTYPE T_THIS T_WHILE T_BREAK T_READINTEGER
%token    T_INTTYPE T_CLASS T_EXTENDS T_IF T_NEW T_READLINE T_DOUBLE
%token    T_INTERFACE T_IMPLEMENTS T_ELSE T_NEWARRAY T_BOOLTYPE T_NULL
%token    T_FOR T_RETURN T_PRINT T_CONTINUE T_EXTERN T_WHITESPACE
%token    T_COMMENT T_PLUS T_MINUS T_AND T_ASSIGN T_COMMA T_DIV T_DOT T_EQ
%token    T_GEQ T_GT T_LEFTSHIFT T_LEQ T_LPAREN T_RPAREN T_LT T_MOD T_MULT
%token    T_NEQ T_NOT T_OR T_RIGHTSHIFT T_SEMICOLON T_LCB T_RCB T_LSB T_RSB


%nonassoc LOWER_THAN_ELSE
%nonassoc T_ELSE
%nonassoc T_ASSIGN
%left     T_OR
%left     T_AND	
%nonassoc T_EQ T_NEQ
%nonassoc T_LT T_LEQ T_GT T_GEQ
%left     T_PLUS T_MINUS
%left     T_MULT T_DIV T_MOD
%nonassoc T_NOT UMINUS
%nonassoc T_LSB T_DOT

%type <NTnode>   program MDecl Decl VariableDecl VariableDeclStar Variable
%type <NTnode>   MVariable Type FunctionDecl Formals ClassDecl T_VOID MImplement
%type <NTnode>   EFirst IFirst Field FieldStar InterfaceDecl LValue Call Constant Actuals
%type <NTnode>   Prototype PrototypeStar StmtBlock Stmt StmtStar IfStmt
%type <NTnode>   ForStmt WhileStmt ReturnStmt BreakStmt PrintStmt Expr MExpr ExprFirst

%%
program: MDecl										{
													tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("Program", a, 1);
													tabCount = 0;
													printtree($$);}
     ;
Decl: VariableDecl 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);} 
     | FunctionDecl									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | ClassDecl									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | InterfaceDecl								{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     ;
MDecl: Decl MDecl									{$$ = merge($1, $2);}
     | Decl 										{$$ = $1;}
     ;
VariableDecl: Variable T_SEMICOLON 					{ tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("VarDef",a, 1);}
     ;
VariableDeclStar: VariableDecl VariableDeclStar 	{$$ = merge($1, $2);}
     |												{$$ = emptyNode();}
     ;
Variable: Type T_ID 								{
													tnode * a[0] = {};
													tnode *b[2] = {$1, NewNodeWithLabel($2,a , 0)};
													$$ = NewNodeWithLabel("",b, 2);} 								
     ;
MVariable: Variable T_COMMA MVariable 				{$$ = merge($1, $3);}
     | Variable 									{$$ = $1;}
     ;
Type: T_DOUBLE 										{tnode * a[0] = {}; $$ = NewNodeWithLabel("DoubleType",a, 0);}
     | T_INTTYPE									{tnode * a[0] = {}; $$ = NewNodeWithLabel("IntType",a, 0);}
     | T_BOOLTYPE 									{tnode * a[0] = {}; $$ = NewNodeWithLabel("BooleanType",a, 0);}
     | T_STRINGTYPE 								{tnode * a[0] = {}; $$ = NewNodeWithLabel("StringType",a, 0);}
     | Type T_LSB T_RSB 							{tnode * a[1] = {$1}; $$ = NewNodeWithLabel("[]",a, 1);}
     ;
FunctionDecl: Type T_ID T_LPAREN Formals T_RPAREN StmtBlock 
													{
													tnode * a[1] = {$4};
													$4 = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[1] = {$6};
													$6 = NewNodeWithLabel("Body", b, 1);
													tnode * c[0] = {};
													tnode * d[4] = {$1, NewNodeWithLabel($2,c,0), $4, $6};
													$$ = NewNodeWithLabel("FuncDef",d, 4);
													}
     | T_VOID T_ID T_LPAREN Formals T_RPAREN StmtBlock
     												{
     												tnode * a[1] = {$4};
													$4 = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[1] = {$6};
													$6 = NewNodeWithLabel("Body", b, 1);
													tnode * c[0] = {};
													$1 = NewNodeWithLabel("VoidType", c, 0); 
													tnode * d[4] = {$1, NewNodeWithLabel($2,c,0), $4, $6};
													$$ = NewNodeWithLabel("FuncDef",d, 4);
													}
     ;
Formals: MVariable 									{$$ = $1;}
     |												{$$ = emptyNode();}
     ;
ClassDecl: T_CLASS T_ID EFirst IFirst T_LCB FieldStar T_RCB 
													{
													tnode * a[1] = {$3};
													$3 = NewNodeWithLabel("extends", a, 1);

													tnode * b[1] = {$4};
													// $4 = NewNodeWithLabel("implement", b, 1);
													
													tnode * c[0] = {}; 
													tnode * d[4] = {NewNodeWithLabel($2,c, 0), $3, $4, $6};
													$$ = NewNodeWithLabel("Class",d, 4);
													}
     ;
EFirst: T_EXTENDS T_ID 								{
													tnode * c[0] = {};
													$$ = NewNodeWithLabel($2,c , 0);}
     |												{$$ = emptyNode();}
     ;
IFirst: MImplement 									{$$ = $1;}
     |												{$$ = emptyNode();}
     ;
MImplement: T_IMPLEMENTS T_ID T_COMMA MImplement 	{
													tnode * c[0] = {};
													
													$$ = merge( NewNodeWithLabel($2,c, 0), $4);}
     | T_IMPLEMENTS T_ID 							{tnode * c[0] = {};
													$$ = NewNodeWithLabel($2,c, 0);}
     ;
Field: VariableDecl 								{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | FunctionDecl 								{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     ;
FieldStar: Field FieldStar 							{$$ = merge($1, $2);}
     |												{$$ = emptyNode();}
     ;
InterfaceDecl: T_INTERFACE T_ID T_LCB PrototypeStar T_RCB 	{
													tnode * c[0] = {};
													tnode * a[2] = {NewNodeWithLabel($2,c, 0), $4};
													$$ = NewNodeWithLabel("interface", a, 2);}
     ;
Prototype: Type T_ID T_LPAREN Formals T_RPAREN T_SEMICOLON 	{
													tnode * c[0] = {};
													tnode * a[1] = {$4};
													$4 = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[3] = {$1, NewNodeWithLabel($2,c, 0), $4};
													$$ = NewNodeWithLabel("Prototype", b, 3);
													}
     | T_VOID T_ID T_LPAREN Formals T_RPAREN T_SEMICOLON 	{
													tnode * c[0] = {};
													$1 = NewNodeWithLabel("VoidType",c, 0);
													tnode * a[1] = {$4};
													$4 = NewNodeWithLabel("VarDef", a, 1);
													tnode * b[3] = {$1, NewNodeWithLabel($2,c, 0), $4};
													$$ = NewNodeWithLabel("Prototype", b, 3);
													}
     ;
PrototypeStar: Prototype PrototypeStar 				{$$ = merge($1, $2);}
     |												{$$ = emptyNode();}
     ;
StmtBlock: T_LCB VariableDeclStar StmtStar T_RCB 	{tnode * c[2] = {$2, $3};
													$$ = NewNodeWithLabel("StmtBlock",c, 2);
													}
     ;
Stmt: ExprFirst T_SEMICOLON 						{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | IfStmt 										{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | WhileStmt 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | ForStmt 										{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | BreakStmt 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | ReturnStmt 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | PrintStmt 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | StmtBlock 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     ;
StmtStar: Stmt StmtStar 							{$$ = merge($1, $2);}
     |												{$$ = emptyNode();}
     ;
IfStmt: T_IF T_LPAREN Expr T_RPAREN Stmt %prec LOWER_THAN_ELSE 	{tnode * c[2] = {$3, $5};$$ = NewNodeWithLabel("If", c, 2);}
	 | T_IF T_LPAREN Expr T_RPAREN Stmt T_ELSE Stmt 			{
	 															tnode * c[1] = {$7};
	 															$7 = NewNodeWithLabel("Else", c, 1); 
	 															tnode * a[3] = {$3, $5, $7};
	 															$$ = NewNodeWithLabel("If", a, 3);}
     ;
WhileStmt: T_WHILE T_LPAREN Expr T_RPAREN Stmt 		{
													tnode * c[2] = {$3, $5};
													$$ = NewNodeWithLabel("while", c, 2);
													}
     ;
ForStmt: T_FOR T_LPAREN ExprFirst T_SEMICOLON Expr T_SEMICOLON ExprFirst T_RPAREN Stmt 
													{
													tnode * c[4] = {$3, $5, $7, $9};
													$$ = NewNodeWithLabel("for", c, 4);}
     ;
ReturnStmt: T_RETURN ExprFirst 						{tnode * c[1] = {$2}; $$ = NewNodeWithLabel("return", c, 1);}
     ;
BreakStmt: T_BREAK T_SEMICOLON 						{tnode * c[0] = {}; $$ = NewNodeWithLabel("break", c, 0);}
     ;
PrintStmt: T_PRINT T_LPAREN MExpr T_RPAREN T_SEMICOLON {tnode * c[0] = {}; $$ = NewNodeWithLabel("print", c, 0);}
     ;
Expr: LValue T_ASSIGN Expr 							{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("assign", c, 2);}
     | Constant 									{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | LValue 										{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | T_THIS 										{tnode * c[0] = {};$$ = NewNodeWithLabel("this", c,0);}
     | Call 										{tnode * a[1] = {$1};
													$$ = NewNodeWithLabel("",a, 1);}
     | T_RPAREN Expr T_LPAREN 						{tnode * a[1] = {$2};
													$$ = NewNodeWithLabel("",a, 1);}
     | Expr T_PLUS Expr 							{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("+", c, 2);}
     | Expr T_MINUS Expr 							{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("-", c, 2);}
     | Expr T_MULT Expr 							{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("*", c, 2);}
     | Expr T_DIV Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("/", c, 2);}
     | Expr T_MOD Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("%", c, 2);}
     | T_MINUS Expr %prec UMINUS 					{tnode * c[1] = {$2};$$ = NewNodeWithLabel("-",c, 1);}
     | Expr T_LT Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("<", c, 2);}
     | Expr T_LEQ Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("<=", c, 2);}
     | Expr T_GEQ Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel(">=", c, 2);}
     | Expr T_GT Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel(">", c, 2);}
     | Expr T_EQ Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("==", c, 2);}
     | Expr T_NEQ Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("!=", c, 2);}
     | Expr T_AND Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("&&", c, 2);}
     | Expr T_OR Expr 								{tnode * c[2] = {$1, $3}; $$ = NewNodeWithLabel("||", c, 2);}
     | T_NOT Expr 									{tnode * c[1] = {$2};$$ = NewNodeWithLabel("!",c, 1);}
     | T_READINTEGER T_LPAREN T_RPAREN 				{tnode * c[0] = {};$$ = NewNodeWithLabel("ReadInteger", c, 0);}
     | T_READLINE T_LPAREN T_RPAREN 				{tnode * c[0] = {};$$ = NewNodeWithLabel("ReadLine", c, 0);}
     | T_NEW T_LPAREN T_ID T_RPAREN 				{tnode * c[0] = {};
     												tnode * d[1] = {NewNodeWithLabel($3, c, 0)};
     												$$ = NewNodeWithLabel("New",c, 1);}
     | T_NEWARRAY T_LPAREN Expr T_COMMA Type T_RPAREN {tnode * c[2] = {$3, $5}; $$ = NewNodeWithLabel("NewArray", c, 2);}
     ;
MExpr: Expr T_SEMICOLON MExpr 						{$$ = merge($1, $3);}
     | Expr 										{$$ = $1;}
     ;
ExprFirst: Expr 									{$$ = $1;}
     | 												{$$ = emptyNode();}
     ;
LValue: T_ID 										{
													tnode * c[0] = {};
													tnode * d[1] = {NewNodeWithLabel($1, c, 0)};
													$$ = NewNodeWithLabel("LValue", d, 1);
													}
     | Expr T_DOT T_ID 								{
     												tnode * c[0] = {};
     												tnode * d[2] = {$1, NewNodeWithLabel($3, c, 0)};
     												$$ = NewNodeWithLabel("LValue",d,2);}
     | Expr T_LSB Expr T_RSB 						{
     												tnode * c[2] = {$1, $3};
     												$$ = NewNodeWithLabel("LValue",c,2);
     												}
     ;
Call: T_ID T_LPAREN Actuals T_RPAREN 				{tnode * c[0] = {};
													tnode * d[2] = {NewNodeWithLabel($1, c, 0), $3};
													$$ = NewNodeWithLabel("Call", d, 2);}
     | Expr T_DOT T_ID T_LPAREN Actuals T_RPAREN 	{
     												tnode * c[0] = {};
     												tnode * d[3] = {$1, NewNodeWithLabel($3, c, 0), $5}; 
     												$$ = NewNodeWithLabel("Call", d, 3);}
Actuals: MExpr 										{$$ = $1;}
     |												{$$ = emptyNode();}
     ;
Constant: T_INTCONSTANT 							{tnode * c[0] = {};$$ = NewNodeWithLabel("IntConstant", c, 0);}
     | T_DOUBLECONSTANT 							{tnode * c[0] = {};$$ = NewNodeWithLabel("DoubleConstant", c, 0);}
     | T_BOOLEANCONSTANT 							{tnode * c[0] = {};$$ = NewNodeWithLabel("BoolConstant", c, 0);}
     | T_STRINGCONSTANT 							{tnode * c[0] = {};$$ = NewNodeWithLabel("StringConstant", c, 0);}
     | T_CHARCONSTANT 								{tnode * c[0] = {};$$ = NewNodeWithLabel("CharConstant", c, 0);}
     | T_NULL 										{tnode * c[0] = {};$$ = NewNodeWithLabel("NullConstant", c, 0);}
     ;
%%

struct tnode ** push(int size, struct tnode ** childs, struct tnode * child){
	struct tnode ** newchilds = (struct tnode **)malloc(sizeof(tnode *) * (size + 1));
	for(int i = 0; i < size; i++){
		newchilds[i] = childs[i];
	}
	newchilds[size] = child;
	return newchilds;
}

tnode * ProgramNode(char *token, tnode *child){
	child->token = token;
	return child;
}
tnode * merge(tnode *child, tnode *addchild){
	//printf("%s, %s", child->token, addchild->token);
	for(int i = 0; i < addchild->size; i++){
		child->childs = push(child->size ,child->childs, addchild->childs[i]);
		child->size++;
	}
	return child;
}
tnode * NewNodeWithLabel(char *token,tnode ** arr, int size){
	tnode *newnode = (tnode *)malloc(sizeof(tnode));
	newnode->size = 0;
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->token = newstr;
	for(int i = 0; i < size; i++){
		newnode->childs = push(newnode->size,newnode->childs, arr[i]);
		newnode->size++;
	}
	return(newnode);
}
tnode * emptyNode(){
	char token[2] = "";
	tnode *newnode = (tnode *)malloc(sizeof(tnode));
	char *newstr = (char *)malloc(strlen(token)+1);
	strcpy(newstr, token);
	newnode->token = newstr;
	newnode->size = 0;
	return(newnode);
}

void printtree(tnode *tree){
	tabCount++;
	if(strcmp(tree->token, "")){
		for(int j = 0; j < tabCount - 1; j++){
			printf("\t");
		}
		printf("%s\n", tree->token);
	}else{
		tabCount--;
	}
	for(int i = 0; i < tree->size; i++){
		if (tree->childs[i]){
 			printtree(tree->childs[i]);	
		}
	}
	if(strcmp(tree->token, "")){
		//printf(")");
	}else{
		tabCount++;
	}
	tabCount--;
}


/*void printtree(tnode *tree){
	printf("%d %s\n", tree->size,tree->token);
	
	if(strcmp(tree->token, "")){
		for(int j = 0; j < tabCount - 1; j++){
			//printf("\t");
		}
	}
	for(int i = 0; i < tree->size; i++){
		if (tree->childs[i]){
 			printtree(tree->childs[i]);	
		}
	}
	if(strcmp(tree->token, "")){
		//printf(")");
	}
	tabCount--;
}
*/