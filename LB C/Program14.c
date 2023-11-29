//Display Jay Ganesh on screen with taking user input 
#include<stdio.h>

void Display(int iNo)
{
    if (iNo<0)      //Updater
    {
        iNo = -iNo;
    }
    
    int iCnt = 0;
    
    //      1           2       3
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

// inside updater there is no need to return 
