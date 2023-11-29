#include<stdio.h>

void DisplayR(int iNo)
{
   static int iCnt = 1;

    if(iCnt <= iNo)
    {
        printf("%d\t",iCnt);
        iCnt++;
        DisplayR(iNo);      //Recursive call
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter the number of elements: \n");
    scanf("%d",&iValue);

    DisplayR(iValue);

    return 0;
}