#include <stdio.h>

int main()
{
    float value = 3.14;

    float * p = &value;
    float * q = p;

    float ans = *p + *q;

     printf("%d\n",*q);

    printf("%d",ans);


    return 0;
}