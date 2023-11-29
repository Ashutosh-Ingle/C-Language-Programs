#include<stdio.h>

int Addition(int no1,int no2)
{
    int ans = 0;
    ans = no1 +no2;
    return ans;
}

int main()
{
    int value1 = 10; 
    int value2 = 20;

    int ret = 0;

    int (*p)(int,int);
    p = Addition;

    ret = p(value1,value2);
    printf("%d\n",ret);

    return 0;

}