# Commentez une des deux lignes ci-dessous
#run: run19
run: run20


run19: exo19
	./exo19 toto tut112

run20: exo20
	./exo20 truc trocable


exo19: exo19.c
	gcc -Wall -o exo19 exo19.c

exo20: exo20.c
	gcc -Wall -o exo20 exo20.c


clean:
	rm -f exo19
	rm -f exo20
	ls -l
