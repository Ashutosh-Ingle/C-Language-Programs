/*
Steps to create the application
1. Understand the problem statement 
2. Write the algorithm
3. Decide the programming language
4. Write the program
5. Test the written program
*/
// Write a program which performs addition of two numbers 

/*
Algorithm
START
    Accept first number as No1
    Accept second number as No2
    Create one variable as ANS
    Perform Addition of No1 and No2
    Store the addition into variable ANS
    Display the value of ANS
STOP
*/
//////////////////////////////////////////////////////////
//Problem Statement : Write a program which performs addition of two numbers 
//////////////////////////////////////////////////////
#include<stdio.h>
//////////////////////////////////////////////////////////////
/*
Function name : Addition 
Input : Unsigned integer, 
output : unsigned integer
Description: Perfirm addition of two numbers
Author: Ashutosh Ingle
Date: 18/04/2023

*/
unsigned int Addition(unsigned int ivalue1, unsigned int ivalue2)
{
    unsigned int iResult = 0;
    iResult = ivalue1+ ivalue2;
    return iResult;
}
/////////////////////////////////////////////////////////////////
//Entry point function
////////////////////////////////////////////////////////////////////////

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

    printf("Enter first number: \n");
    scanf("%d",&iNo1);

    printf("Enter second number: \n");
    scanf("%d",&iNo2);

    iAns = Addition(iNo1,iNo2);

    printf("Addition is : %d",iAns);
}