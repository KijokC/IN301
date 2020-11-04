#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Nombre,i,Check,vof;
	printf("0 et 1 ne sont pas des nombres premiers selon la définition\n" );
	printf("Rentrez votre nombre : ");
	scanf("%d",&Nombre);
	Check = 1;
	vof = 0;
	if(Nombre == 0 || Nombre == 1)
	{
		printf("%d n'est pas un nombre premier\n",Nombre);
		return(0);
	}
	for(i = 2; i + 1 < Nombre; i++)
	{
		Check = Nombre%i;
		if(Check == 0) vof = 1;
	}
	if(vof == 0) printf("%d est un nombre premier\n",Nombre);
	else printf("%d n'est pas un nombre premier\n",Nombre);
}
