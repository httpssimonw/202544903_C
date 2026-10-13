#include <stdio.h>

void increment(int * value) {
    (*value)++;
}

int main()
{
    int num = 10; 
    printf("Before increment: %d\n", num);
    increment(&num);
    printf("After increment: %d\n", num);

    return 0;
}