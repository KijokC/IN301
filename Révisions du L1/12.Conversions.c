#include <stdio.h>
#include <stdlib.h>

int main() 
{

	int Ti,Heures,Minutes,Secondes,Reste;
	printf("Combien y a-t-il de secondes ? : ");

	scanf("%d",&Ti);
	Heures = Ti / 3600;
	Reste = Ti%3600;
	Minutes = Reste/60;
	Secondes = Reste%60;
	
	if(Ti == 0 || Ti == 1) printf("%d seconde correspond à ",Ti);
	else printf("%d secondes correspond à ",Ti);
	
	if(Heures == 0 || Heures == 1) printf("%d heure ",Heures);
	else printf("%d heures ",Heures);
	
	if(Minutes == 0 || Minutes == 1) printf("%d minute ",Minutes);
	else printf("%d minutes ",Minutes);

	if(Secondes == 0 || Secondes == 1) printf("%d seconde\n",Secondes);
	else printf("%d secondes\n",Secondes);
}
