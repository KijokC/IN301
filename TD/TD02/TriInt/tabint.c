#include "tabint.h"
//#include "stat.h"
#include <stdio.h>
#include <stdlib.h>


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
	return T;
}

TABINT sup_tabint (TABINT T) {
	return T;
}

void aff_tabint (TABINT T) {
}


int verif_si_tableau_croissant (TABINT T) {
	return 0;
}

