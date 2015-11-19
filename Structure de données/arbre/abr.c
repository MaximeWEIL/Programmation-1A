#include <stdio.h>
#include <stdlib.h>
#include "abr.h"

sabr* vide()
{
	return NULL;
}

sabr* enracinement(sabr *g, int f, sabr *d)
	{
		sabr* a = (sabr*)malloc(sizeof(sabr));
		a -> g = g;
		a -> d = d;
		a -> e = f;
		return a;
	}

sabr* insert(int f, sabr *a)
	{
		if (a==NULL)
		{
			a = (sabr*)malloc(sizeof(sabr));
			a->e = f;
		}
		else if ((a->e) > f)
		{
			a->g = insert(f, a->g);
		}
		else
		{
			a->d = insert(f, a->d); 
		}
		return a;
	}


int plusPetitElt(sabr *a)
{
	if (a==NULL)
	{return 0;}
	else if (a->g == NULL)
	{
		return a->e;
	}
	else
	{
		return plusPetitElt(a->g);
	}
}

int plusGrandElt(sabr *a)
{
	if (a==NULL)
	{return 0;}
	else if (a->d == NULL)
	{
		return a->e;
	}
	else
	{
		return plusGrandElt(a->d);
	}
}
        
int recherche(int elt, sabr *a)
{
	if (a==NULL)
	{return 0;}
	else if (a->g >


}
void affiche_etiquette(int e)
	{printf("|%d|\n", e);}

void affiche2(int e)
	{printf("__%d__\n", e);}

void infixe (sabr *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			infixe(a -> g, pr);
			(*pr)(a -> e);
			infixe (a -> d, pr);
		}
	}

void prefixe (sabr *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			(*pr)(a -> e);
			prefixe(a -> g, pr);
			prefixe (a -> d, pr);
		}
	}

void postfixe (sabr *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			postfixe(a -> g, pr);
			postfixe (a -> d, pr);
			(*pr)(a -> e);
		}
	}

int taille(sabr *a)
	{
		if (a == NULL)
		{ return 0; }
		else
		{
			return (taille(a -> g) + taille(a -> d) + 1);
		}

	}

int hauteur(sabr *a)
	{
		if (a==NULL)
		{ return (-1); }
		else
		{
			if (hauteur(a -> g) > hauteur(a -> d))	
			{ return hauteur(a -> g) + 1; }
			else
			{ return hauteur(a -> d) + 1; }
		}
	}

int somme(sabr *a)
	{
		if(a==NULL)
		{ return 0; }
		else 
		{
			return somme(a -> g) + somme(a -> d) + a -> e;
		}
	}

int tous_positifs(sabr *a)
	{
		if(a==NULL)
		{ return 1; }
		else if (a -> e < 0)
		{ return 0; }
		else
		{
			return tous_positifs(a -> g) && tous_positifs(a -> d);
		}
	}








			
