run: arbre
	./arbre

arbre: arbre.o
	gcc -o arbre arbre.o

arbre.o: arbre.c
	gcc -c -Wall arbre.c

clean:
	rm -f arbre arbre.o
	ls -l
