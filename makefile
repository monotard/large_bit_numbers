emain : main.c bnl.o
	gcc  -Wall main.c bnl.o -o emain


bnl.o : bnl.c
	gcc -c bnl.c

clean :
	rm *.o emain

