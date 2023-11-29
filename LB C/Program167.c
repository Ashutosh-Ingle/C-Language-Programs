#include<stdio.h>

int CountZ(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str =='z'))
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

    iRet = CountZ(Arr);

    printf("Length of z is : %d\n",iRet);
    
    return 0;
}