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
  printf("\n syntax error !");
  exit(1);
}

%}   

%token   begin end FORWARD RIGHT LEFT REPEAT VALUE BLUE GREEN RED TRANSPARENT BLACK BACKGROUND DEFINECOLOR THICKNESS HEXA DEFFONCTION USEFONCTION


%union {
    NODE* NODE_TYPE;
    int val;
    
 };

%type <NODE_TYPE> begin end FORWARD RIGHT LEFT REPEAT BLUE GREEN RED TRANSPARENT BLACK DEFINECOLOR BACKGROUND THICKNESS DEFFONCTION USEFONCTION
%type <NODE_TYPE> PROGRAM INSTRUCTION COLOR
%type  <val> EXPRESSION VALUE TERM FACTOR HEXA


%%

START : begin PROGRAM end
{   
    printf("\nBEGIN\n");
    racine = $2;
    racine=Add_Node(Create_Node(END_TOKEN,0,NULL),racine);
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
    $$ = Create_Node(FORWARD_TOKEN, $2, NULL);
}
| LEFT EXPRESSION
{
    $$= Create_Node(LEFT_TOKEN, $2, NULL);
}
| RIGHT EXPRESSION
{
    $$ = Create_Node(RIGHT_TOKEN, $2, NULL);
}
| THICKNESS EXPRESSION
{
    $$=Create_Node(THICKNESS_TOKEN,$2,NULL);
}
| REPEAT EXPRESSION '[' PROGRAM ']'
{
    NODE *rpt = Create_Node(REPEAT_TOKEN, $2, NULL);
    $$ = Add_Program_Node($4, rpt);
}

| DEFFONCTION EXPRESSION '[' PROGRAM ']'
{
    NODE *fct = Create_Node(DEFFONCTION_TOKEN, $2, NULL);
    $$ = Add_Program_Node($4, fct);
}
| BACKGROUND '[' COLOR ']'
{
    $$=Create_Node(BACKGROUND_TOKEN,0,$3);
}
| COLOR
{
    $$=$1;
}

| USEFONCTION EXPRESSION
{
    $$ = Create_Node(USEFONCTION_TOKEN, $2, NULL);
}

| %empty
{
    $$ = NULL;
    printf("\n");
}

COLOR: RED
{
    $$ = Create_Node(RED_TOKEN, 0, NULL);
}
| GREEN
{
    $$ = Create_Node(GREEN_TOKEN, 0, NULL);
}
| BLUE
{
    $$ = Create_Node(BLUE_TOKEN, 0, NULL);
}
| TRANSPARENT
{
    $$ = Create_Node(TRANSPARENT_TOKEN, 0, NULL);
}
| BLACK
{
    $$ = Create_Node(BLACK_TOKEN, 0, NULL);
}
| DEFINECOLOR HEXA
{
    $$ = Create_Node(DEFINECOLOR_TOKEN, $2, NULL);
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
