


#define POS 1
#define NEG 0

typedef struct {
    char *nstr;
    int blen;
    int sign;
}bnl;

// adds two binary strings together
bnl *bin_add(bnl *a, bnl *b);

//prints a binary str from msb to lsb in groups of PADLEN
void msbprint(bnl *);;

//finds and returns the length of the longest string 
int findlen(int, int);

//boolean logic functions
char band(char, char);
char bnot(char);
char bxor(char, char);
char bor(char, char);
void zero(bnl *s);

//initialised a binary num struct
bnl *init(int len);
//inits a new structure and 
bnl *initcpy(bnl *, int);

bnl *dyn_add(bnl *, int, int);

bnl *multiply(bnl *, bnl *);



