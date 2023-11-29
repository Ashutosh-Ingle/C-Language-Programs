#include<stdio.h>

int main()
{
    int i = 22;
    char c = 'A';
    double d = 9.9988;

    void *p = NULL;

    p = &i;

    printf("%d\n", *(int*)p);

    p = &c;

    printf("%d\n", *(char*)p);

    p = &d;

    printf("%d", *(double*)p);

    return 0;
}