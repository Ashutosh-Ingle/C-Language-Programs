#include<stdio.h>

int strlenDigitsX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str ==' '))
        {
        iCount++;
        }
        str++;
    }
    return iCount;
}
int main()
{
    char Arr[10];
    int iRet = 0;

    printf("Enter string: \n");
    scanf("%[^'\n']s",Arr);

    iRet = strlenDigitsX(Arr);

    printf("Length of string is : %d\n",iRet);
    
    return 0;
}