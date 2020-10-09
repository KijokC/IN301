#include <stdio.h>
#include <stdlib.h>

#include "constantes.h"

int T[N];

void lire() {
	FILE *F;
	F = fopen(NOMFIC,"r");
	if (F==NULL) exit(1);
	int i;
	for (i=0 ; i<N ; i++) {
		int val;
		fscanf(F,"%d",&val);
		T[i] = val;
	}
	fclose(F);
}

void ecrire() {
	FILE *F;
	F = fopen("nombres-verif.data","w");
	int i;
	for (i=0 ; i<N ; i++) {
		fprintf(F,"%6d\n",T[i]);
	}
	fclose(F);
}

int main() {
	lire();
	ecrire();
	return 0;
}
