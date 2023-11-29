#include<stdio.h>

void strcatX(char *src,char *dest)
{
    //travel till end of the dest
    while(*dest != '\0')
    {
        dest++;
    }
    //Copy the data from src to dest
    while(*src != '\0')
    {
        *dest = *src;
        dest++;
        src++;
    }
    //Write '\0' at the end of the dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    strcatX(Arr,Brr);

    printf("String after copy is: %s\n",Brr);

    return 0;
}