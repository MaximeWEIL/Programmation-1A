#include <stdio.h>

main()
{
	 int i;
	 int j;
	 int n = 5;
	 int temp;
	 int indice_max;
	 int t[5] = {5,6,10,4,7};

	 printf("Tableau donné :\n");
 	 for (j=0; j<n; j++)
 	 printf("%d ", t[j]);
 	 printf("\n");

 	 for (i=0; i<n-1; i++)
     	 {
     	       indice_max=i;
      	       for (j=i+1; j<n; j++)
	       {
         	if (t[j]>t[indice_max]) indice_max=j;
     	        temp=t[i];
                t[i]=t[indice_max];
                t[indice_max]=temp;
    	       }
 	 }

	 printf("Tableau trié :\n");
	 for (j=n-1; j>=0; j--)
     	 printf("%d ", t[j]);
	 printf("\n");
	 return 0;
}
