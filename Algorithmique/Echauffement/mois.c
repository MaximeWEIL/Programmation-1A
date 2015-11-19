#include <stdio.h>

main ()
{
	int x;

	printf ("Entrez un nombre entre 1 et 12 \n");
	scanf("%d",&x);

	if (x==1 || x==3 || x==5 || x==7 || x==8 || x==10 || x==12)
	{
		printf ("Ce mois a 31 jours ! \n");
	}
	else if (x==2)
	{
		printf ("Ce mois a 28 jours ! \n");
	}
	else
	{
		printf ("Ce mois a 30 jours ! \n");
	}
	return 0;

}	
