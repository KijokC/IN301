#include <stdio.h>
#include <stdlib.h>
#include "ea.h"

EA ea_creer_valeur (float val) {
	EA e = malloc(sizeof(struct noeud));
	if (!e) exit(1);
	e->op_ou_val = EST_VAL;
	e->op = NO_OP;
	e->val = val;
	e->opg = NULL;
	e->opd = NULL;
	return e;
}

EA ea_creer_operation (char op, EA opg, EA opd) {
	EA e = malloc(sizeof(struct noeud));
	if (!e) exit(1);
	e->op_ou_val = EST_OP;
	e->op = op;
	e->val = NO_VAL;
	e->opg = opg;
	e->opd = opd;
	return e;
}

float ea_evaluer(EA e) {
	if (e == NULL) {
		fprintf(stderr,"e vaut NULL: ca ne devrait pas arriver\n");
		exit(2);
	}
	if (e->op_ou_val == EST_VAL) return e->val;
	float valg = ea_evaluer(e->opg);
	float vald = ea_evaluer(e->opd);
	if (e->op == '+') return valg + vald;
	if (e->op == '-') return valg - vald;
	if (e->op == '*') return valg * vald;
	if (e->op == '/') {
		if (vald == 0.0) {
			fprintf(stderr,"ERREUR: Division par zero\n");
			exit(3);
		}
		return valg / vald;
	}
	fprintf(stderr,"ERREUR: operande inconnu : %c\n",e->op);
	exit(4);
}

