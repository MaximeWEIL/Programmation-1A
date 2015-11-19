#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include <assert.h>

sliste *liste_vide()
	{
 	   return NULL;
	}

sliste *ajout_tete(sliste *l, int c)
	{
		sliste *u = (sliste*)malloc(sizeof(sliste));
		u -> e = c;
		u -> s = l;
		return u;
	}

int tete_liste(sliste *l)
{
	assert(l!=NULL);
	return (l->e);
}

/*
sliste *insertion(sliste *l, int c)
	{ if (l == NULL);
		{ 
			return (ajout_tete (NULL,c)); 
		}
	else
	     {
		sliste *p = position_insertion(l,c);
		sliste *new_l = (sliste*)malloc(sizeof(sliste));
		new_l -> s = p -> s;
		new_l -> e = c;
		p -> s = new_l;
		return l;
	    }
*/

