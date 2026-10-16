#include <stdio.h> 
#define MAX_STUDENTS 50

void bubbleSort(int *arr, int n) 
{
    int i, j, temp;

    for (i =0; i< n -1; i++)
    {
        for (j = 0; j<n-1-i; j++)
        {
            if (*(arr+j) > *(arr+j+1))
            {
                temp = *(arr+j);
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