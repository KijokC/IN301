#include <stdio.h>
#include <stdlib.h>
#include "token.h"


TOKEN token_ajouter_fin_liste(TOKEN t, float val){
	// Création du nouvel élément à ajouter
	TOKEN e;
	e = malloc(sizeof(struct token));
	if(e == NULL) exit(2);
	e->val = val;
	e->suiv = NULL;
	e->prec = NULL;
	
	// Cas de la liste vide
	if(t == NULL) return e;
	
	// Cas général
	TOKEN tdeb = t;
	//déplacer t pour qu'il pointe sur le dernier élément
	while(t->suiv != NULL){
		t = t->suiv;
	}
	t->suiv = e;
	e->prec = t;
	return tdeb ;
}

TOKEN token_ajouter_fin_liste_rec(TOKEN t, float val){
	if(t == NULL){
		t = malloc(sizeof(struct token));
		if(!t) exit(2);
		t->val  = val;
		t->suiv = NULL;
		return t;
	}
	t->suiv = token_ajouter_fin_liste_rec(t->suiv,val);
	return t;
}

void token_afficher(TOKEN t){
	printf("#");
	while(t != NULL) {
		printf(" %.2f",t->val);
		t = t->suiv;
	}
	printf("#");
	printf("\n");
}
