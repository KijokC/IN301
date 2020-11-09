
struct noeud {
	int val;
	struct noeud *suiv;
};

typedef struct noeud *PILEPTR;

PILEPTR creer_pile_ptr();
int est_vide_ptr (PILEPTR P);
void empiler_ptr (PILEPTR P, int x);
int depiler_ptr (PILEPTR P);

void afficher_pile_ptr (PILEPTR P);
