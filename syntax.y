%{
#include <stdio.h>
#include <stdlib.h> 
#include "header.h"
int yylex(void);
int yywrap(){
  return 1;
}

int yyerror()
{
  extern int yylineno;
  extern char* yytext;
  printf("\nWARNING(Line : %d): Syntax Error . Character \'%s\'!!!!\n", yylineno,yytext);
  exit(1);
}

%}   

%token   begin end FORWARD RIGHT LEFT REPEAT ELLIPSE CIRCLE RECT WRITE URL NAME TEXT VALUE ICON YELLOW BLUE GREEN RED TRANSPARENT BLACK BACKGROUND DEFINECOLOR THICKNESS HEXA DEFFONCTION USEFONCTION


%union {
    NODE* NODE_TYPE;
    int val;
    char* text;
    
 };

%type <NODE_TYPE> begin end FORWARD RIGHT LEFT ELLIPSE CIRCLE RECT WRITE REPEAT URL ICON BLUE YELLOW GREEN RED TRANSPARENT BLACK DEFINECOLOR BACKGROUND THICKNESS DEFFONCTION USEFONCTION
%type <NODE_TYPE> PROGRAM INSTRUCTION COLOR BACKGROUNDTYPE FORM
%type <val> EXPRESSION VALUE TERM FACTOR HEXA
%type <text> TEXT NAME


%%

START : begin PROGRAM end
{   
    printf("\nBEGIN\n");
    racine = $2;
    racine=Add_Node(Create_Node(END_TOKEN,0,NULL,NULL,0,0),racine);
    YYACCEPT;
}

PROGRAM : INSTRUCTION
{
    $$ = $1;
}
| PROGRAM INSTRUCTION
{
    $$  =Add_Node($2, $1);
}

INSTRUCTION : FORWARD EXPRESSION
{
    $$ = Create_Node(FORWARD_TOKEN, $2,NULL, NULL,0,0);
}
| LEFT EXPRESSION
{
    $$= Create_Node(LEFT_TOKEN, $2,NULL, NULL,0,0);
}
| RIGHT EXPRESSION
{
    $$ = Create_Node(RIGHT_TOKEN, $2,NULL, NULL,0,0);
}
| THICKNESS EXPRESSION
{
    $$=Create_Node(THICKNESS_TOKEN,$2,NULL,NULL,0,0);
}
| REPEAT EXPRESSION '[' PROGRAM ']'
{
    NODE *rpt = Create_Node(REPEAT_TOKEN, $2,NULL, NULL,0,0);
    $$ = Add_Program_Node($4, rpt);
}

| DEFFONCTION NAME'('')'  '[' PROGRAM ']'
{
    NODE *fct = Create_Node(DEFFONCTION_TOKEN, 0,$2, NULL,0,0);
    $$ = Add_Program_Node($6, fct);
}
| BACKGROUND '[' BACKGROUNDTYPE ']'
{
    $$=Create_Node(BACKGROUND_TOKEN,0,NULL,$3,0,0);
}
| WRITE '(' TEXT ',' EXPRESSION ')'
{
    $$=Create_Node(WRITE_TOKEN,$5,$3,NULL,0,0);
}
| ICON '('TEXT ',' EXPRESSION')'
{
    $$=Create_Node(ICON_TOKEN,$5,$3,NULL,0,0);
}
|FORM
{
 $$=$1;
}
| COLOR
{
    $$=$1;
}

| USEFONCTION NAME'('')'
{
    $$ = Create_Node(USEFONCTION_TOKEN, 0,$2, NULL,0,0);
}

| %empty
{
    $$ = NULL;
    printf("\n");
}

FORM : CIRCLE '('COLOR','EXPRESSION')'
{
    $$=Create_Node(CIRCLE_TOKEN,$5,NULL,$3,0,0);
}
| RECT '('COLOR','EXPRESSION','EXPRESSION')'
{
  $$=Create_Node(RECT_TOKEN,0,NULL,$3,$5,$7);
}
| ELLIPSE '('COLOR ',' EXPRESSION',' EXPRESSION')'
{
    $$=Create_Node(ELLIPSE_TOKEN,0,NULL,$3,$5,$7);
}

BACKGROUNDTYPE: COLOR
{
    $$=$1;
}
| URL TEXT
{
    $$=Create_Node(URL_TOKEN,0,$2,NULL,0,0);
}

COLOR: RED
{
    $$ = Create_Node(RED_TOKEN, 0,NULL, NULL,0,0);
}
| GREEN
{
    $$ = Create_Node(GREEN_TOKEN, 0,NULL, NULL,0,0);
}
| YELLOW
{
    $$=Create_Node(YELLOW_TOKEN, 0,NULL, NULL,0,0);
}
| BLUE
{
    $$ = Create_Node(BLUE_TOKEN, 0,NULL, NULL,0,0);
}
| TRANSPARENT
{
    $$ = Create_Node(TRANSPARENT_TOKEN, 0,NULL, NULL,0,0);
}
| BLACK
{
    $$ = Create_Node(BLACK_TOKEN, 0,NULL, NULL,0,0);
}
| DEFINECOLOR HEXA
{
    $$ = Create_Node(DEFINECOLOR_TOKEN, $2,NULL, NULL,0,0);
}

EXPRESSION : EXPRESSION '+' TERM
{
    $$ = $1 + $3;
}
| EXPRESSION '-' TERM
{
    $$ = $1 - $3;
}
| TERM
{
    $$ = $1;
}

TERM : TERM '*' FACTOR
{
    $$ = $1 * $3;
}
| TERM '/' FACTOR
{
    $$ = $1 / $3;
}
| FACTOR
{
    $$ = $1;
}

FACTOR : VALUE
{
    $$ = $1;
}
| '-' FACTOR
{
    $$ = -$2;
}
| '(' EXPRESSION ')'
{
    $$ = $2;
}

%%

int main(){

	yyparse();
	int a=0;
	Print_Prog(racine, &a); 
	Draw_Code(racine);
	Free_All(racine);

    printf("******************\n");
    
	return 0;
}
