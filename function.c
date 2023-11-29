#include<stdio.h>

int Addition(int A, int B)
{
    int Result = 0;

    Result = A + B;

    return Result;

}

int main()
{
    int N1 = 21;
    int N2 = 30;
    int ans = 0;

    ans = Addition(N1,N2);

    printf("The addition is : %d",ans);

    return 0 ;
}
