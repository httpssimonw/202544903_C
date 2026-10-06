#include <stdio.h>
int main()
{
    for(int i=1; i<=5; i++){
      //  for(int j=1; j<=5; j++){   //result is 5*5
     // for(int j=1; j<=i; j++){  //result is 1*1 2*2 3*3 4*4 5*5
    for(int j=1; j<= 6-i; j++){ //result is 5*1 4*2 3*3 2*4 1*5
            printf("*");
        }
        printf("\n");
    }
    return 0;
}