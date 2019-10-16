
// a * b ->  p
u_bn *multiply(u_bn *a, u_bn *b, int size){

    int psize = size+size;
    int abit, bbit, len;

    u_bn *p;

    p = (u_bn *)malloc(sizeof(char) * (psize));
    zero(p,psize);

    for(abit=0;abit < size; abit++){
        if(*(a+abit)== 1){
            for(bbit=0;bbit<size;bbit++){
                //add first line to p
                //*(p+(bbit+abit)) = *(b+bbit);
                if(*(b+bbit)==1)
                    add(p, bbit+abit);


            }//for
        }// if
    }//for

    return p;
}// end multiply


