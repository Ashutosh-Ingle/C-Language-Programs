#include<stdio.h>

int strlenSmallX(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str >='a') && (*str <='z'))
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

    iRet = strlenSmallX(Arr);

    printf("Length of string is : %d\n",iRet);
    
    return 0;
}