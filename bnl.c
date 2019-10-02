#include <stdio.h>
#include <stdlib.h>
#include "bnl.h"



// initialise a binary number structure  with length len
bnl *init(int len){
    
    bnl *p;
    char *n;

    if ((n = (char *)malloc(sizeof(char) * len)) == NULL )
        return NULL;

    if ((p = (bnl *)malloc(sizeof(bnl))) == NULL )
        return NULL;

    p->len = len;
    return p;
    

}

//create a new bnl structure and store the sum of augend + addend. Reutrns NULL on failure to allocate mem
bnl *bin_add(bnl *augend, bnl *addend){

    bnl *sum;
    char *n;
    int size = augend->len+addend->len;

    if((sum=init(size)) == NULL )
        return NULL;

    if ((n=(char *)malloc(sizeof(char) * size)) == NULL)
        return NULL;

    sum->nstr = n;
    sum->len = size;
    

    return sum;

}

