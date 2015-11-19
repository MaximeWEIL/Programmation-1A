#include <stdio.h>
#include <stdlib.h>  // pour srand et rand
#include <time.h>    // pour srand
#include "liste_tableau.h"

/*******************************************
 * Affichage d'une liste
 * entree : une liste
 * sortie : -
 */



int main() {
	int i;
	clock_t start_1;
	clock_t end_1;

	clock_t start_2;
	clock_t end_2;

	liste l1 = nouvListe();
	liste l2 = nouvListe();


	start_1 = clock();
	srand(time(NULL));	// initialisation de la suite aleatoire
	


	for(i=0; i < 10000; ++i) {
	  adjt(rand()%100, l1);
	}
	end_1 = clock();
	double time1 = (double)(end_1-start_1)/CLOCKS_PER_SEC;

	//printf("res : %f", res);
	
	start_2 = clock();
	for(i=0; i < 10001; ++i) {
	  adjq(rand()%100, l2);
	}
	end_2 = clock();	
	double time2 = (double)(end_2-start_2)/CLOCKS_PER_SEC;
	
	printf("Debut : %f, Fin : %f, res = %f \n", time1, time2, time2-time1);
	
}

