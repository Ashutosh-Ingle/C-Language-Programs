#include<stdio.h>

void strcpyX(char *str,char *dest)
{
    while(*str != '\0')
    {
    *dest = *str;
    str++;
    dest++;
    }
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20];

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    strcpyX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}