#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "header.h"

NODE *Create_Node(token inst, int value, NODE *program)
{
	NODE *pn = (NODE *)malloc(sizeof(NODE));
	if (pn == NULL)
	{
		fprintf(stderr, "malloc error\n");
		exit(EXIT_FAILURE);
	}
	pn->instruction = inst;
	pn->value = value;
	pn->program = program;
	pn->next=NULL;
	return pn;
}

NODE *Add_Node(NODE *pn1, NODE *pn)
{
	if (pn == NULL)
	{
		pn = pn1;
		pn1->next=NULL;
	}
	else
	{
		NODE *cur = pn;
		while (cur->next != NULL)
		{
			cur = cur->next;
		}
		cur->next = pn1;
		pn1->next=NULL;
	}
	return pn;
}



NODE *Add_Program_Node(NODE *new_node, NODE *current_node)
{   
    
	if (current_node->instruction == REPEAT_TOKEN || current_node->instruction == DEFFONCTION_TOKEN || current_node->instruction == BACKGROUND_TOKEN)
	{
		if (current_node->program == NULL)
		{
			current_node->program = new_node;

		}
		else
		{
			NODE *cur = current_node->program;
			while (cur->next != NULL)
			{
				cur = cur->next;
			}
			cur->next = new_node;
		

		}
	}
	else
	{
		printf("error repeat\n");
	}
	return current_node;
}


// on lib�re le cot� droitde l arbre et puis le cote gauche et puis la racine
void Free_All(NODE *nd)
{
	if (nd == NULL)
		return;
	Free_All(nd->next);
	Free_All(nd->program);
	free(nd);
	nd=NULL;
}

 
void Print_Prog(NODE *pn, int *tab)
{
	if (pn == NULL)
		return;
	else
	{
		int i;
		int a = *tab;
		for (i = 1; i <= a; i++)
		{
			printf("\t");
		}
		switch (pn->instruction)
		{
		case BEGIN_TOKEN:
		    printf("START ");
			break;
		case END_TOKEN:
			printf("END ");
			break;
		case FORWARD_TOKEN:
			printf("FORWARD ");
			printf("%d", pn->value);
			break;
		case LEFT_TOKEN:
			printf("LEFT ");
			printf("%d", pn->value);
			break;
		case RIGHT_TOKEN:
			printf("RIGHT ");
			printf("%d", pn->value);
			break;
		case THICKNESS_TOKEN:
		    printf("THICKNESS ");
			printf("%d",pn->value);
			break;
		case BACKGROUND_TOKEN:
		    printf("BACKGROUND ");
			break;
		case REPEAT_TOKEN:
			printf("REPEAT ");
			printf("%d", pn->value);
			break;
		case BLUE_TOKEN:
			printf("BLUE ");
			break;
		case GREEN_TOKEN:
			printf("GREEN ");
			break;
		case RED_TOKEN:
			printf("RED ");
			break;
		case TRANSPARENT_TOKEN:
			printf("TRANSPARENT ");
			break;
		case BLACK_TOKEN:
			printf("BLACK ");
			break;
		case DEFINECOLOR_TOKEN:
			printf("DEFINECOLOR ");
			printf("#%X", pn->value);
			break;
		case DEFFONCTION_TOKEN:
			printf("DEFINE FONCTION ");
			printf("%d", pn->value);
			break;
		case USEFONCTION_TOKEN:
			printf("USE FONCTION ");
			printf("%d", pn->value);
			break;
		
		default:
			printf("Unkown instruction");
			break;
		}
		if (pn->instruction == REPEAT_TOKEN  ||  pn->instruction == DEFFONCTION_TOKEN || pn->instruction== BACKGROUND_TOKEN)
		{
			printf(" [\n");
			a = a + 1;
			Print_Prog(pn->program, &a);
			a = a - 1;
			for (i = 1; i <= a; i++)
			{
				printf("\t");
			}
			printf("]");
		}

		printf("\n");
		Print_Prog(pn->next, tab);
		return;
	}
}

void Draw_Code(NODE *n)
{
	if (n == NULL)
	{
		printf("error node is null \n");
	}

	FILE *dest = NULL;
	dest = fopen("Kinder.svg", "w+");
	DIRECTION valuesMax;
	valuesMax.left = 0.0;
	valuesMax.right = 0.0;
	valuesMax.up = 0.0;
	valuesMax.down = 0.0;
	xo = 0; 
	yo = 0;
	angle = 0;
	color = 4; 
	UpdateSVG(n, n, &valuesMax);
	double width = 2 * MAX(AbsoluteVAL(valuesMax.left), valuesMax.right) + 100.0;
	double height = 2 * MAX(AbsoluteVAL(valuesMax.up), valuesMax.down) + 100.0;
	fputs("<?xml version=\"1.0\" encoding=\"utf-8\"?>\n", dest);
    Background(dest, width, height,n);
	xo = width / 2;
	yo = height / 2;
	angle = 0;
	Draw_Line(dest, n, n);

	fputs("</svg>", dest);
	fclose(dest);
}

void Draw_Line(FILE *file, NODE *n, NODE *start)
{
	if (n == NULL)
		return;
	if (n->instruction == REPEAT_TOKEN)
	{
		int i;
		int a = n->value;
		for (i = 0; i < a; i++)
		{
			Draw_Line(file, n->program, start);
		}
	}
	else
	{
		int valn = n->value;
		double valnDouble = (double)valn;
		double dx, dy;
		double x2, y2;
		NODE *parcours = start;
		switch (n->instruction)
		{
		case THICKNESS_TOKEN:
			thickness= valn;
			break;
		case RIGHT_TOKEN:
			angle = angle + valn;
			break;

		case LEFT_TOKEN:
			angle = angle - valn;
			break;

		case FORWARD_TOKEN:
			dx = (double)valn * cos((double)angle * pi / 180);
			dy = (double)valn * sin((double)angle * pi / 180);
			x2 = xo + dx;
			y2 = yo + dy;
			Color_Line(file, x2, y2);
			xo = x2;
			yo = y2;
			break;
		case TRANSPARENT_TOKEN:
			color = 0;
			break;

		case RED_TOKEN:
			color = 1;
			break;

		case GREEN_TOKEN:
			color = 2;
			break;

		case BLUE_TOKEN:
			color = 3;
			break;

		case BLACK_TOKEN:
			color = 4;
			break;
		case DEFINECOLOR_TOKEN:
			color = valn;
			break;
		case USEFONCTION_TOKEN:
			while (parcours != NULL)
			{
				if (parcours->instruction == DEFFONCTION_TOKEN && parcours->value == valn)
				{
					Draw_Line(file, parcours->program, start);
					break;
				}
				parcours = (parcours->next);
			}
			break;
		}
	}
	Draw_Line(file, n->next, start);
}

void UpdateSVG(NODE *n, NODE *start, DIRECTION *value)
{
	if (n == NULL)
		return;
	if (n->instruction == REPEAT_TOKEN)
	{
		int i;
		int a = n->value;
		for (i = 0; i < a; i++)
		{
			UpdateSVG(n->program, start, value);
		}
	}

	else
	{
		int valn = n->value;
		double valnDouble = (double)valn;
		double dx, dy;
		double x2, y2;
		NODE *parcours = start;
		switch (n->instruction)
		{
		case RIGHT_TOKEN:
			angle = angle + valn;
			break;

		case LEFT_TOKEN:
			angle = angle - valn;
			break;
		case FORWARD_TOKEN:
			dx = valnDouble * cos((double)angle * pi / 180);
			dy = valnDouble * sin((double)angle * pi / 180);
			xo = xo + dx;
			yo = yo + dy;
			if (xo > value->right)
				value->right = xo;
			else if (xo < value->left)
				value->left = xo;
			if (yo > value->down)
				value->down = yo;
			else if (yo < value->up)
				value->up = yo;
			break;
		case USEFONCTION_TOKEN:
			while (parcours != NULL)
			{
				if (parcours->instruction == DEFFONCTION_TOKEN && parcours->value == valn)
				{
					UpdateSVG(parcours->program, start, value);
					break;
				}
				parcours = (parcours->next);
			}
			break;
		}
	}
	UpdateSVG(n->next, start, value);
}

double MAX(double a, double b)
{
	if (a > b)
		return a;
	else
		return b;
}

double AbsoluteVAL(double a)
{
	if (a > 0)
		return a;
	else
		return -a;
}

void Color_Line(FILE *file, double x2, double y2)
{

	switch (color)
	{
	case 1:
		fprintf(file, "<line x1=\"%f\" x2=\"%f\" y1=\"%f\" y2=\"%f\" style=\"stroke:rgb(255,0,0);stroke-width:%d\" />\n", xo, x2, yo, y2,thickness);
		break;
	case 2:
		fprintf(file, "<line x1=\"%f\" x2=\"%f\" y1=\"%f\" y2=\"%f\" style=\"stroke:rgb(0,255,0);stroke-width:%d\" />\n", xo, x2, yo, y2,thickness);
		break;
	case 3:
		fprintf(file, "<line x1=\"%f\" x2=\"%f\" y1=\"%f\" y2=\"%f\" style=\"stroke:rgb(0,0,255);stroke-width:%d\" />\n", xo, x2, yo, y2,thickness);
		break;
	case 4:
		fprintf(file, "<line x1=\"%f\" x2=\"%f\" y1=\"%f\" y2=\"%f\" style=\"stroke:rgb(0,0,0);stroke-width:%d\" />\n", xo, x2, yo, y2,thickness);
		break;
	default:
		fprintf(file, "<line x1=\"%f\" x2=\"%f\" y1=\"%f\" y2=\"%f\" style=\"stroke:#%X;stroke-width:%d\" />\n", xo, x2, yo, y2, backgroundcolor,thickness);
		break;
	}
}

void Background(FILE *dest,double width,double height,NODE* start)
{
	NODE* tmp = start;
    while (tmp)
	{
          if (tmp->instruction == BACKGROUND_TOKEN)
	       {
				switch (tmp->program->instruction)
				{
						case RED_TOKEN:
							backgroundcolor = 1;
							break;

						case GREEN_TOKEN:
							backgroundcolor = 2;
							break;

						case BLUE_TOKEN:
							backgroundcolor = 3;
							break;

						case BLACK_TOKEN:
							backgroundcolor = 4;
							break;
						case DEFINECOLOR_TOKEN:
							backgroundcolor = tmp->program->value;
							break;
						
						default:
						backgroundcolor=0;
							break;
							}
			}
			tmp=tmp->next;
	   }
        switch (backgroundcolor)
			{
			case 1:
				fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:rgb(255,0,0)\">\n", width, height);
				break;
			case 2:
				fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:rgb(0,255,0)\" >\n", width, height);
				break;
			case 3:
				fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:rgb(0,0,255)\">\n", width, height);
				break;
			case 4:
				fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:rgb(0,0,0)\">\n", width, height);
				break;
			case 0:
			    fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:rgb(255,255,255)\">\n", width, height);
				break;
			default:
				fprintf(dest, "<svg xmlns=\"http://www.w3.org/2000/svg\" version=\"1.1\" width=\"%f\" height=\"%f\" style=\"background:#%X\">\n", width, height,backgroundcolor);
				break;
			}
	
}
