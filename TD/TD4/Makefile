run: principal
	./principal


principal: ea.o principal.o
	gcc -o principal ea.o principal.o

principal.o: principal.c ea.h
	gcc -c -Wall principal.c

ea.o: ea.c ea.h
	gcc -c -Wall ea.c

clean:
	rm -f ea.o
	rm -f principal.o
	rm -f principal
	ls -l
