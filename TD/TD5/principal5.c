#include <stdio.h>
#include <stdlib.h>

#include "token.h"


float calculer_val (char *s) {
	float x = 0.0;
	while (*s != '\0') {
		x = 10*x + *s -'0';
		s++;
	}
	return x;
}


int main () {
	TOKEN t = NULL;
	token_afficher(t);


	t = token_creer_liste ("(  278965+  (  31.415 * 4  ))");
	token_afficher(t);

	return 0;
}
