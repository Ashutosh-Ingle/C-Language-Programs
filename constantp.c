#include<stdio.h>

int main()
{
    const int no = 11;
    const int * const p = &no;

    printf("%d",p);

    return 0 ;
}