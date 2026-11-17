#include <stdio.h>

int main() {
    FILE*filePtr;
    char filename[]= "example.txt";
    char buffer[100];

    filePtr = fopen(filename, "r");

    if (filePtr == NULL) {
        printf("File open error\n", filename);
        return 1;
    }

    if (fgets(buffer, 100, filePtr) != NULL) {
        printf("example.txt the content in the file is %s.\n", buffer);
    }
    else{
        printf("File read error\n");
    }

    fclose(filePtr);
    return 0;
}