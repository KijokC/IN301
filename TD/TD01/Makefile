run: genere algos
	./genere
	./algos
	diff nombres.data nombres-verif.data


genere: genere.c constantes.h
	gcc -Wall -o genere genere.c


algos: algos.c constantes.h
	gcc -Wall -o algos algos.c


ZIPNAME=TD01
zip: clean
	rm -rf ${ZIPNAME}
	mkdir ${ZIPNAME}
	cp *.c ${ZIPNAME}
	cp *.h ${ZIPNAME}
	cp Makefile ${ZIPNAME}
	zip -r $(ZIPNAME).zip $(ZIPNAME)
	rm -rf ${ZIPNAME}
	ls -l

clean:
	rm -f genere
	rm -f algos
	rm -f nombres.data
	rm -f nombres-verif.data
	rm -f ${ZIPNAME}.zip
	ls -l

