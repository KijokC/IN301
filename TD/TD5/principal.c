#include <stdio.h>
#include <stdlib.h>

#include "token.h"

int main () {
	TOKEN t = NULL;
	token_afficher(t);

	t = token_ajouter_fin_liste_rec (t, 2.3);
	token_afficher(t);
	
	t = token_ajouter_fin_liste_rec (t, 8);
	token_afficher(t);

	t = token_ajouter_fin_liste_rec (t, 5.12);
	token_afficher(t);

	t = token_ajouter_fin_liste_rec (t, -3.14);
	token_afficher(t);
	return 0;
}
