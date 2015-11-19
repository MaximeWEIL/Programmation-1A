#ifndef __LISTE_TAB_H
#define __LISTE_TAB_H

typedef struct LISTE {
  int *tab;
  int taille;
  int nb_elements;
} *liste;

liste nouvListe();			// nouvelle liste
void adjt(int, liste);   	// adjonction en tête
void adjq(int, liste);		// adjonction en queue
int taille(liste); 	        // rend la taille de la liste

void insert(int e, liste l, int ind); // insertion de e dans l a la place ind (0 <= ind <= taille(l))
int tete(liste);           	// rend la tête de la liste
int queue(liste); 	   	// rend la fin de la liste
void supt(liste);	       	// suppression en tête
void supq(liste);        	// suppression en queue
int estVide(liste);    		// 1 liste vide, 0 sinon
int elt(int ind, liste);    // rend un élément (0 <= ind < taille(l))
void fermeListe(liste);		// clos la liste

#endif
