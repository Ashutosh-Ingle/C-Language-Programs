//Take String form user and check whether it is capital or not

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char cValue)
{
    if((cValue >= 'a') && (cValue <= 'z'))
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
    char ch = '\0';
    bool bRet = false;

    printf("Enter character : \n");
    scanf("%c",&ch);

    bRet = CheckSmall(ch);

    if((bRet == true))
    {
        printf("%c is a capital letter \n",ch);
    }
    else
    {
        printf("%c is not a capital letter \n",ch);
    }

    return 0;
}
