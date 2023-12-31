//Write a program which checks whether Number is divible by 3 and 5

#include<stdio.h>           //For printf and scanf
#include<stdbool.h>         // For bool data type

/////////////////////////////////////////////////////////////
//
// Function name: CheckDivisible
// Input :        Integer
// Output :       Boolean  
// Description :  Checks Whether input is divisible by 3 and 5
// Author :       Ashutosh Ingle  
// Date:          25/04/2023  
//
/////////////////////////////////////////////////////////////

bool CheckDivisible(int iNo)
{
    if(((iNo%3)==0)&&((iNo%5)==0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

/////////////////////////////////////////////////////////////
//Entry point function
/////////////////////////////////////////////////////////////
int main()
{
    int iValue = 0;         // variable to accept input
    bool bRet = false;      // variable to accept return value

    printf("Please enter number to check whether it is divisible by 3 and 5 : \n");
    scanf("%d",&iValue);

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is number completely divisible by 3 and 5 \n",iValue);
    }
    else
    {
        printf("%d is not completely divisible by 3 and 5 \n",iValue);
    }
    return 0;
}