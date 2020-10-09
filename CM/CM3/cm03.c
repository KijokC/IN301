#include <stdio.h>
#include <stdlib.h>

#define toto "Bonjour ca va\n"

int main (int argc, char *argv[]) {
//	printf("%d\n",argc);
//	int i;
//	for (i=0 ; i<argc ; i++) {
//		printf("%d %s\n",i,argv[i]);
//	}
	int N;
	int VALMAX;
	N = atoi(argv[1]);
	VALMAX = atoi(argv[2]);
	char nomfic[64];
	sprintf(nomfic,"fic_%d_%d.txt",N,VALMAX);
	FILE * F;
	F = fopen(nomfic,"w");
	int i;
	for (i=0 ; i<N ; i++) {
		fprintf(F,"%d\n",rand()%VALMAX);
	}
	fclose(F);
	return 0;
}
/*
variable a contient 4 octets :
0000 00000  0000 0000   0101 1010  1100 0010

variable c contient 1 octet :
 0101 1010
*/

/*
argc : arguments count
argv : arguments values
*/
