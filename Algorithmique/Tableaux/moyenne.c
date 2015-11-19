#include <stdio.h>

float moyenne (int *t, int n)
{
	int i; float moyenne = 0.0; int somme = 0;
	for (i=0 ; i < n ; i++)
	{
		somme = somme + t[i];
	}

	moyenne = ((float)somme / n);
	
	return moyenne;
}

main()
{
	float resultat;
	int t[4] = {3,56,12,23};
	
	resultat = moyenne(t,4);

	printf("La moyenne du tableau est %f\n", resultat);

	return 0;
}
