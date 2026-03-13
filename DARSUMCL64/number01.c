#include <stdio.h>

int main(void){
    int a, b;

    do {
        printf("a:");
        scanf("%d", &a);
        
        printf("b:");
        scanf("%d", &b);
    } while (b == 0);
    
    printf("a/b = %d\n", a/b);
    
    return 0; 

    }
