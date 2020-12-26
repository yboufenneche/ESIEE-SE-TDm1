gestionFichiers.o: gestionFichiers.c gestionFichiers.h
		gcc -c gestionFichiers.c
test1c.o: test1c.c
		gcc -c test1c.c
test1c: gestionFichiers.o test1c.o
		gcc gestionFichiers.o test1c.o -o test1c
test2b1.o: test2b1.c
		gcc -c test2b1.c
test2b1: gestionFichiers.o test2b1.o
		gcc gestionFichiers.o test2b1.o -o test2b1
test2b2.o: test2b2.c
		gcc -c test2b2.c
test2b2: gestionFichiers.o test2b2.o
		gcc gestionFichiers.o test2b2.o -o test2b2
test2b3.o: test2b3.c
		gcc -c test2b3.c
test2b3: gestionFichiers.o test2b3.o
		gcc gestionFichiers.o test2b3.o -o test2b3
test2b4.o: test2b4.c
		gcc -c test2b4.c
test2b4: gestionFichiers.o test2b4.o
		gcc gestionFichiers.o test2b4.o -o test2b4
test2b5.o: test2b5.c
		gcc -c test2b5.c
test2b5: gestionFichiers.o test2b5.o
		gcc gestionFichiers.o test2b5.o -o test2b5
test3b1.o: test3b1.c
		gcc -c test3b1.c
test3b1: gestionFichiers.o test3b1.o
		gcc gestionFichiers.o test3b1.o -o test3b1
test3b2.o: test3b2.c
		gcc -c test3b2.c
test3b2: gestionFichiers.o test3b2.o
		gcc gestionFichiers.o test3b2.o -o test3b2
test3b3.o: test3b3.c
		gcc -c test3b3.c
test3b3: gestionFichiers.o test3b3.o
		gcc gestionFichiers.o test3b3.o -o test3b3