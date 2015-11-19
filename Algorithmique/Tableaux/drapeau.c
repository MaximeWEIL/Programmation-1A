#include <stdio.h>
#define B 0 
#define W 1
#define R 2

void echange (int *t, int n, int i, int j)
{
        int aux = t[i];
        t[i] = t[j];
        t[j] = aux;
}



void drapeau(int *t, int n)
{
	int iB = 0;
	int iR = n-1;
	int i = 0;

	while (i<iR)
	{
		if (t[i] == B)
		{
			echange (t,n,i,iB);
			iB++;
			i++;
		}
		else if (t[i] == W)
		{
			i++;
		}
		else
		{
			echange(t,n,i,iR);
			iR--;
		}
	}
}


int affiche(int *t, int n)
{
	int i;
	for (i=0 ; i < n ; i++)
	{
		printf("%d",t[i]);
	}
	printf("\n");
	return 0;
}

main()
{
	int t[10] = {W,W,R,W,B,B,R,W,B,W};
	affiche(t,10); // affiche le tableau avant modif
	drapeau(t,10);
	echange(t,10,B,R);
	affiche(t,10); // affiche le tableau après modif
	return 0;
}
