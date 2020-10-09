#include <stdio.h>
#include <stdlib.h>

#define N 100

void f() {
	// Allocation statique
	int S[2*N];
	int i;
	for (i=0 ; i<2*N ; i++) {
		S[i] = rand();
	}
	// trier le tableau S
	// afficher le tableau S
}



int main () {
	// Allocation (de mémoire) statique
	int T[N]; 	// Réserve N cases pour 
				// stocker des int
				// T occupe 4xN octets
	int i;
	for (i=0 ; i<N ; i++) {
		T[i] = i;
	}
	// Allocation (de mémoire) dynamique
	int *Dyn; 	// Le type de la variable Dyn
				// est int *
				// La variable Dyn contient
				// une adresse (l'adresse d'un
				// int),
				// Dyn est un pointeur
				// Dyn occupe 4 octets
	Dyn = malloc(N*sizeof(int));
	if (Dyn==NULL) exit(1);
				// sizeof(int) : macro qui renvoie la 
				// taille d'un int (généralement 4 octets)
				// la fonction malloc demande de réserver
				// la taille mémoire donnée en argument
				// mesurée en octet
	// (1) Dyn va contenir l'adresse de début 
	// de la zone mémoire allouée
	// (2) la zone mémoire allouée est une suite d'octets
	// qui se suivent
	// Par exemple la zone mémoire allouée pourrait être :
	// les octets numéro (adresse) 504, 505, 506, ...,
	// 902, 903
	// et Dyn contiendrait ma valeur 504
	printf("adresse de i : %p\n",&i);
	printf("Dyn = %p\n",Dyn);
	
	for (i=0 ; i<N ; i++ ) {
		Dyn[i] = rand();
	}
	// Pour rendre la mémoire : fonction free()
	free(Dyn);
	
	printf("NULL = %p\n",NULL);
	Dyn = malloc(200);
	if (Dyn==NULL) exit(1);
	
	printf("Dyn = %p\n",Dyn);
	



				
	f();
	return 0;
}
