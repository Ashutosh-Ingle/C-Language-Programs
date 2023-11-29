#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch == 'A') && (ch == 'Z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character: ");
    scanf("%c",&cValue);

    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is capital character");
    }
    else
    {
        printf("It is not a capital character");
    }
    return 0;
}