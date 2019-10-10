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

    y = init(32);
    x = init(16);
    *(x->nstr+0) = 1;
    *(x->nstr+15) = 1;
    *(y->nstr+0) = 1;
    *(y->nstr+31) = 1;
    z = bin_add(x,y);
   
   
    msbprint(y);
    msbprint(x);
    msbprint(z);

    w = initcpy(x, 32);
    msbprint(w);
    return 0;

}
