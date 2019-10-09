#include <stdlib.h>
#include <stdio.h>

#include <stdio.h> // printf etc
#include "bnl.h"


int main(int argc, char **argv){


    bnl *z, *y;
    char *a;
    char *b;
    char m = 1;
    char n = 0;

    a = (char *)malloc(sizeof(int) *1);

    y = init(100);
    *(y->nstr+0) = 1;
    *(y->nstr+1) = 1;
    z = bin_add(y,y);
    
    *a = 1;
    if(*a)
        printf("bit is set\n");
    if(band(m,m))
        printf("badd success\n");

//    printf("%c \n", *(y->nstr));
    return 0;

}
