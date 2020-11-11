#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "constantes.h"

void ecrire() {
	FILE *F;
	F = fopen(NOMFIC,"w");
	if (F==NULL) exit(1);
	// A décommenter si on veut des séauences
	// différentes à chaque exécution
	// srand(getpid());
	int i;
	for (i=0 ; i<N ; i++) {
		int val;
		val = rand()%MAX;
		fprintf(F,"%6d\n",val);
	}
	fclose(F);
}

int main() {
	ecrire();
	return 0;
}
