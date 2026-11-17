#include <stdio.h>

int main() {
    FILE*filePtr;
    char filename[] = "example.txt";

    filePtr = fopen(filename, "w");

    if (filePtr == NULL) {
        printf("File open error\n");
        return 1;
    }

    fprintf(filePtr, "Hello, World!\n");

    fclose(filePtr);

    printf("File write complete\n", filename);

    return 0;
}