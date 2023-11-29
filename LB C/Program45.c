//Calculate factorial 
#include<stdio.h>

void Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
    }
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);

    printf("%d is Result \n",iRet);
    return 0;
}