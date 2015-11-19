#include <stdio.h>
#include "arbre.h"
#include <stdlib.h>

int main()
{
	sarbin *agdgg = enracinement(vide(), -17, vide());
	sarbin *agdg = enracinement(agdgg, 8, vide());
	sarbin *agd = enracinement(agdg, 1, vide());//voir feuille exemple
	sarbin *ag = enracinement(vide(), 10, agd); 

	sarbin *adg = enracinement(vide(), 4, vide()); 
	sarbin *add = enracinement(vide(), 14, vide());
	sarbin *ad = enracinement(adg, 2, add); 

	sarbin *arbre = enracinement(ag,5,ad);

	printf("Infixe :\n");
	infixe(arbre, affiche_etiquette);

	printf("Prefixe :\n");
	prefixe(arbre, affiche_etiquette);

	printf("Postfixe :\n");
	postfixe(arbre, affiche_etiquette);

	printf("Taille : %d \n", taille(arbre));

	printf("Hauteur : %d \n", hauteur(arbre));

 	printf("Somme : %d \n", somme(arbre));

	printf("Signe (0 = au moins 1 négatif, 1 = tous positifs) : %d \n", tous_positifs(arbre));
}
