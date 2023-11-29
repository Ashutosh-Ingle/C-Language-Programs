// Taking input from user print the number it is divisible by or factors of one number
//accept number and display the factors of that number
// this is optimised code
#include <stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt< iNo; iCnt++)
    {
       if((iNo % iCnt)==0 )
       {
        printf("%d\n",iCnt);
       }
    }
}
int main()
{
    int iValue = 0;

    printf("Enter number: \n");
    scanf("%d",&iValue);

    DisplayFactors(iValue);

    return 0;
}

//Time complexity :0(N)
//Where N is natural number.