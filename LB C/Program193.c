#include<stdio.h>

void strncpyX(char *src,char *dest, int iLength)
{
    while((*src != '\0') && (iLength != 0))
    {
        *dest = *src;
        src++;
        dest++;
        iLength--;
    }
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