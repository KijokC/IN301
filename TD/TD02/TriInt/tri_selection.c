#include "tabint.h"
//#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

//Renvoie l'indice du max de T entre les indices [0..fin]
int recherche_indice_du_max(TABINT T, int fin)
{
	int i,imax;
	imax = 0;
	for(i = 1; i <= fin; i++)
	{
		if(T.val[i] > T.val[imax]) imax = i;
	}
	return imax;
}

void tri_selection(TABINT T)
{
	int fin = T.N-1;
	while(fin > 0)
	{
		int imax;
		imax = recherche_indice_du_max(T,fin);
		int tmp     = T.val[fin];
		T.val[fin]  = T.val[imax];
		T.val[imax] = tmp;
		fin--;
	}
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
	
	if(N <20) aff_tabint(T);
	printf("%d\n",verif_si_tableau_croissant(T));
	
	tri_selection(T);
	
	if(N <20) aff_tabint(T);
	printf("%d\n",verif_si_tableau_croissant(T));
	
	exit(0);
}
