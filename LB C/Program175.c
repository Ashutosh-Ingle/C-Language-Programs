#include<stdio.h>
#define ERR_NOTFOUND -1
void CharCount(char *str)
{
    int ismallCnt = 0;
    int iCapital = 0;
    while(*str != '\0')
    {
        if((*str >='A') && (*str <='Z'))    //Time complexity is n where n is string
        {
            ismallCnt++;
        }
        else if((*str >='a') && (*str <='z'))
        {
            iCapital++;
        }
        str++;
    }
    printf("Capital characters are : %d\n",ismallCnt);
    printf("Small characters are : %d\n",iCapital);
}
int main()
{
    char Arr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    CharCount(Arr);

    return 0;
}