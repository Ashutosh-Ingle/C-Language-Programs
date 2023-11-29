//Calculate factorial 
#include<stdio.h>

typedef unsigned long int ULONG;
int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = iNo ; iCnt>- 1; iCnt--)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("Result is : %d\n",iRet);

    return 0;
}