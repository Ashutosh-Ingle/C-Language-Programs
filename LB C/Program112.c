#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = -iNo; iCnt <=iNo ; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iFrequency = 0;

    printf("Enter the frequency of symnol: ");
    scanf("%d",&iFrequency);

    Display(iFrequency);
    return 0;
}