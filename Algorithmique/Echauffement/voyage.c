#include <stdio.h>
#include <math.h>
main ()

{

	float dep;
	float arr;
	float temps;
	int heure;
	int min;

	printf ("Veuillez entrez l'heure de départ (au format hh.mm) \n");
	scanf ("%f",&dep);

	printf ("Veuillez entre l'heure d'arrivée (au format hh.mm) \n");
	scanf ("%f",&arr);
	
	if (arr<dep)
	{
		temps = (arr - dep)+24.00;
		heure = (int)temps;
		min = (temps - heure) * 100; 
	}
	else
	{
		temps = arr - dep;
		heure = (int)temps;
		min = (temps - heure)*100;
	}	

	printf ("%d",heure);
	printf (" heures\n");

	printf ("%d",min);
	printf (" minutes\n");

}


