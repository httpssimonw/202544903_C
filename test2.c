#include <stdio.h> 
#include <stdlib.h>
#include <time.h> 

int main()
{
    int answer;
    int num;
    int count=0;

    srand(time(NULL)); // randomize the seed
    answer = rand() % 100 + 1; // generate a random number between 1 and 100

    printf("Guess a number between 1 and 100: ");


    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d", &num);
        count++;

        if(num > answer){
            printf("Too high!\n");
        }
        else if(num < answer){
            printf("Too low!\n");
        }
        else{
            printf("You guessed it in %d tries!\n", count);
            break;
        }
    }
    return 0;
}
