#include <stdio.h> 

int main() {
    int count[7] = {0};
    int x;

    for (int i = 0; i < 10; i++) {
        scanf ("%d", &x);
        count[x]++;
    }

    for (int i = 1; i <= 6; i++) {
        printf("%d : %d\n", i , count[i]);
    }

    return 0;
}