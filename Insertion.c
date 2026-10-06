#include <stdio.h>

void InsertionSort(int arr[], int size)
{
    int key, j;    // key: stores the value currently being sorted
                   // j: variable used to compare and shift the elements before it

    // Repeat from the second element to the last element
    // The first element (arr[0]) is considered already sorted
    for (int i = 1; i < size; i++)
    {
        key = arr[i];    // Store the value to be sorted in key

        // Start comparing from the element right before the current value
        // If the previous value is greater than key, shift it to the right
        for (j = i - 1; j >= 0 && arr[j] > key; j--)
        {
            arr[j + 1] = arr[j];    // Shift the larger previous value one position to the right
        }

        // After shifting all the values,
        // insert key into the empty position
        arr[j + 1] = key;
    }
}