#include <stdio.h>

int plusgrand(int *t, int n)
{
	int i;
	int premier = t[0];
	int deuxieme = t[1];

	for (i=1 ; i < n; i++)
	{
		if (t[i] > premier)
		{
			deuxieme = premier;
			premier = t[i];
		}
		else if (t[i] > deuxieme)
		{
			deuxieme = t[i];
		}
	}
	return deuxieme;
}

main ()
{
	int t[5] = {1,10,13,4,8};
	int resultat;
	
	resultat = plusgrand(t,5);
	printf("Le deuxième plus grand nombre est %d \n", resultat);
	
	return 0;
}
