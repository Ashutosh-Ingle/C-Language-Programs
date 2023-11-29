#include<stdio.h>

void Demo()
{
   static int a = 20;

    a++;
    printf("%d\n",a);
}

int main()
{
    Demo();
    Demo();

    return 0;

}