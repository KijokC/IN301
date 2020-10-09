#include <stdio.h>
#include <stdlib.h>

#include "fonction.h"

int main() {
	int a,b,c;
	a = 3;
	b = 1;
	c = calcul(a,b-a);
	printf("c = %d\n",c);
	return 0;
}
