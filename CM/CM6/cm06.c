#include <stdio.h>
#include <stdlib.h>


int main () {
	int *T;
	T = malloc(10*sizeof(int));
	T[2] = 34;
	T[10] = 52; // En dehors de la mémoire réservée
	printf("%d\n",T[10]);
	
	int a;
	int *b;
	b = &a;
	*b = 78;
	printf("%d\n",a);
	b[0] = 84;
	printf("%d\n",a);
	b[1] = 102; // En dehors de la mémoire réservée
	
	return 0;
}


// Comment se rendre compte que l'on dépasse
// les bornes d'un tableau

// Segmentation fault / core dumped


// Etape 1: compiler avec l'option -g
//          ajoute des informations pour le debugage
// Etape 2: utiliser un outil de vérification de
//          l'usage de la mémoire : valgrind
