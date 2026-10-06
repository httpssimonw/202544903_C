#include <stdio.h> 

void bubbleSortAscending(int arr[], int n ) // function to sort array in ascending order
{
    for (int i = 0; i < n - 1; i++) // loop to iterate through the array
    {
        for (int j = 0; j < n - i - 1; j++) // loop to compare adjacent elements
        {
            if (arr[j] > arr[j + 1]) // if the current element is greater than the next element
            {
                int temp = arr[j]; // swap the elements
                arr[j] = arr[j + 1]; 
                arr[j + 1] = temp; 
            }
        } 
    }
}

int main() // main function
{
    int arr[] = {7, 4, 5, 1, 3}; // array to be sorted
    int n = sizeof(arr) / sizeof(arr[0]); // size of the array

    printf("초기 상태 배열: [ "); // print the initial state of the array
    for (int i = 0; i < n; i++) // loop to iterate through the array
        printf("%d ", arr[i]); // print the elements of the array
    printf(" ] \n"); // print a new line

    bubbleSortAscending(arr, n); // call the function to sort the array

    printf("정렬된 배열: [ "); // print the sorted array
    for (int i = 0; i < n; i++) // loop to iterate through the array
        printf("%d ", arr[i]); // print the elements of the array
    printf(" ] \n"); // print a new line

    return 0;   

}