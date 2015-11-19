#include <stdio.h>
#include <math.h>

main ()
{
	int resultat = 0;
	int Limite = 0;
	int i;

	printf("Veuillez choisir le nombre de répétitions\n");
	scanf("%d", &Limite);
	
	for (i=0; i < (Limite+1) ; i++)
	{
		resultat = resultat + (i * i);
	}

	printf("La somme est égale à %d avec %d comme répétitions\n", resultat, Limite);

	return 0;
}
