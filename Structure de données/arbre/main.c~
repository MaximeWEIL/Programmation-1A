#include <stdio.h>
#include "abr.h"
#include <stdlib.h>

int main()
{
	sabr *agdg = enracinement(vide(), 2, vide());
	sabr *agd = enracinement(agdg, 4, vide());//voir feuille exemple
	sabr *ag = enracinement(vide(), -1, agd); 

	sabr *addg = enracinement(vide(),15,vide());
	sabr *adg = enracinement(vide(), 9, vide()); 
	sabr *add = enracinement(addg, 16, vide());
	sabr *ad = enracinement(adg, 14, add); 

	sabr *arbre = enracinement(ag,8,ad);

	printf("Prefixe :\n");
	prefixe(arbre, affiche_etiquette);

	arbre = insert(5, arbre);

	printf("Prefixe :\n");
	prefixe(arbre, affiche_etiquette);

	printf("Plus petit : %d\n", plusPetitElt(arbre));

	printf("Plus grand : %d\n", plusGrandElt(arbre));

	int elem = 0;
	printf("Choisissez un élément à rechercher : ");
	scanf("%d", &elem);
	if (recherche(elem,arbre) == 1)
	{ printf("L'élément %d est dans l'arbre\n", elem); }
	else
	{ printf("L'élément %d n'est pas dans l'arbre\n", elem);}

/*
	printf("Prefixe :\n");
	prefixe(arbre, affiche_etiquette);

	printf("Postfixe :\n");
	postfixe(arbre, affiche_etiquette);

	printf("Taille : %d \n", taille(arbre));

	printf("Hauteur : %d \n", hauteur(arbre));

 	printf("Somme : %d \n", somme(arbre));

	printf("Signe (0 = au moins 1 négatif, 1 = tous positifs) : %d \n", tous_positifs(arbre));*/
}
