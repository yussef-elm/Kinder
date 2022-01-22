%{
    
#include <unistd.h>
#include "header.h"
#include "syntax.tab.h"
%}
%option yylineno
%%

[1-9][0-9]*|0 	{ yylval.val=atoi(yytext); return VALUE;}
\[        		{ return '[';}
\]        		{ return ']';}
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
"BLUE"			{ return BLUE;}
"GREEN"			{ return GREEN;}
"RED"			{ return RED;}
"TRANSPARENT"	{ return TRANSPARENT;}
"BLACK"			{ return BLACK;}
"DEFINE COLOR"	{ return DEFINECOLOR;}
"BACKGROUND"    { return BACKGROUND;}
"0x"[1-9a-fA-F][0-9a-fA-F]*	{ yylval.val=strtol(yytext,NULL,0); return HEXA;}
"USE FONCTION"	{ return USEFONCTION;}
"DEFINE FONCTION"	{ return DEFFONCTION;}
\t				{ /* ignorer */ }
\n				{ /* ignorer */ }
\ 				{ /* ignorer */ }
.               {printf("\nWARNING(Line : %d): Lexical Error :Invalid input character: \'%s\' !!!!\n", yylineno, yytext);
                 return EXIT_FAILURE;}
%%
