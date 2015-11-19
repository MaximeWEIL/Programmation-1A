typedef struct liste
{
	int e;
	struct liste *s;

} sliste, *liste;

sliste *liste_vide();

sliste *ajout_tete(sliste *l, int c);

int tete_liste(sliste *l);

sliste *insertion();
