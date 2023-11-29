#include<stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0;
    int j = 0;

    if(iRow != iCol)
    {
        printf("Invalid Input\n");
        return;
    }
    for(i = 1; i <=iRow-1;i++)
    {
        for(j =1; j<=iCol; j++)
        {
            if(j<=i)
            {
                printf("*\t");
            }
        }
        printf("\n");
    }
    for(i = iRow; i>=1;i--)
    {
        for(j =1; j<=i;j++)
        {
            printf("*\t");
        }
        printf("\n");
    }


}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of row : \n");
    scanf("%d",&iValue1);

    printf("Enter number of row : \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
}