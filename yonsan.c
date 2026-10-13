#include <stdio.h>

int main(void)
{
    int a;
    int *p = &a;
    int r;

    a=10;
    r=(*p)++;
    printf("(*p)++  : r = %d, a = %d\n", r, a);
    //r = 10, a = 11

    a = 10;
    r = (*p) + 1;
    printf("(*p) + 1 : r = %d, a = %d\n", r, a);
    //r = 11, a = 10

    a = 10;
    r = (*p += 1);
    printf("(*p += 1) : r = %d, a = %d\n", r, a);
    //r = 11, a = 11

    a = 10;
    r = (*p) += 1;
    printf("(*p) += 1 : r = %d, a = %d\n", r, a);
    //r = 11, a = 11

    a = 10;
    r = (*p = *p + 1);
    printf("(*p = *p + 1) : r = %d, a = %d\n", r , a);
    //r = 11, a = 11

    a = 10;
    r = (++*p);
    printf("++(*p) : r = %d, a = %d\n", r , a);
    //r = 11, a = 11

    a = 10;
    r = ++ (*p);
    printf("++(*p) : r = %d, a = %d\n",r, a);
    //r = 11, a = 11
    

    return 0;
}