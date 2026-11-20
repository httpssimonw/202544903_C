#include<stdio.h>

int main()
{
    struct Students{
        char name[50];
        int score;
    };
    struct Students s;
    FILE*fp;
    FILE*pass;
    FILE*fail;

    int count; //pass count
    fp= fopen("students.txt", "w");
    
    if(fp==NULL){
        printf("File open error");
        return 1;
    }
    printf("Enter count of students: ");
    scanf("%d", &count);
    for (int i = 0; i < count; i++){
            printf("\n%d student name", i+1);
            scanf("%49s", s.name);
            printf("Score: ");
            scanf("%d", &s.score);

            fprintf(fp, "%s %d\n", s.name, s.score);
    }
    fclose(fp);

    // STUDENTS.TXT FILE
    fp = fopen("students.txt", "r");
    //pass and fail, sorting
    pass = fopen("pass.txt", "w");
    fail = fopen("fail.txt", "w");

    if (fp == NULL || pass == NULL || fail == NULL){
        printf("File open error");
        if (fp != NULL) fclose(fp);
        if (pass != NULL) fclose(pass);
        if (fail != NULL) fclose(fail);

        return 1;
    }

    while (fscanf(fp, "%49s %d", s.name, &s.score) == 2){
        if (s.score >= 80){
            fprintf(pass, "%s %d\n", s.name, s.score);
        }
        else{
            fprintf(fail, "%s %d\n", s.name, s.score);
        }
    }
    fclose(fp);
    fclose(pass);
    fclose(fail);

    printf("file write complete");
}
