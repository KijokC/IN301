run: principal
	./principal


principal: token.o principal.o
	gcc -o principal token.o principal.o

principal.o: principal.c token.h
	gcc -c -Wall principal.c

token.o: token.c token.h
	gcc -c -Wall token.c

clean:
	rm -f token.o
	rm -f principal.o
	rm -f principal
	ls -l
