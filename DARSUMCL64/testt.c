#include <stdio.h>

void swap(int* a, int* b){
    int temp;
    temp = *b;
    *b = *a;
    *a = temp;
}

int main(void){
    int x = 10;
    int *a = &x;
    int y = 15;
    int *b = &y;
    swap(a, b);
    printf("os valores são x = %d e y = %d\n", x, y);
}