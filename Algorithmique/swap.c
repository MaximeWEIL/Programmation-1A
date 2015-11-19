#include <stdio.h>

void swap(int *x,int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main() 
{
	int a=2, b=9;
	printf ("a=%d\n""b=%d\n",a,b);	
	swap(&a,&b);
	printf ("a=%d\n""b=%d\n",a,b);
	return 0;
}
