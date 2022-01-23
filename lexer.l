%{
    
#include <unistd.h>
#include "header.h"
#include "syntax.tab.h"
%}
%option yylineno
 
numbers [1-9][0-9]*|0
words   ["].*["]
name    [_]+[a-zA-Z0-9]*


%%
{name}      { yylval.text = strdup(yytext);return NAME;}
{words}     { yylval.text = strdup(yytext);return TEXT;}
{numbers}	{ yylval.val  = atoi(yytext); return VALUE;}
\[        		{ return '[';}
\]        		{ return ']';}
","             { return ',';}
"+"				{ return '+';}
"-"				{ return '-';}
"/"             { return '/';}
"*"             { return '*';}
"("     	    { return '(';}
")"   	        { return ')';}
"begin"         { return begin;}
"end"           { return end;}
"LOOP"|"REPEAT"        { return REPEAT;}
"MOVE"|"FORWARD"       { return FORWARD;}
"THICKNESS"     { return THICKNESS;}
"TURNLEFT"|"LEFT"        	{ return LEFT;}
"TURNRIGHT"|"RIGHT"       	{ return RIGHT;}
"PRINT"|"WRITE"  {return WRITE;}
"BLUE"			{ return BLUE;}
"GREEN"			{ return GREEN;}
"YELLOW"        { return YELLOW;}
"RED"			{ return RED;}
"TRANSPARENT"	{ return TRANSPARENT;}
"BLACK"			{ return BLACK;}
"URL"           { return URL;}
"IMPORT ICON"   { return ICON;}   
"DEFINE COLOR"	{ return DEFINECOLOR;}
"BACKGROUND"    { return BACKGROUND;}
"CIRCLE"        { return CIRCLE;}
"RECT"          { return RECT;}
"ELLIPSE"       { return ELLIPSE;}
"0x"[1-9a-fA-F][0-9a-fA-F]*	{ yylval.val=strtol(yytext,NULL,0); return HEXA;}
"USE FONCTION"	{ return USEFONCTION;}
"DEFINE FONCTION"	{ return DEFFONCTION;}
\t				{ /* ignorer */ }
\n				{ /* ignorer */ }
\ 				{ /* ignorer */ }
.               {printf("\nWARNING(Line : %d): Lexical Error :Invalid input character: \'%s\' !!!!\n", yylineno, yytext);
                 return EXIT_FAILURE;}
%%
