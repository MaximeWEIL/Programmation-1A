#ifndef H_PILE
#define H_PILE

typedef char *T;

typedef struct ELT {
	T e;
	struct ELT *s;
} *elt;


typedef struct PILE {
	elt premier;
	int taille;
} *pile;

pile nouvPile();

void empile(pile, T);

void depile(pile);

int taille(pile);

int estVide(pile);

T sommet(pile);

#endif
