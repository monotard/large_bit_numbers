#include <stdlib.h>
#include <stdio.h>

#include <stdio.h> // printf etc
#include "bnl.h"


int main(int argc, char **argv){


    bnl *z, *y;
    char *a;
    char *b;
    

    y = init(100);
     
    printf("%c \n", *(y->nstr));
    return 0;

}
