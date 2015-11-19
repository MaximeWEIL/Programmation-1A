#include <stdio.h>
#include <stdlib.h>  // pour srand et rand
#include <time.h>    // pour srand
#include "liste_chaine.h"

/*******************************************
 * Affichage d'une liste
 * entree : une liste
 * sortie : -
 */

void affiche(liste l) {
	int i;
	
	for(i=0; i < taille(l); ++i) {
		printf("%d ", elt(i, l));
	}
	printf("\n");
}

/*******************************************
 * Nombre d'occurence d'un element
 * entree : l: une liste, nb : l'entier que l'on compte dans l
 * sortie : un entier
 */
 
int nbOccurences(int nb, liste l) {
	int nboccur=0; 	// compteur
	int i;
	 
	// pour chaque element de la liste
	for(i=0;i<taille(l);++i) {
		 if (elt(i, l) == nb) { nboccur++; }
	}
	
	return nboccur;
}

/*******************************************
 * Recherche d'un element
 * entree : l: une liste, nb : l'entier que l'on cherche dans l
 * sortie : un entier entre 0 et taille(l)-1 (-1 si non trouve)
 */
 
int cherche(int nb, liste l) {
	int ind=-1;
	int i;
	 
	for(i=0;i<taille(l) && ind == -1;++i) {
		 if (elt(i, l) == nb) { ind = i; }
	}
	 
	return ind;
}

/*******************************************
 * Concatenation de deux listes
 * entree : deux listes l1 et l2
 * sortie : une nouvelle liste l3
 */
 
liste concatenation(liste l1, liste l2) {
	liste l_result;
	 
	l_result = nouvListe();
	int i;
	// ajout de chaque element de l1 
	for(i=0; i < taille(l1); ++i) {
		adjq(elt(i,l1), l_result);
	}
	
    // ajout de chaque element de l2
	for(i=0; i < taille(l2); ++i) {
	    adjq(elt(i,l2), l_result);
	}
	 
	return l_result;
}

/*******************************************
 * Creation d'une liste triee
 * entree : l : une liste
 * sortie : une nouvelle liste correspondant a l mais triee
 */
 
liste trie(liste l) {
	liste l_result=nouvListe();

	// pour chaque element de l
	int i, ind, cur;
	for(i=0; i < taille(l); ++i) {
		cur = elt(i, l);  // l'element a placer
		// recherche dans l_result l'indice ou placer cur
		ind=0;
		while(ind < taille(l_result) && elt(ind, l_result) < cur) { ++ind; }
		
		insert(cur, l_result, ind);
	}
	return l_result;
}

/*******************************************
 * Interclassement de deux listes
 * entree : l1, l2 : deux listes triees 
 * sortie : une nouvelle liste correspondant au trie de concat(l1,l2)
 */

liste interclasse(liste l1, liste l2) {
	// liste resultat
	liste l_result = nouvListe();
	
	// indice courant l1 et l2
	int ind1 = 0, ind2 = 0;
	int t1 = taille(l1), t2 = taille(l2);
	 
	// tq fin d'une des listes non atteinte
	while (ind1 < t1 && ind2 < t2) {
		if (elt(ind1, l1) < elt(ind2, l2)) {
			adjq(elt(ind1, l1), l_result); 
			++ind1;
		} else {
			adjq(elt(ind2, l2), l_result); 
			++ind2;
		}
	}
	
	// on est arrive a la fin d'une des deux listes, dans la suite, on entre dans un seul while
	
	while (ind1 < t1) { 
		adjq(elt(ind1, l1), l_result); 
		++ind1;
	}
	
	while (ind2 < t2) { 
		adjq(elt(ind2, l2), l_result); 
		++ind2;
	}
	
	return l_result;
}


/*******************************************
 * Teste si une liste est un palindrome
 * entree : l : une liste
 * sortie : 1 si palindrome, 0 sinon
 */
 
  /* version iterative */
int palindrome_iter(liste l) {
	int result = 1; // par defaut l est un palindrome (jusqu a preuve du contraire)
	// ind1 : indice de debut, ind2 : indice de fin
	int ind1 = 0, ind2 = taille(l)-1;
	
	result = 1;
	while (ind1 < ind2 && result == 1) {
		if (elt(ind1, l) != elt(ind2, l)) {
			result = 0;
		}
		++ind1;
		--ind2;
	}
	return result;
}

  /* version recursive */
    /* fonction auxiliaire */
int palindrome_recur_aux(liste l, int ind1, int ind2) {
	// fin de traitement, la liste est un palindrome
	if (ind1 >= ind2) { return 1; }
	
	// pas un palindrome
	if (elt(ind1, l) != elt(ind2, l)) { return 0; }
	
	// sinon on poursuit le test
	return palindrome_recur_aux(l, ind1+1, ind2-1); 
	
}

	/* fonction principale */
int palindrome_recur(liste l) {
	return palindrome_recur_aux(l, 0, taille(l)-1);
}

/*******************************************
 * Renversement d'une liste
 * entree : l : une liste
 * sortie : une nouvelle liste -> l renversee
 */

  /* version iterative */
liste renverse_iter(liste l) {
	liste l_result = nouvListe();
	
	int i=0, fin = taille(l);
	
	while(i < fin) {
		adjt(elt(i, l), l_result);
		++i;
	}
	
	return l_result;
}

  /* version recursive */
         /* fonction auxiliaire */
void renverse_cur(liste l, liste l_result, int ind) {
	if (ind == taille(l)) return;
	adjt(elt(ind, l), l_result);
	renverse_cur(l, l_result, ind+1);
	return;
}
  
liste renverse_recur(liste l) {
	liste l_result = nouvListe();
	
	renverse_cur(l, l_result, 0);
	return l_result;
}

/***************************
 * Programme principal
 */

int main() {
	int i;
	liste li = nouvListe(), li2 = nouvListe();
	
	adjt(1, li);
	adjt(5, li);
	adjt(-7, li);
		
	printf ("liste : "); affiche(li);
	
	printf("taille : %d\n", taille(li));	
	printf("vide ? : %s\n", (estVide(li)?"oui":"non"));	

	for(i=1; i <= 10; ++i) {
		adjq(i*i, li2);
	} 
	printf ("liste : "); affiche(li2);
	printf("tete : %d queue : %d\n", tete(li2), queue(li2));
	printf("====== suppressions =========\n");
	supt(li2);
	printf ("apres supt : "); affiche(li2);
	supq(li2);
	printf ("apres supq : "); affiche(li2);

	// creation de deux listes avec des elements choisis au hasard
	printf("====== tris et renversement =========\n");

	srand(time(NULL));	// initialisation de la suite aleatoire
	printf("liste 11 : ");
	liste l1 = nouvListe();
	for(i=0; i < 15; ++i) {
	  adjt(rand()%30, l1);
	}
	affiche (l1);
	
	printf("liste 12 : ");
	liste l2 = nouvListe();
	for(i=0; i < 10; ++i) {
	  adjt(rand()%30, l2);
	}
	affiche (l2);

	liste l1t = trie(l1);
	liste l2t = trie(l2);
	printf("liste 11 apres trie : "); affiche(l1t);
	printf("liste 12 apres trie : "); affiche(l2t);
	liste l3t = interclasse(l1t,l2t);
	printf("interclassement : "); affiche(l3t);
	
	printf("renversement iter : "); affiche(renverse_iter(l3t));
	printf("renversement recur : "); affiche(renverse_recur(l3t));

	printf("====== palindrome =========\n");

	
	liste lpalin = nouvListe();
	adjt(1, lpalin); 
	adjt(2, lpalin); adjq(2, lpalin);
	adjt(8, lpalin); adjq(8, lpalin);
	printf("liste : "); affiche(lpalin);
	printf("Palindrome (iter) ? %s\n", (palindrome_iter(lpalin)?"oui":"non"));
	printf("Palindrome (recur) ? %s\n", (palindrome_recur(lpalin)?"oui":"non"));
	supt(lpalin);
	printf("liste : "); affiche(lpalin);
	printf("Palindrome (iter) ? %s\n", (palindrome_iter(lpalin)?"oui":"non"));
	printf("Palindrome (recur) ? %s\n", (palindrome_recur(lpalin)?"oui":"non"));
	
	return 0;
}
