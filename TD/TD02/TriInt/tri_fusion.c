#include "tabint.h"
//#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

void fusion(TABINT T, int deb, int mil, int fin)
{
	int *S;
	S = malloc((fin-deb+1)*sizeof(int));
	int i1,i2,i;
	i1 = deb;
	i2 = mil+1;
	i = 0;
	//On doit s'arreter des qu'un des deux tableaux est "fini"
	while(i1 <= mil && i2 <= fin)
	{
		if(T.val[i1] < T.val[i2])
		{
			S[i] = T.val[i1];	i1++;	i++;
		}
		else
		{
			S[i] = T.val[i2];	i2++;	i++;
		}
	}
	//On finit le tableau qui reste
	//On ne passe que dnas un seul des while
	while(i1 <= mil) { S[i] = T.val[i1]; i1++; i++;}
	while(i2 <= fin) { S[i] = T.val[i2]; i2++; i++;}
	
	//recopie de S dans T.Val
	for(i = deb; i <= fin; i++) {T.val[i] = S[i-deb];}

	free(S);
}

void tf(TABINT T, int deb, int fin)
{
//	printf(" %d %d\n",deb,fin);
	
	//Cas qui ne doit pas arriver
	if(fin < deb) exit(5);
	//Arret de la recursion
	if(deb == fin) return;
	
	//Recursion (deb < fin)
	int mil = (deb + fin)/2;
	tf(T,deb,mil);
	tf(T,mil+1,fin);
	fusion(T,deb,mil,fin);
}

void tri_fusion(TABINT T)
{
	tf(T,0,T.N-1);
}

int main(int argc, char*argv[]) 
{
//	printf("argc = %d\n",argc);
	if(argc != 2)
	{
		fprintf(stderr,"Usage: ./tri_bulle N \n");
		exit(12);
	}
	int N;
	N = atoi(argv[1]);
	printf("N = %d\n",N);
	
	TABINT T;
	T = gen_alea_tabint(N,100);
	aff_tabint(T);
	printf("%d\n",verif_si_tableau_croissant(T));
	
	tri_fusion(T);
	
	aff_tabint(T);
	printf("%d\n",verif_si_tableau_croissant(T));
	
	exit(0);
}
