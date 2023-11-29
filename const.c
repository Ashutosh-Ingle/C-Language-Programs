#include <stdio.h>

int main()
{
    const int no = 11;

    const int * p = &no;

    printf("%d",*p);

    return 0;
}