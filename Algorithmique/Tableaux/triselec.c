#include <stdio.h>

int max(int *t, int n)
{
	int i;
	int indice_max = 0;
	
	while (i < n)
	{
		if (t[i] > t[indice_max])
		{
			indice_max = i;
		}
		i++;
	}
	
	return indice_max;
}

void echange (int *t, int x, int y)
{
	int temp;

	temp = t[x];
	t[x] = t[y];
	t[y] = temp;
}

void triselec(int *t, int n)
{
	int indice_max;

	for (; n>1 ; n--)
	{
		indice_max = max(t,10);
		echange(t, n-1, indice_max);
	}
}

main()
{
        int t[10] = {10,41,24,3,5,9,47,56,8,9};
	max(t,10);
	echange (t,n-1,indice_max);
        triselec(t,10);

        int i;
        for (i=0 ; i < n ; i++)
        {
                printf("%d",t[i]);
        }
        printf("\n");
        return 0;
}


