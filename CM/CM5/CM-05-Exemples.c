#include <stdio.h>

int main() {
	// ETAPE 1
	int a;
	a = 54;
	// & : opérateur unaire qui renvoie l'adresse de
	// stockage d'une variable.
	printf("&a = %p\n",&a);
	
	// x est une variable de type int*
	// int* est l'adresse d'un int
	int* x;
	x = &a;
	printf("x  = %p\n",x);
	
	// * : opérateur unaire qui permet d'accéder
	// à la zone mémoire dont l'adresse est stockée
	// dans la varible en argument
	printf("a  = %d\n",a);
	*x = 78;
	printf("a  = %d\n",a);
	*x = *x+3;
	printf("a  = %d\n",a);
	printf("*x = %d\n",*x);
	
	// ETAPE 2
	int T[10];
	int i;
	for (i=0 ; i<10 ; i++) T[i] = 100+i;
	// T contient l'adresse de la première case du tableau
	printf("*T = %d\n",*T);
	printf(" T = %p\n",T);
	printf(" &(T[0]) = %p\n",&(T[0]));
	// Les cases du tableau sont consécutives en mémoire
	printf(" &(T[1]) = %p\n",&(T[1]));
	printf(" &(T[2]) = %p\n",&(T[2]));
	// Arithmétique sur les pointeurs
	int *p;
	p = T;
	printf("p = %p\n",p);
	p = p+1; // Les constantes valent la taille de l'objet pointé
	printf("p = %p\n",p);
	printf("T = %p\n",T);
	printf("T+1 = %p\n",T+1);
	printf("*(T+1) = %d\n",*(T+1));
	printf("*(T+7) = %d\n",*(T+7));
	// T[i] ou *(T+i) sont la même zone mémoire
	printf("*(T+7) = %d\n",*(7+T));
	printf("T[7] = %d\n",T[7]);
	printf("7[T] = %d\n",7[T]);
	// Dangers de l'arithmétique des pointeurs
	// T[-1] *(T-1)
	printf("T[-1] = %d\n",T[-1]);
	printf("T[10] = %d\n",T[10]);
	T[12] = 47;
	printf("T[12] = %d\n",T[12]);
	
	return 0;
}

