#include <stdio.h>
#include <math.h>

int main (void)
{
    int a, b;

        printf("a:");
        scanf("%d", &a);
    do {
        printf("b:");
        scanf("%d", &b);
    } while (b < 0);
    printf("aˆb = %d\n"), (int)pow(a, b);
    return 0;
    }
    
    
    
    