#include <stdio.h>
#include <stdlib.h>

void sum(int *a, int *b, int *c){
    *c = *a + *b;
}

void mines(int* a, int* b, int* c){
    *c = *a + *b;
}

int main(int argc, char* argv[]){
    
    if (argc < 2){
        return 1;
    }
    int as = atoi(&argv[1][0]);
    int bs = atoi(&argv[1][2]);
    int cs = 0;

    int *a = &as;
    int *b = &bs;
    int *c = &cs;

    if (argv[1][1] == '-'){
        mines(a, b, c);
    } else if (argv[1][1] == '+'){
        sum(a, b, c);
    }
    printf("\n%d\n\n", cs);

return 0;
}