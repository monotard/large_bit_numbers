#include <stdio.h>
#include <stdlib.h>
#include "bnl.h"



// initalise a binary number structure  with length len
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




