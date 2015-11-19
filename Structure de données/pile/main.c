#include <stdio.h>
#include <stdlib.h>
#include "pile.h"

main()
{

  pile l;
  l = nouvPile();

 empile(l,"10");
 empile(l,"5");
 empile(l,"3");

  if (estVide(l) == 1)
	{
		printf("La pile est vide\n");
	}
  else
	{
		printf("La pile est remplie\n");
	}

  printf("La taille de la pile est : %d \n", taille(l));
 
  printf("Le sommet de la pile est : %s \n", sommet(l));

 depile(l);
 printf("Le sommet de la pile est : %s \n", sommet(l));
 depile(l); 
 printf("Le sommet de la pile est : %s \n", sommet(l));

  if (estVide(l) == 1)
	{
		printf("La pile est vide\n");
	}
  else
	{
		printf("La pile est remplie\n");
	}

  printf("La taille de la pile est : %d \n", taille(l));

}
