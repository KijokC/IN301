#include "tabint.h"
//#include "stat.h"
#include <stdio.h>
#include <stdlib.h>

void tri_bulle(TABINT T)
{
	int i;
	int fin = T.N-1;
	while(fin>0)
	{
		for(i = 0; i < fin; i++)
		{								//SI pas dans le bon ordre échange
			if(T.val[i] > T.val[i+1])
			{
				int tmp    = T.val[i];
				T.val[i]   = T.val[i+1];
				T.val[i+1] = tmp;
			}
		}
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
	
	tri_bulle(T);
	
	if(N <20) aff_tabint(T);
	printf("%d\n",verif_si_tableau_croissant(T));
	
	exit(0);
}
