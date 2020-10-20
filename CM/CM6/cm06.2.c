#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main () {
	// Tableau de tableau
	int T[10][20];
	
	int **S;
	S = malloc(10*sizeof(int*));
	int i;
	for (i=0 ; i<20 ; i++) {
		S[i] = malloc(20*sizeof(int));
	}

	// Chaine de caractère
	char *X = "toto";
	printf("%s %lu\n",X,strlen(X));
	
	char *Y;
	Y = malloc(23*sizeof(char));

	for (i = 0 ; i<10 ; i++) {
		printf("%d #%c#\n",i,Y[i]);
	}
	Y[0] = 'A';
	Y[1] = 'B';
	Y[2] = '\0'; // ou Y[2] = 0;
	Y[3] = 'C';
	
	printf("%s %lu\n",Y,strlen(Y));
	
	sprintf(Y,"Bonjour");
	printf("%s %lu\n",Y,strlen(Y));
	printf("%c\n",Y[3]);
	int N = 10;
	int K = 23;
	char nomfic[64]; // Sur-réservation

	sprintf(nomfic,"data_%03d_%03d.txt",N,K);
	FILE *F;
	F = fopen(nomfic,"w");
	fclose(F);
	return 0;
}

