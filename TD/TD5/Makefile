run: principal
	./principal

# Edition de lines
principal: token.o principal.o
	gcc -o principal token.o principal.o

# Compil sans édition de lien
token.o: token.h token.c
	gcc -c -Wall token.c

# Compil sans édition de lien
principal.o: token.h principal.c
	gcc -c -Wall principal.c


clean:
	rm -f token.o
	rm -f principal.o
	rm -f principal
	ls -l
