#include <stdio.h>

int SumDigits(int iNo)
{
    int iDigit = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo /10;
    }
    return iCnt;
}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter number : \n");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);
    printf("Sum of Digits are : %d \n",iRet);

    return 0;
}