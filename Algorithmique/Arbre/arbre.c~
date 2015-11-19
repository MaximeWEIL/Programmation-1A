#include <stdio.h>
#include "arbre.h"
#include <stdlib.h>

sarbin* vide()
{
	return NULL;
}

sarbin* enracinement(sarbin *g, int f, sarbin *d)
	{
		sarbin *a = (sarbin*)malloc(sizeof(sarbin));
		a -> g = g;
		a -> d = d;
		a -> e = f;
		return a;
	}

void affiche_etiquette(int e)
	{printf("|%d|\n", e);}

void affiche2(int e)
	{printf("__%d__\n", e);}

void infixe (sarbin *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			infixe(a -> g, pr);
			(*pr)(a -> e);
			infixe (a -> d, pr);
		}
	}

void prefixe (sarbin *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			(*pr)(a -> e);
			prefixe(a -> g, pr);
			prefixe (a -> d, pr);
		}
	}

void postfixe (sarbin *a, void(*pr)(int))
	{
	 if (a != NULL)
	 	{
			postfixe(a -> g, pr);
			postfixe (a -> d, pr);
			(*pr)(a -> e);
		}
	}

int taille(sarbin *a)
	{
		if (a == NULL)
		{ return 0; }
		else
		{
			return (taille(a -> g) + taille(a -> d) + 1);
		}

	}

int hauteur(sarbin *a)
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

int somme(sarbin *a)
	{
		if(a==NULL)
		{ return 0; }
		else 
		{
			return somme(a -> g) + somme(a -> d) + a -> e;
		}
	}

int tous_positifs(sarbin *a)
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








			
