#include <stdio.h>
#include <stdlib.h>
#include "ea.h"


int main() {
	EA e,eg,ed;
	eg = ea_creer_valeur (12.3);
	ed = ea_creer_valeur (4.56);
	e  = ea_creer_operation ('+',eg,ed);
	printf("%f\n",ea_evaluer (e));
	return 0;
}
