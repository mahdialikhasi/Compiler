/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 1 "decaf.y" /* yacc.c:1909  */

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


#line 64 "y.tab.h" /* yacc.c:1909  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    T_STRINGCONSTANT = 258,
    T_CHARCONSTANT = 259,
    T_BOOLEANCONSTANT = 260,
    T_INTCONSTANT = 261,
    T_DOUBLECONSTANT = 262,
    T_ID = 263,
    T_VOID = 264,
    T_STRINGTYPE = 265,
    T_THIS = 266,
    T_WHILE = 267,
    T_BREAK = 268,
    T_READINTEGER = 269,
    T_INTTYPE = 270,
    T_CLASS = 271,
    T_EXTENDS = 272,
    T_IF = 273,
    T_NEW = 274,
    T_READLINE = 275,
    T_DOUBLE = 276,
    T_INTERFACE = 277,
    T_IMPLEMENTS = 278,
    T_ELSE = 279,
    T_NEWARRAY = 280,
    T_BOOLTYPE = 281,
    T_NULL = 282,
    T_FOR = 283,
    T_RETURN = 284,
    T_PRINT = 285,
    T_CONTINUE = 286,
    T_EXTERN = 287,
    T_WHITESPACE = 288,
    T_COMMENT = 289,
    T_PLUS = 290,
    T_MINUS = 291,
    T_AND = 292,
    T_ASSIGN = 293,
    T_COMMA = 294,
    T_DIV = 295,
    T_DOT = 296,
    T_EQ = 297,
    T_GEQ = 298,
    T_GT = 299,
    T_LEFTSHIFT = 300,
    T_LEQ = 301,
    T_LPAREN = 302,
    T_RPAREN = 303,
    T_LT = 304,
    T_MOD = 305,
    T_MULT = 306,
    T_NEQ = 307,
    T_NOT = 308,
    T_OR = 309,
    T_RIGHTSHIFT = 310,
    T_SEMICOLON = 311,
    T_LCB = 312,
    T_RCB = 313,
    T_LSB = 314,
    T_RSB = 315,
    LOWER_THAN_ELSE = 316,
    UMINUS = 317
  };
#endif
/* Tokens.  */
#define T_STRINGCONSTANT 258
#define T_CHARCONSTANT 259
#define T_BOOLEANCONSTANT 260
#define T_INTCONSTANT 261
#define T_DOUBLECONSTANT 262
#define T_ID 263
#define T_VOID 264
#define T_STRINGTYPE 265
#define T_THIS 266
#define T_WHILE 267
#define T_BREAK 268
#define T_READINTEGER 269
#define T_INTTYPE 270
#define T_CLASS 271
#define T_EXTENDS 272
#define T_IF 273
#define T_NEW 274
#define T_READLINE 275
#define T_DOUBLE 276
#define T_INTERFACE 277
#define T_IMPLEMENTS 278
#define T_ELSE 279
#define T_NEWARRAY 280
#define T_BOOLTYPE 281
#define T_NULL 282
#define T_FOR 283
#define T_RETURN 284
#define T_PRINT 285
#define T_CONTINUE 286
#define T_EXTERN 287
#define T_WHITESPACE 288
#define T_COMMENT 289
#define T_PLUS 290
#define T_MINUS 291
#define T_AND 292
#define T_ASSIGN 293
#define T_COMMA 294
#define T_DIV 295
#define T_DOT 296
#define T_EQ 297
#define T_GEQ 298
#define T_GT 299
#define T_LEFTSHIFT 300
#define T_LEQ 301
#define T_LPAREN 302
#define T_RPAREN 303
#define T_LT 304
#define T_MOD 305
#define T_MULT 306
#define T_NEQ 307
#define T_NOT 308
#define T_OR 309
#define T_RIGHTSHIFT 310
#define T_SEMICOLON 311
#define T_LCB 312
#define T_RCB 313
#define T_LSB 314
#define T_RSB 315
#define LOWER_THAN_ELSE 316
#define UMINUS 317

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 21 "decaf.y" /* yacc.c:1909  */

    int rvalue;  				//real values
    int bvalue; 				//boolean values
    char *svalue;				//string values
    double dvalue; 				//double values
    char *name; 				// +1 for terminating null

    tnode * NTnode;

#line 210 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
