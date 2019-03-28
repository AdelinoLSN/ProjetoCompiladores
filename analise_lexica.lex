%{
#include <stdlib.h>
void yyerror(char *);
#include "y.tab.h"
%}

letra	[a-z|A-Z|_] 
numero	[0-9]
identificador	{letra}({letra}|{numero})*

%%

main {return MAIN;}

"[" {return *yytext;}

"]" {return *yytext;}

var {return VAR;}

func {return FUNC;}

if {return IF;}

else {return ELSE;}

for {return FOR;}

"return" {return RETURN;}

{numero}+ {
	yylval.dval = atoi(yytext);
	return INTEIRO;}

{numero}+"."{numero}+	{
	yylval.fval = atof(yytext);
	return REAL;}

int {
	yylval.dval = INT;
	return TYPE;
}

float32 {
	yylval.dval = FLOAT;
	return TYPE;
}

"fmt.Print" {return PRINT;}
"fmt.Scanf" {return SCANF;}

">" {return GT;}

"<" {return LT;}

">=" {return GE;}

"<=" {return LE;}

"==" {return EQ;}

"!=" {return NE;}

"&&" {return AND;}

"||" {return OR;}

"not" {return NOT;}

{identificador}	{
	yylval.dval = (int) strdup(yytext);
	return ID;
}	

[-+*/=(){};,%]	{return *yytext;}

[ \t\n] 	; /* skip whitespace */
. 	yyerror("invalid character");
%%

int yywrap(void) {
	return 1;
}
