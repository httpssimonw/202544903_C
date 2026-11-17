#include <stdio.h>

int main() {
    FILE*file;
    char str1[150];

    file = fopen("twostring.txt", "r");
    if(file == NULL) {
        printf("File open error\n");
        return 1;
}
    if (fgets(str1, sizeof(str1), file) == NULL) {
        printf("first string \n");
        fclose(file);
        return 1;
    }
    fclose(file);

    printf("twostring.txt file open '%s' success.\n", str1);
    return 0;
}