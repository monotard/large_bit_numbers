#include <stdlib.h>
#include <stdio.h>

#include <stdio.h> // printf etc
#include "bnl.h"


int main(int argc, char **argv){


    bnl *z;
    char *a;
    char *b;
    

    
    z = init(10);
    printf("%d\n", z->len);

    a = (char *)malloc(sizeof(char) * 3);
    

    a[0] = 'A';
    a[1] = '0';
    a[2] =  NULL;

    while(*a != NULL){
        printf("%c ", *a++);
    }

    printf("\ndone\n");
    
    if (*a==NULL)
        printf("yes its null\n");
    return 0;

}
