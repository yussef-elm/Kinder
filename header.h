#include <stdio.h>
#include <stdlib.h>

//TOKENS
enum token
{
	BEGIN_TOKEN,
	END_TOKEN,
	FORWARD_TOKEN,
	LEFT_TOKEN,
	RIGHT_TOKEN,
	REPEAT_TOKEN,
    BACKGROUND_TOKEN,
	THICKNESS_TOKEN,
	BLUE_TOKEN,
	GREEN_TOKEN,
	RED_TOKEN,
	TRANSPARENT_TOKEN,
	BLACK_TOKEN,
	DEFINECOLOR_TOKEN,
	USEFONCTION_TOKEN,
	DEFFONCTION_TOKEN
};

typedef enum token token;

//STRUCTURE NODE
typedef struct node
{
	token instruction;
	int value;
	struct node *program;
	struct node *next;
} NODE;


typedef struct direction
{
	double left;
	double right;
	double down;
	double up;

} DIRECTION;

//CREER UN NOEUD
NODE *Create_Node(token instruction, int value, NODE *program);
//AJOUTER UN NOEUD 
NODE *Add_Node(NODE *node, NODE *racine);
//AJOUTER UN NOEUD CONTENANT UN PROGRAM CAS DE REPEAT ET DEFINE FONCTION
NODE *Add_Program_Node(NODE *new_node, NODE *current_node);
//AFFICHER LE CODE
void Print_Prog(NODE *pn, int *tab);
//LIBERER LA MEMOIRE
void Free_All(NODE *n);
//GENERER KINDER.SVG
void Draw_Code(NODE *n);
//DESSINER UNE LIGNE
void Draw_Line(FILE *file, NODE *n, NODE *start);
//MODIFIER KINDER.SVG
void UpdateSVG(NODE *n, NODE *start, DIRECTION *value);
//MAX ENTRE DE DOUBLE
double MAX(double a, double b);
// | |
double AbsoluteVAL(double a);
// COLORER LA LIGNE 
void Color_Line(FILE *file, double x2, double y2);
//COLORER L'ARRIERE PLAN
void Background(FILE *dest,double width,double height, NODE* start);

//VARIABLES STATIC
static NODE *racine;
static double pi = 3.1415926;
static double xo, yo;
static int angle, color,backgroundcolor;
static int thickness=1;