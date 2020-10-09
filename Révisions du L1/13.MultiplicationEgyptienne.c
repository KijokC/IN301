#include <stdio.h>
#include <stdlib.h>

int main()
{
	int X,Y,Reste,Resultat;
	Reste = 0;
	printf("Veuillez entrer le premier nombre : ");
	scanf("%d",&X);
	printf("Veuillez entrer le deuxième nombre : ");
	scanf("%d",&Y);
	
	printf("%d x %d\n",X,Y);
	while(X != 1)
	{
		if(X%2 != 0) 
		{
			Reste += Y;
			X--;
		}
		else
		{
			X = X/2;
			Y = Y*2;
		}
		printf("= %d x %d + %d\n",X,Y,Reste);
	}
	
	Resultat = Y + Reste;
	printf("= %d",Resultat);
}
