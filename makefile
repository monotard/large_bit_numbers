emain : main.c bnl.o
	gcc  -g main.c bnl.o -o emain


bnl.o : bnl.c
	gcc -g -c bnl.c

clean :
	rm *.o emain

