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

    p->blen = len;
    p->nstr = n;

    return p;
    

}
#define BIT_SET '1'
#define PAD_LEN 1  // pad_len added zeros to the new sum num
//create a new bnl structure and store the sum of augend + addend. Reutrns NULL on failure to allocate mem
bnl *bin_add(bnl *augend, bnl *addend){


    char *n;
    int i; 
    int sum_len;
    int carry;
    bnl *sum;


    sum_len= augend->blen+PAD_LEN;

    if((sum=init(sum_len)) == NULL )
        return NULL;

    if ((n=(char *)malloc(sizeof(char) * sum_len)) == NULL)
        return NULL;

    sum->nstr = n;
    sum->blen = sum_len;
    
    //loop through each pair of digits
    for(i=0;i<augend->blen;i++){
        
        if( *(augend->nstr+i) == 1 
            && *(addend->nstr+i) == 1 ){
        printf("both strings bits are set at pos %d\n", i); 
    
            if (carry){
                //if bits r set and carry
                *(sum->nstr+i) = BIT_SET;
                

            }
            else if (!carry) {
                //bits r set but not carry
                carry=1;
                *(sum->nstr+i) = BIT_SET;
            }

        }//if
    
    }//for


    return sum;

}

