#define EST_VAL 1
#define EST_OP  2
#define NO_VAL  3
#define NO_OP   4

struct noeud {
	int op_ou_val;
	char op;
	float val;
	struct noeud *opg;
	struct noeud *opd;
};

typedef struct noeud * EA;

EA ea_creer_valeur (float val);
EA ea_creer_operation (char op, EA opg, EA opd);
float ea_evaluer(EA e);
