run: prog1 prog2
	./prog1
	./prog2

# ici on fait l'édition de liens
prog1: prog1.o fonction.o
	gcc -Wall prog1.o fonction.o -o prog1

# ici on fait l'édition de liens
prog2: prog2.o fonction.o
	gcc -Wall prog2.o fonction.o -o prog2

# l'option -c fait uniquement la compilation
# et produit le fichier objet
prog1.o: prog1.c fonction.h
	gcc -c -Wall prog1.c

# l'option -c fait uniquement la compilation
# et produit le fichier objet
prog2.o: prog2.c fonction.h
	gcc -c -Wall prog2.c

# l'option -c fait uniquement la compilation
# et produit le fichier objet
fonction.o: fonction.c fonction.h
	gcc -c -Wall fonction.c


clean:
	rm -f fonction.o
	rm -f prog1.o
	rm -f prog2.o
	rm -f prog1
	rm -f prog2
	ls -l
