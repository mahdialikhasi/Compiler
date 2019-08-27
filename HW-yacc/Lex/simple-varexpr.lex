%{
#include "simple-varexpr.tab.h"
#include <math.h>
#include <stdio.h>
%}

%%
[0-9]+    { yylval.rvalue = atoi(yytext); return NUMBER; } /* convert NUMBER token value to integer */
[ \t]   ;  /* ignore whitespace */
"\n"		{return T_ENDOFLINE; }
[a-z]     { yylval.lvalue = yytext[0] - 'a'; return NAME; } /* convert NAME token into index */

0[Xx]?[0-9a-fA-F]+	{ yylval.rvalue = strtol(yytext, NULL, 16); return NUMBER; }
[0-9]+"."[0-9]*		{ sscanf(yytext, "%lf", &yylval.doubleValue); return DOUBLE; }
[0-9]+"."[0-9]*[Ee]([+-]?)[0-9]+ { sscanf(yytext, "%lf", &yylval.doubleValue); return DOUBLE; }

sqrt	{return T_SQRT; }
log	{return T_LOG; }
exp	{return T_EXP; }

.         return yytext[0];
%%
