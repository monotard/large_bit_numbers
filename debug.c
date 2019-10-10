#include <stdlib.h>
#include <stdio.h>

#include <stdio.h> // printf etc
#include "bnl.h"


int main(int argc, char **argv){


    bnl *z, *y, *x;
    char *a;
    char *b;
    char m = 1;
    char n = 0;

    a = (char *)malloc(sizeof(int) *1);

    y = init(100);
    x = init(100);
    *(x->nstr+0) = 0;
    *(x->nstr+0) = 0;
    *(y->nstr+0) = 1;

    *(y->nstr+1) = 1;
    z = bin_add(y,y);
    z = bin_add(y,x); 
    *a = 1;
    if(*a)
        printf("bit is set\n");
    if(band(m,m))
        printf("badd success\n");

int i;
    printf("%d \n", bxor(1,0));
//    printf("%c \n", *(y->nstr));
    for(i=0;i<100;i++)
        printf("%d", *(z->nstr+i));

    return 0;

}
