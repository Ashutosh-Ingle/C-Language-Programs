#include<stdio.h>

int main()
{

    int a = 0;

    printf("The value of a is : \n");
    scanf("%d",&a);

    if((a % 2 == 0))
    {
        printf("A is an even number");
    }
    else{
        printf("A is an odd number");
    }

    return 0 ;
}