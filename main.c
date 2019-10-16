#include <stdlib.h>
#include <stdio.h>

#include <stdio.h> // printf etc
#include "bnl.h"


int main(int argc, char **argv){


    bnl *z, *y, *x, *w;
    char *a;
    char *b;
    char m = 1;
    char n = 0;
    int i;

    a = (char *)malloc(sizeof(int) *1);

    y = init(4);
    x = init(8);
   

    *(y->nstr+1) = 1;
    *(y->nstr+2) = 1;
    *(y->nstr+3) = 1;
    *(x->nstr+7) = 1;
    *(x->nstr+6) = 1;


    z = bin_add(y,y);

   
    msbprint(x);
    msbprint(y);
    msbprint(z); 
    return 0;

}
