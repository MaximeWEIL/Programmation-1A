#include <stdio.h>
#include <stdlib.h>

// gcc -o leak leak.c
// valgrind leak
// gcc ... -g
// valgrind leak
// valgrind --tool=memcheck --leak-check=yes --leak-resolution=high --show-reachable=yes leak
// rem : memcheck par défaut, leak-check pour faire les rapports
//	leak-resolution : maximum d'infos dans les rapports
//  show-reachable = faire aussi les rapports (et pas uniquement le bilan final) pour les still reachable

void f() {
	int *ptr = (int *)malloc(sizeof(int)*100);
}

void indirect_leak() {
	int **p = (int **)malloc(sizeof(int *)*1);
	
	*p = (int *)malloc(sizeof(int)*1);
	// free(p);
}

int *still_reachable;

int main() {
	 int *p;
	 
	 p = (int *)malloc(sizeof(int)*5);
	 p[5] = 10;
	 
	 free(p);
	 
	 p[0] = 6;
	 
	 f();
	 
	 still_reachable = (int *)malloc(sizeof(int)*5);
	 
	 indirect_leak();
}
