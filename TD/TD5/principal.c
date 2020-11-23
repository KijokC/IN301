#include <stdio.h>
#include <stdlib.h>
#include "token.h"

int main() {
	TOKEN t = NULL;
	t = token_ajouter_fin_liste(t, 2.3);
	token_afficher(t);

	t = token_ajouter_fin_liste(t, 8);
	token_afficher(t);

	t = token_ajouter_fin_liste(t, 5.12);
	token_afficher(t);

	t = token_ajouter_fin_liste(t, -3.14);
	token_afficher(t);
	return 0;
}
