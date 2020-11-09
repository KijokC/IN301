#include <stdio.h>
#include <stdlib.h>

#include "piletab.h"
#include "pileptr.h"

void test_piletab () {
	PILETAB P;
	P = creer_pile();	afficher_pile(P);
	empiler(P,12);		afficher_pile(P);
	empiler(P,34);		afficher_pile(P);
	empiler(P,56);		afficher_pile(P);
	empiler(P,78);		afficher_pile(P);
	int x;
	x = depiler(P);		printf("x = %d\n",x); afficher_pile(P);
	x = depiler(P);		printf("x = %d\n",x); afficher_pile(P);

//	int i;
//	for (i=0 ; i<200 ; i++) {
//		empiler(P,i);
//		afficher_pile(P);
//	}

}

void test_pileptr () {
	PILEPTR P;
	P = creer_pile_ptr();	afficher_pile_ptr(P);
	empiler_ptr(P,12);		afficher_pile_ptr(P);
	empiler_ptr(P,34);		afficher_pile_ptr(P);
	empiler_ptr(P,56);		afficher_pile_ptr(P);
	empiler_ptr(P,78);		afficher_pile_ptr(P);
	int x;
	x = depiler_ptr(P);		printf("x = %d\n",x); afficher_pile_ptr(P);
	x = depiler_ptr(P);		printf("x = %d\n",x); afficher_pile_ptr(P);


}


int main() {
	test_piletab();
	test_pileptr();
	return 0;
}
