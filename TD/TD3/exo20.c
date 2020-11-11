#include <stdio.h>

int longueur(char *s) {
	int i = 0;
	while (s[i] != '\0') {
		i++;
	}
	return i;
}

int longueur2(char *s) {
	char *deb = s;
	while (*s) {
		s++;
	}
	return s-deb;
}

int longueur_rec(char *s) {
	printf("REC : #%s#\n",s);
	if (*s == '\0') return 0;
	return 1+longueur_rec(s+1);
}


int compare(char *s1, char *s2) {
	while ((*s1 == *s2) && (*s1) && (*s2)){
//		printf("BOUCLE #%c#%c#\n",*s1,*s2);
		s1++;
		s2++;
	}
//	printf("AVANT RETURN #%c#%c#\n",*s1,*s2);
	return *s1-*s2;
}

int est_miroir (char *s1, char *s2) {
	char *s22 = s2;
	// On va à la fin de s2
	while (*s22) s22++;
	s22--;
	while ((*s1 == *s22) && *s1) {
		s1++;
		s22--;
	}
	return !*s1 && (s22==s2-1);
}

int compare_rec(char *s1, char *s2) {
	if ((*s1 != *s2) || !*s1 || !*s2) return *s1-*s2;
	return compare_rec(s1+1,s2+1);
}

// renvoie vrai si s1 est un prefixe de s2
int est_prefixe (char *s1, char *s2) {
	while ((*s1==*s2) && *s1 && *s2) {
		s1++;
		s2++;
	}
	return !*s1;
}
	

int sous_chaine(char *s1, char *s2) {
	while (*s2) {
		while ((*s2 != *s1) && *s2) s2++;
		if (est_prefixe(s1,s2)) return 1;
		if (*s2) s2++;
	}
	return 0;
}

int palindrome(char *s1) {
	return est_miroir(s1,s1);
}

int main (int argc, char **argv){
	int i;
	for (i=0 ; i<argc ; i++) {
		printf("LONG %s %d\n",argv[i],longueur(argv[i]));
	}
	printf("LONG REC %d\n",longueur_rec("truc"));
	
	printf("COMP %d\n",compare("truc","trocable"));// 'u'-'o'   = 117-111 =   6
	printf("COMP %d\n",compare("trocable","truc"));// 'o'-'u'   = 111-117 =  -6
	printf("COMP %d\n",compare("truc","trucable"));// '\0'-'a'  =   0- 97 = -97
	printf("COMP %d\n",compare("truc","truc"));    // '\0'-'\0' =   0-  0 =   0 
	
	printf("COMP_REC %d\n",compare_rec("truc","trocable"));// 'u'-'o'   = 117-111 =   6
	printf("COMP_REC %d\n",compare_rec("trocable","truc"));// 'o'-'u'   = 111-117 =  -6
	printf("COMP_REC %d\n",compare_rec("truc","trucable"));// '\0'-'a'  =   0- 97 = -97
	printf("COMP_REC %d\n",compare_rec("truc","truc"));    // '\0'-'\0' =   0-  0 =   0 

	printf("MIROIR %d\n",est_miroir("truc","curt"));
	printf("MIROIR %d\n",est_miroir("truc","acurt"));


	printf("CHOUCHEN %d\n",sous_chaine("truc","trucable"));
	printf("CHOUCHEN %d\n",sous_chaine("truc","trocable"));

	printf("PALINDROME %d\n",palindrome("laval"));
	printf("PALINDROME %d\n",palindrome("abccba"));
	printf("PALINDROME %d\n",palindrome("abcdecba"));
	return 0;
}
