#include <stdio.h>


int appartenance (int *t, int n, int valeur)
{
	int i;
	for (i=0 ; i < n ; i++)
	{
		if (t[i] == valeur)
		{
			valeur = 1;
		}
	}
	return valeur;
}

main()
{
	int t[4] = {1,2,3,4};
	if (appartenance(t,4,3) == 1)
	{
		printf("L'élément est bien présent dans le tableau\n");
	}
	else
	{
		printf("L'élément n'est pas dans le tableau \n");
	}
	return 0;
}
