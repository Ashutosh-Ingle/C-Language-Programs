#include<stdio.h>

void strcpycapX(char *str,char *dest)
{
    while(*str != '\0')
    {
        if((*str >= 'A')&& (*str <= 'Z'))
        {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    strcpycapX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}