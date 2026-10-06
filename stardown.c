#include <stdio.h>

int main()
{
    // Outer loop: controls the number of rows (starts at 5, counts down to 1)
    for (int i = 5; i >= 1; i--)
    {
        // Inner loop: prints stars from 1 up to i (so each row gets one fewer star)
        for (int j = 1; j <= i; j++)
        {
            printf("*");
        }

        printf("\n"); // move to next line after each row
    }
}