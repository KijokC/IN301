#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() 
{
	// 1. Variable pour accéder à un fichier
	FILE *F; 	// Nom : F
						// Type : FILE *
	// 2. Associer un fichier du disque dur
	//      à la variable F
	F = fopen("in301.txt", "w"  );	// Premier arg : Nom du fichier sur le DD
											// Second argument : mode d'ouverture
													// "r" : read - lecture
													// "w" : write - écriture
	// 3. test de l'ouverture (on verra plus tard)
	
	// 4. Ecriture dans le fichier
	int i;
	srandom(getpid());
	for (i=0 ; i<10 ; i++) {
			fprintf(F,"%3ld\n",random()%100);
	}
	
	// 5. fermeture du fichier
	fclose(F);
	return 0;
}

