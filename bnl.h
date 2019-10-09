


#define POS 1
#define NEG 0

typedef struct {
    char *nstr;
    int blen;
    int sign;
}bnl;

bnl *bin_add(bnl *a, bnl *b);
char *b_add(char *, char *, int len);
char band(char, char);

bnl *init(int len);
