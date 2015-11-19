typedef struct sarbin
	{
		struct sarbin *g;
		int e;
		struct sarbin *d;
	}
	sarbin, *Arbin;

sarbin* vide();

sarbin* enracinement(sarbin *g, int f, sarbin *d);

void affiche_etiquette(int e);

void affiche2(int e);

void infixe (sarbin *a, void(*pr)(int));

void prefixe (sarbin *a, void(*pr)(int));

void postfixe (sarbin *a, void(*pr)(int));

int taille(sarbin *a);
