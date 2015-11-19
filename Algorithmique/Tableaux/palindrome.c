#include <stdio.h>

int palindrome (int *t, int n)
{
	int i; int result;
	for(i=0 ; i < n ; i++)
	{
		if(t[i] != (t[n-1-i]))
		{
			return result = 0;
		}
	}
	return result = 1;
}

main()
{
	int t[5] = {3,2,1,2,3};
	if (palindrome(t,5) == 1)
	{
		printf("Le tableau est un palindrome ! \n");
	}
	else
	{
		printf("Ce n'est pas un palindrome ! \n");
	}
	return 0;
}
