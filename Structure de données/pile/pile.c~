#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

pile nouvPile()
{
	pile MaPile = (pile)malloc(sizeof(struct PILE));
	MaPile->premier = NULL;
	MaPile->taille = 0;
	return MaPile;
}


void empile(pile MaPile, T val)
{
	elt e = (elt)malloc(sizeof(struct ELT));
	e -> s = MaPile-> premier;
	e -> e = val;
	MaPile -> premier = e;
	MaPile -> taille++;
	return;
}



void depile(pile MaPile)
{
        elt del = MaPile->premier;
	MaPile->premier = MaPile->premier->s;
	free(del);
	MaPile->taille--;
	return;

}


int estVide(pile MaPile){
	if(MaPile->premier == NULL){
		return 1;
	} else { return 0;}
}

int taille(pile MaPile)
	{
		return MaPile -> taille;
	}


T sommet(pile MaPile)
{
	if (MaPile->premier != NULL)
		{
			return MaPile->premier->e;
		}
	else
		{
			return 0;
		}
}




