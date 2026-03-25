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
        if (b<0) {
            printf ("b cannot be negative you jirk\n");
        }
    } while (b < 0);
    printf("a^b = %d\n", (int)pow(a, b));
    return 0;
    }
    
    
    
    