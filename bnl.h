


#define POS 1
#define NEG 0

typedef struct {
    char *nstr;
    int blen;
    int sign;
}bnl;

bnl *bin_add(bnl *a, bnl *b);
char *b_add(char *, char *, int len);
void msbprint(bnl *);;
int findlen(int, int);

char band(char, char);
char bnot(char);
char bxor(char, char);
char bor(char, char);

bnl *init(int len);
