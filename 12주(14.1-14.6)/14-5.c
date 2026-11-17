#include <stdio.h>

int main() {
    FILE*file;
    char str1[] = "C language, ";
    char str2[] = "Text File!!!";

    file = fopen("twostring.txt", "w");
    if (file == NULL) {
        printf("File open error\n");
        return 1;
    }

    fprintf(file, "%s", str1);
    fprintf(file, "%s", str2);

    fclose(file);

    printf("twostring.txt file '%s%s' written\n", str1, str2);
    return 0;
}