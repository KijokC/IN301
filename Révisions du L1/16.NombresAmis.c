#include <stdio.h>
#include <stdlib.h>

int main()
{
	int m,n;
	int mdiv,ndiv,i;
	printf("Veuillez entrer le premier nombre : ");
	scanf("%d",&m);
	printf("Veuillez entrer le deuxième nombre : ");
	scanf("%d",&n);
	mdiv = 1; ndiv = 1; 
	
	for(i = 2; i  < n - 2; i++)
	{
		if(n%i == 0) ndiv += i;
	}
	
	for(i = 2; i < m - 2; i++)
	{
		if(m%i == 0) mdiv += i;
	}

	if(mdiv == n && ndiv == m) printf(" %d et %d sont des nombres amis",m,n);
	else printf("%d et %d ne sont pas des nombres amis",m,n);
}
