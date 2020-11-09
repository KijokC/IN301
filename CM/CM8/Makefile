run: principal
	./principal


principal: principal.o piletab.o pileptr.o
	gcc -o principal principal.o piletab.o pileptr.o


principal.o: principal.c piletab.h
	gcc -c -Wall principal.c


piletab.o: piletab.c piletab.h
	gcc -c -Wall piletab.c

pileptr.o: pileptr.c pileptr.h
	gcc -c -Wall pileptr.c

clean:
	rm -f piletab.o
	rm -f pileptr.o
	rm -f principal.o
	rm -f principal
	ls -l
