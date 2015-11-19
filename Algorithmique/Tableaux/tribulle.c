#include <stdio.h>

void affiche(int *t, int n)
{
        int i = 0;
        for (i=0; i < n; i++)
        printf("%d ", t[i]);
        printf("\n");
}


void tribulle(int *t,int n)
{

      int i, j, temp;
      
        for(i=0 ; i<n ; ++i)
	{
		for (j=1; j<=n-1; ++j)
		{
		 	if (t[j-1]>t[j])
             	        {
            			temp = t[j-1];
				t[j-1] = t[j];
				t[j] = temp;
            	        }
                 }
	}
}


main()
{
 	 int t[5] = {4,6,21,7,3};
 	 int i=0;

	 affiche(t,5);
 	 tribulle(t,5);
	 affiche(t,5);
	 return 0;
}
