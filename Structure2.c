#include <stdio.h>

struct Demo
{
    int i;
    float j;
    int k;

};

int main()
{

    struct Demo obj1 = {11,2.11,99};

    struct Demo *ptr = &obj1;

    obj1.i = 11;

    ptr->k= 88;

    printf("%d",ptr->k);

    return 0;
}