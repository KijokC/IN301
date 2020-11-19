#include <stdio.h>
#include <stdlib.h>
#include "ea.h"

int main()
{
	EA e,eg,ed;
	eg = ea_creer_valeur(12.3);
	ed = ea_creer_valeur(4.56);
	e = ea_creer_operation('+',eg,ed);
	printf("%f\n",ea_evaluer(e));
	ea_afficher(e);
	printf("\n");
	
	EA e1,e2,e3,e4,e5;
	e1 = ea_creer_valeur(1);
	e2 = ea_creer_valeur(2);
	e3 = ea_creer_valeur(3);
	e4 = ea_creer_valeur(4);
	e5 = ea_creer_valeur(5);
	EA e12,e43,e543;
	e12  = ea_creer_operation('+',e1,e2);
	e43  = ea_creer_operation('-',e4,e3);
	e543 = ea_creer_operation('-',e5,e43);
	e    = ea_creer_operation('*',e12,e543);
	printf("%f\n",ea_evaluer(e));
	return 0;
}
