#include <stdio.h>
void fun(int no1,int no2)
{
    
   printf("%d\n",no1,no2);
}
int main()
{
    void (*p)(int,int) = &fun;

    (*p)(11,21);
    return 0;
}