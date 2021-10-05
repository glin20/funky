all:	funky.o
	gcc -o funky funky.o

funky.o:	funky.c
	gcc -c funky.c

run:
	./funky

clear:
	rm funky.o
	rm funky
