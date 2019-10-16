#include <stdio.h>
#include <stdlib.h>
#include "bnl.h"

char bxor(char a, char b){

    if(a == b)
        return 0;
    if(a || b)
        return 1;
}

char bnot(char a){
 
    return !a;
}

char band(char a, char b) {
    
    if (a && b)
        return 1;
    return 0;
}
#define PADLEN 4
void msbprint(bnl *n){

    int i;
    int cur = 0;

    for(i=(n->blen)-1;i>-1;i--){
        if(cur==4){
            printf(" "); 
            //*(n->nstr+i));
            cur =0;
        }
        printf("%d", *(n->nstr+i));
        cur++;
       
    }//for
    printf("\n");
}

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
    zero(p);

    return p;
    
}

//creates a new bnl struct the length len and copies
// all the bits from old and returns the new bnl:
bnl *initcpy(bnl *old, int len){
    int i;
    bnl *new;

    new = init(len);
    new->blen = len;
    new->sign = old->sign;

    for(i=0;i<old->blen;i++){
        *(new->nstr+i) = *(old->nstr+i);
    }
    //free(old);    
    return new;
}

//finds the the appropriate length of two strns
int findlen(int l1, int l2){
    int size;
    if (l1==l2)
        return l1;
    if (l1>l2)
        return l1;
    return l2;
}


#define PAD_LEN 1  // pad_len added zeros to the new sum num
//create a new bnl structure and store the sum of augend + addend. Reutrns NULL on failure to allocate mem
bnl *bin_add(bnl *augend, bnl *addend){


    char *n;
    int i; 
    int sum_len;
    int carry;
    int lastbit;
    bnl *sum;

    //are both number the same length? CHECK
    if(augend->blen > addend->blen){
        addend = initcpy(addend, augend->blen);

    }

    if(addend->blen > augend->blen){
        augend = initcpy(augend, addend->blen);

    }

    sum_len= findlen( augend->blen, addend->blen);
    lastbit = sum_len-1;

    printf("size is %d\n", sum_len);
    


    if((sum=init(sum_len)) == NULL )
        return NULL;

    if ((n=(char *)malloc(sizeof(char) * sum_len)) == NULL)
        return NULL;

    sum->nstr = n;
    sum->blen = sum_len;
    
    //loop through each pair of digits
    for(i=0;i<sum_len;i++){
        
        if( *(augend->nstr+i) == 1 
            && *(addend->nstr+i) == 1 ){
        

            if (carry){
                if(i==lastbit){
                sum = dyn_add(sum, 1, 1);
                break;
                }
                //if bits r set and carry
                *(sum->nstr+i) = 1;
                carry=1; 

            }
            else if (!carry) {
                if(i==lastbit){
                sum = dyn_add(sum, 0, 1);
                break;
                }
                //bits r set but not carry
                carry=1;
                *(sum->nstr+i) = 0;
            }

        }//if under the for

        //is augend or addend but not both
        else if ( *(augend->nstr+i) || *(addend->nstr+i)){
            //one bit is set 0+1 = 1
            if(carry) { 
            carry=1;
            *(sum->nstr+i) = 0;
            }
            if(!carry) {
                *(sum->nstr+i) = 1;
            }
        }//else if
        //if both are 0 (unset)
        else {
            if (carry) {
            *(sum->nstr+i) = 1;
            carry = 0;
            }
            else *(sum->nstr+i) = 0;
        }//else

    }//for


    return sum;

}

void zero(bnl *s){
    int i;

    for(i=0;i<s->blen;i++){
        *(s->nstr+i) = 0;
    }//for

}
//will dynam8cally add 4 bits to tue MSB end and
//set last bit next bit or both and retirn a new struct
bnl *dyn_add(bnl *n, int last, int newlast){
    bnl *new;

    new = initcpy(n, n->blen+4);
    if(last)
        *(new->nstr+n->blen-1) = 1;
    if(newlast)
        *(new->nstr+n->blen) = 1;

    return new;

}

// a * b ->  p
bnl *multiply(bnl *a, bnl *b){
    
    //check the length is good
    int psize = findlen(a->blen, b->blen);
    int abit, bbit, len;

    bnl *p;

    p = (bnl *)malloc(sizeof(char) * (psize));
    zero(p);

    for(abit=0;abit < ; abit++){
        if(*(a->nstr+abit)== 1){
            for(bbit=0;bbit<size;bbit++){
                //add first line to p
                //*(p+(bbit+abit)) = *(b+bbit);
                if(*(b->nstr+bbit)==1)
                    add(p, bbit+abit);


            }//for
        }// if
    }//for

    return p;
}// end multiply


