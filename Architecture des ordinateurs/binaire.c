#include <stdlib.h>
#include <stdio.h>
#include <math.h>

void ConversionINT(int deci)
{
	if(deci/2 != 0)
		{
			Conversion(deci/2);
		}
	printf("%d\n", deci%2);
}

void ConversionFLOAT(float frac)
{
	int unite = val*2.0;
	float reste = val*2.0-unite;
	printf("%d",unite);
	if(reste!=0)
	{
		ConversionFLOAT(reste);
	}
}


}

int main()
{
	int x = 0;
	printf("Choisissez un entier ? ");
	scanf("%d", &x);
	ConversionINT(x);

	float f = 0.00;
	printf("Choisissez un flotant ? ");
	scanf("%f", &f);
	ConversionFLOAT(f);
}
