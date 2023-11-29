#include <stdio.h>

void Display(int iRow,int iCol)
{
    int i = 0, j = 0;

    if(i != j)
    {
        printf("Invalid Input\n");
    }

    for(i = 1; i<= iRow;i++)
    {
        for(j = 1; j <= iCol;j++)
        {
            if((i == j))        // Diagonal
            {
                printf("*\t");
            }
            else if(i>j)        // Lower triangle
            {
                printf("$\t");
            }            
            else       //Upper triangle
            {
                printf("@\t");
            }
        }
        printf("\n");
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;


    printf("Enter number of rows: \n");
    scanf("%d",&iValue1);

    printf("Enter number of rows: \n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}
//Time complexity : n^2;
