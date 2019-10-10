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

    y = init(12);
    x = init(12);
    *(x->nstr+0) = 0;
    *(x->nstr+1) = 0;
    *(y->nstr+0) = 0;
    *(y->nstr+1) = 1;
    z = bin_add(y,y);
   
   
    msbprint(y);
    msbprint(z);
    return 0;

}
