#include "tabint.h"
//#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

//HELLO

// #####
// 1. Allocation, désallocation, génération aléatoire
//    et affichage de tableaux
// #####
TABINT alloue_tabint (int taille) {
	TABINT T;
	T.N = taille;
	T.val = malloc(taille*sizeof(int));
	if (T.val == NULL) exit(23);
	return T;
}
TABINT desalloue_tabint (TABINT T) {
	free(T.val);
	T.val = NULL;
	T.N = 0;
	return T;
}

TABINT gen_alea_tabint (int N, int K) {
	TABINT T;
	T = alloue_tabint(N);
	int i;
	for(i = 0; i < T.N; i++)
	{
			T.val[i] = rand() % K;
	}
	return T;
}

TABINT sup_tabint (TABINT T) {
	return T;
}

void aff_tabint (TABINT T) {
	int i; 
	for(i = 0; i < T.N; i++)
	{
		printf(" %3d",T.val[i]);
	}
	printf("\n");
}

//Renvoie 1 si le tableau est croissant et 0 sinon
int verif_si_tableau_croissant (TABINT T) {
	int i;
	for(i = 0; i < T.N-1; i++)
	{
		if(T.val[i] > T.val[i+1]) return 0;
	}
	return 1;
}

