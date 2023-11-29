//Display Jay Ganesh on screen with taking user input  not taking negative value
#include<stdio.h>

void Display(int iNo)
{
    if (iNo<0)      //filter
    {
        printf("Please enter the positive number");
        return;
    }

    int iCnt = 0;
    for( iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("Jay ganesh....\n");
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the frequency of jay ganesh statement: \n");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}
