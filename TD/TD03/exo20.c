#include <stdio.h>
int test = 0;

int longueur(char *s){

	int i = 0;
	while(s[i] != '\0')
	{
		i++;
	}
	return i;
}

int longueur2(char *s){
	char *deb = s;
	while(*s){
		s++;
	}
	return s-deb;
}

int longueur_rec(char *s){
	printf("REC : #%s#\n",s);
	if(*s == '\0') return 0;
	return 1+longueur_rec(s+1);
}

int compare(char *s1, char *s2){
	while((*s1 == *s2) && (*s1) && (*s2)){
		s1++;
		s2++;
	}
	return *s1 - *s2;
}

int main( int argc, char** argv){
	
	int i;
	for(i = 0; i < argc; i++)
	{
		printf("Longueur : %s %d\n",argv[i],longueur(argv[i]));
	}
	printf("Longueur_rec : %d\n",longueur_rec("truc"));
	
	printf("Compare : %d\n",compare("truc","trocable"));  //6
	printf("Compare : %d\n",compare("trocable","truc"));  //-6
	printf("Compare : %d\n",compare("truc","trucable"));  //-97
	printf("Compare : %d\n",compare("truc","truc"));      //0
	return 0;
}
