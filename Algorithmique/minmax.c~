#include <stdio.h>

int minmax(int tab[], int taille, int *max) {
   int min;
   int i;
	min = tab[0];
	*max = tab[0];
		for (i=0; i<taille; ++i) {
			if (tab[i] < min) {
				min = tab[i];
				}
			if (tab[i] > *max) {
				*max = tab[i];
				}
			}
  return min;
}

int main ()
{
	int tableau[3] = {3,1,5};
	int max;
	int min;

	min = minmax(tableau,3,&max);

	printf ("Minimum = %d\nMaximum = %d\n", min, max);
}
