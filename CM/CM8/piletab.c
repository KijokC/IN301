#include <stdio.h>
#include <stdlib.h>
#include "piletab.h"

PILETAB creer_pile() {
	PILETAB P;
	P = malloc(sizeof(struct piletab));
	if (P == NULL) {
		fprintf(stderr,"PB IMPLEMENTATION: pb malloc struct piletab\n");
		exit(3);
	}
	P->N = 0;
	P->V = malloc(TAILLEMAXPILE*sizeof(int));
	if (P->V == NULL) {
		fprintf(stderr,"PB IMPLEMENTATION: pb malloc int\n");
		exit(3);
	}
	return P;
}

int est_vide (PILETAB P) {
	return (P->N == 0);
}

void empiler (PILETAB P, int x) {
	if (P->N == TAILLEMAXPILE) {
		fprintf(stderr,"PB IMPLEMENTATION: la pile est pleine...\n");
		exit(2);
	}
	P->V[P->N] = x;
	(P->N)++;
}

int depiler (PILETAB P) {
	if (P->N == 0) {
		fprintf(stderr,"ERREUR: On ne peut pas depiler sur une pile vide.\n");
		exit(1);
	}
	(P->N)--;
	return P->V[P->N];
}	

void afficher_pile (PILETAB P){
	printf("#");
	int i;
	for (i=0 ; i<P->N ; i++) {
		printf(" %d",P->V[i]);
	}
	printf("#\n");
}
