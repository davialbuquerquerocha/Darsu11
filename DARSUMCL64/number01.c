#include <stdio.h>

int main(void){
    double a, b;

    do {
        printf("a:");
        scanf("%lf", &a);
        
        printf("b:");
        scanf("%lf", &b);
    } while (b == 0);
    
    char y[64] = a/b;
    for (int i = 64; i >= 0; i--){
        if (y[i] == 44){
            printf y[i];
        } else {
            if ()
        }
    }
    
    return 0; 

}
