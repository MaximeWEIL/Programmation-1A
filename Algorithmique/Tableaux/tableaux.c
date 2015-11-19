#include <stdio.h>

void affiche(int *t, int n)
{
        int i;
        for (i=0 ; i < n ; i++)
        {
                printf("%d ",t[i]);
        }
}

void read(int *t, int n)
{
	int i;
	int nombre=0;
	for (i=0; i<n; i++)
	{
		printf("Entrez un nombre ");
		scanf("%d", &nombre);
		t[i] = nombre;
	}
}

int max(int *t, int n)
{
	int i;
	int valmax=t[0];
	for (i=1 ; i < n ; i++)
	{
		if (t[i] > valmax)
		{
			valmax = t[i];
		}
	}
	return valmax;

}

int recherche(int *t, int n, int el)
{
	int i=0;
	int compteur=0;
	while (i<n)
	{
		if (t[i] == el)
		{
			compteur++;
			i++;
		}
		else
		{
			i++;
		}
	}
	return compteur;
}

void swap(int *t, int n, int i, int j)
{
	printf("A présent nous allons inverser le %dème élément et le %dème élément\n", i ,j);
	int temp=0;
	if (i<=n && j<=n)
	{
		temp = t[j];
		t[j] = t[i];
		t[i] = temp;
	}
}

main()
{
	printf("Le tableau sera de taille 5\n");

        int t[5]={0};
	int maximum=0;
	int el=0;
	int occur=0;

	read(t,5);

	printf("Voici le tableau :\n");
        affiche(t,5);

	printf("\nLe maximum est %d \n", max(t,5));

	printf("Choisissez un nombre à rechercher :");
	scanf("%d", &el);
	occur = recherche(t,5,el);
	if (occur>=1)
	{
		printf("L'élément %d est dans le tableau, %d fois\n", el, occur);
	}
	else
	{
		printf("L'élément %d n'est pas dans le tableau.\n", el);
	}

//	swap(t,5,2,3);
//	printf("Voici le nouveau tableau :\n");
//	affiche(t,5);


	return 0;
}

