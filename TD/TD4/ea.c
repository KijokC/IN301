#include <stdio.h>
#include <stdlib.h>
#include "ea.h"

EA ea_creer_valeur(float val){
	EA e;
	e = malloc(sizeof(struct noeud));
	if(e == NULL) exit(3);
	e->op_ou_val = EST_VAL;
	e->op  = NO_OP;
	e->val = val;
	e->opg = NULL;
	e->opd = NULL;
	return e;
}


EA ea_creer_operation(char op, EA opg, EA opd){
	EA e;
	e = malloc(sizeof(struct noeud));
	if(e == NULL) exit(3);
	e->op_ou_val = EST_OP;
	e->op  = op;
	e->val = NO_VAL;
	e->opg = opg;
	e->opd = opd;
	return e;
}

float ea_evaluer(EA e){
	if(e->op_ou_val == EST_VAL) return e->val;
	float valg = ea_evaluer(e->opg);
	float vald = ea_evaluer(e->opd);
	if(e->op == '+') return valg + vald;
	if(e->op == '-') return valg - vald;
	if(e->op == '*') return valg * vald;
	if((e->op == '/') &&(vald == 0.0)){
		fprintf(stderr,"PB division par zéro\n");
		exit(10);
	}
	if(e->op == '/') return valg / vald;
	fprintf(stderr,"Problème si on arrive ici\n");
	return 0;
}

void ea_afficher(EA e){
	if(e->op_ou_val == EST_VAL) printf("%.2f",e->val);
	else{
		printf("(");
		ea_afficher(e->opg);
		printf("%c",e->op);
		ea_afficher(e->opd);
		printf(")");
	}
}
