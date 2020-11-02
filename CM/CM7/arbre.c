#include <stdio.h>
#include <stdlib.h>

struct noeud {
	int val;
	struct noeud *fg; // fils gauche
	struct noeud *fd; // fils droit
};

typedef struct noeud * ARBRE;

ARBRE creer_noeud (int val) {
	struct noeud *n; // ou bien ARBRE n
	n = malloc(sizeof(struct noeud));
					// Zone mémoire toujours réservée
					// à la fin de la fonction
	if (n==NULL) exit(2);
	n->val = val;	// ou bien (*n).val = val;
	n->fg  = NULL;	// ou bien (*n).fg  = NULL;
	n->fd  = NULL;	// ou bien (*n).fd  = NULL;
	return n;
}

ARBRE creer_noeud_fausse (int val) {
	struct noeud n; // Zone mémoire qui n'est plus
					// réservée dès que la fonction
					// se termine
	n.val = val;
	n.fg  = NULL;
	n.fd  = NULL;
	return &n;
}

void free_arbre(ARBRE A) {
	if (A==NULL) return;
	free_arbre(A->fg);
	free_arbre(A->fd);
	free(A);
}

ARBRE fusion (int val, ARBRE G, ARBRE D) {
	ARBRE A;
	A = creer_noeud (val);
	A->fg = G;
	A->fd = D;
	return A;
}

void affiche_arbre (ARBRE A) {
	if (A==NULL) return;
	affiche_arbre(A->fg);
	printf(" %d",A->val);
	affiche_arbre(A->fd);
}

int main () {
	ARBRE Y, Z, X;
	
	X = creer_noeud_fausse(99);
	
	Y = creer_noeud (12);
	Z = creer_noeud (34);
	X = fusion (78,Y,Z);
	affiche_arbre(X);
	printf("\n");
	free_arbre(X);
	
	Z = creer_noeud(1);
	X = fusion(2,NULL,Z);
	Y = creer_noeud(4);
	Z = fusion(3,X,Y);
	affiche_arbre(Z);
	printf("\n");
	return 0;
}

