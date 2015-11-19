typedef struct sabr
	{
		struct sabr *g;
		int e;
		struct sabr *d;
	}
	sabr, *abr;

sabr* vide();

sabr* insert(int f, sabr *a);

sabr* enracinement(sabr *g, int f, sabr *d);

int plusPetitElt(sabr *a); 

int plusGrandElt(sabr *a); 
        
int recherche(int elt, sabr *a);

void affiche_etiquette(int e);

void affiche2(int e);

void infixe (sabr *a, void(*pr)(int));

void prefixe (sabr *a, void(*pr)(int));

void postfixe (sabr *a, void(*pr)(int));

int taille(sabr *a);

int hauteur(sabr *a);

int somme(sabr *a);

int tous_positifs(sabr *a);








			
