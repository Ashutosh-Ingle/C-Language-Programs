#include<stdio.h>

void strncatX(char *src,char *dest, int iLength)
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
        iLength--;
        if(iLength == 0)
        {
            break;
        }
    }
    //Write '\0' at the end of the dest
    *dest = '\0';
}

int main()
{
    char Arr[20];
    char Brr[20] = "Demo";
    int iNo = 0;

    printf("Enter string :\n");
    scanf("%[^'\n']",Arr);

    printf("Enter the number of letters that you want to concat\n");
    scanf("%d",&iNo);

    strncatX(Arr,Brr,iNo);

    printf("String after concatenation is: %s\n",Brr);

    return 0;
}