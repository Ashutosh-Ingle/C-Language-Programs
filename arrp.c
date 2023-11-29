#include<stdio.h>


int main()
{
  int arr[] = {10,20,30,40};

  int *p = arr;
  int *q = arr+1;

  int ans = *q - *p;

printf("%d\n",*q);
  printf("%d",ans);


    return 0;
}