#include <stdio.h> 
#define MAX_STUDENTS 50

void bubbleSort( int * arr, int size);

void bubbleSort(int *arr, int size) 
{
    for ( int i =0; i< size -1; i++)
    {
        for (int j = 0; j<size-1-i; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                int temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main() {
    int numStudents;
    printf("Enter the number of students: ", MAX_STUDENTS);
    scanf("%d", &numStudents);

    if (numStudents > MAX_STUDENTS) {
        printf("Error: too many students\n");
        return 1;
    }

    int* gradePointer;
    int grades[MAX_STUDENTS];
    gradePointer = grades;

    for (int i = 0; i < numStudents; i++) {
        printf("Enter the grade for student %d: ", i + 1);
        scanf("%d", gradePointer + i);
    }

    bubbleSort(gradePointer, numStudents);

    printf("Grades in ascending order: ");
    for (int i = 0; i < numStudents; i++) {
        printf("%d ", *(gradePointer + i));
    }

    printf("\n\nHighest grade: %d\n", *(gradePointer + numStudents - 1));
    printf("Lowest grade: %d\n", *gradePointer);
    return 0;
}