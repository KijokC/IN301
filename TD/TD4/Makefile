run: principal
	./principal

principal: principal.o ea.o
	gcc -o principal principal.o ea.o

principal.o: principal.c ea.h
	gcc -c -Wall principal.c

ea.o: ea.c ea.h
	gcc -c -Wall ea.c

clean: 
	rm -f principal.o
	rm -f ea.o
	rm -f principal
	rm -f ea.h.gch
