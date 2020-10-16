runtf: tri_fusion
	./tri_fusion 20

runtb: tri_bulle
	./tri_bulle 8
	
runts: tri_selection
	./tri_selection 8

# Le tri à bulles

tri_bulle: tri_bulle.o tabint.o
	gcc -Wall -o tri_bulle tri_bulle.o tabint.o

tri_bulle.o: tri_bulle.c tabint.h stat.h
	gcc -Wall -c tri_bulle.c

# Le tri à fusion

tri_fusion: tri_fusion.o tabint.o
	gcc -Wall -o tri_fusion tri_fusion.o tabint.o

tri_fusion.o: tri_fusion.c tabint.h stat.h
	gcc -Wall -c tri_fusion.c

# Le tri à sélection

tri_selection: tri_selection.o tabint.o
	gcc -Wall -o tri_selection tri_selection.o tabint.o

tri_selection.o: tri_selection.c tabint.h stat.h
	gcc -Wall -c tri_selection.c
	
# La bibliothèque de manipulation de tableaux

tabint.o: tabint.c tabint.h
	gcc -Wall -c tabint.c

clean:
	rm -f tabint.o
	rm -f tri_bulle.o tri_bulle
	rm -f tri_fusion.o tri_fusion
	rm -f tri_selection.o tri_selection
	rm -f stat.pdf
	rm -f test_tri_bulle.data
	ls -l


ZIPNAME=TriInt
zip:
	rm -rf ${ZIPNAME}
	mkdir ${ZIPNAME}
	cp *.c ${ZIPNAME}
	cp *.h ${ZIPNAME}
	cp Makefile ${ZIPNAME}
	cp *.gplt ${ZIPNAME}
	zip -r $(ZIPNAME).zip $(ZIPNAME)
##	rm -rf ${ZIPNAME}
	ls -l ${ZIPNAME}*














