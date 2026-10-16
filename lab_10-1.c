#include <stdio.h>

#define MAX_SIZE 10
int main() 
{
    int ary [] = {1,2,3,4,5,6,7,8,9,10}; // 10 elements
    int*TStart;                        // pointer to the first element
    int*TEnd;                                // pointer to the last element


    printf("Array: ");
    for (TStart = ary, TEnd = ary + MAX_SIZE; TStart < TEnd; TStart++)
        printf("%3d", *TStart);   
        
        
    printf("\n");


    printf("Array backward: ");

    for (TStart = TEnd -1; TStart>= ary; TStart--)
        printf("%3d", *TStart);
    printf("\n");

    return 0;
}
