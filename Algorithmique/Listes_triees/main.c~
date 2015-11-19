#include <stdio.h>
#include <stdlib.h>
#include "liste.h"
#include <assert.h>

int main() 
{
  int i = 0;
  int premier = 0;

  sliste *l = liste_vide();
  if (l == NULL)
	{
	   printf("La liste est nulle\n");
	}

 l = ajout_tete(l,4);
 l = ajout_tete(l,10);
 l = ajout_tete(l,3);
 
 sliste *new_l = l;
 while (new_l != NULL)
	{
	  printf("%d\n", new_l->e);
	  new_l = new_l->s;
	}

 premier = tete_liste(new_l);
 printf("Le premier élément de la liste est %d", premier);

}
