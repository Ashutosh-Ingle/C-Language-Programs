//Write a program which accespts the marks and display the class accordingly
//0 to 34       Fail
//35 to 49      Pass class
//50 to 59      Second class
//60 to 74      First class
//75 to 100     Distinction

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

void DisplayClass(float fMarks)
{
    if((fMarks <0.0f) || (fMarks>100.00f))     //Filter
    {
        printf("Invalid Input\n");
        printf("Please Enter the marks in between the range 0 to 100");
        return;
    }
    if((fMarks>=0.0f)&& (fMarks<35.00f))
    {
        printf("You have failed the exam\n");

    }
    else if((fMarks>=35.00f)&& (fMarks<50.00f))
    {
        printf("You have got pass class");
    }
    
    else if((fMarks>=50.00f)&& (fMarks<60.00f))
    {
        printf("You have got second class");
    }
    else if((fMarks>=60.00f)&& (fMarks<75.00f))
    {
        printf("You have got First class");
    }
    
    else if((fMarks>=75.00f)&& (fMarks<=100.00f))
    {
        printf("You have got first class with Distinction");
    }
}

/////////////////////////////////////////////////////////////
//Entry point function
/////////////////////////////////////////////////////////////
int main()
{
    float fValue = 0.0f;
    printf("Please enter you percentage : \n");
    scanf("%f",&fValue);

    DisplayClass(fValue);
    return 0;
}