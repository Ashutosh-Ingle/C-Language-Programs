#include<stdio.h>

int main()
{
  const int arr[3] = {1,2,3};

    int * p = arr;

    printf("%d",* p);

    return 0;
}