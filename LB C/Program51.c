// Taking inpt from user and display it digits separately
#include <stdio.h>

void DisplayDigits(int iNo)
{
    int iDigit = 0;

    while(iNo % 10 == 0)
    {
        iDigit = iNo % 10;
        printf("Digits are: \n", iDigit);
        ino= iNo /10;   
    }

}
int main()
{
    int iValue = 0;
    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayDigits(iValue);

    return 0;

}