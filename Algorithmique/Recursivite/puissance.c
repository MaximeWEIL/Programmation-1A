#include <stdio.h>

int puissint(int x, int n)
	{
		int r = 1;
		int i;
		for (i=0 ; i < n ; i++)
			{
				r = r*x;
			}
		return r;
	}

int puissrecur1(int x, int n)
{
	if (n==0) return 1;
		else return (x*puissrecur1(x,n-1));
}

int puissrecur2(int x, int n)
{
	if (n==0) return 1;
		else if(n%2==0)
			{
				return (puissrecur2(x,n/2) * puissrecur2(x,n/2));
			}
			else return x * puissrecur2(x,n-1);
}

int puissrecur3(int x, int n)
{
	if (n==0) return 1;
		else if (n%2==0)
			{
				return puissrecur3(x*x,n/2);
			}
			else return x * puissrecur3(x,n-1);

}


main()
{
	int x = 0 ; int n = 0;

	printf("Choisissez un entier : \n");
	scanf("%d", &x);

	printf("Choisissez la puissance : \n");
	scanf("%d", &n);

	printf("Le résultat (avec fonction int) est : %d \n", puissint(x,n));
	printf("Le résultat (avec recur1) est : %d \n", puissrecur1(x,n));
        printf("Le résultat (avec recur2) est : %d \n", puissrecur2(x,n));
        printf("Le résultat (avec recur3) est : %d \n", puissrecur3(x,n));

	int p = 0;

	while (puissrecur3(10,p) < puissrecur3(10,p+1))
	{
		p++;
	}

	printf("10^p : %d\n", p);
	printf("10^p+1 : %d\n", p+1);



}

