#define TAILLEMAXPILE 100

struct piletab {
	int N;   // Nombre de valeurs dans la pile
	int *V;  // Tableau contenant les valeurs
};

typedef struct piletab *PILETAB;

PILETAB creer_pile();
int est_vide (PILETAB P);
void empiler (PILETAB P, int x);
int depiler (PILETAB P);

void afficher_pile (PILETAB P);
