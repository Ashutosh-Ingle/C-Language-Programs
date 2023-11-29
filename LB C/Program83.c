// Accept n number from user and display the largest number
// First number should be largest number

#include<stdio.h>
#include<stdlib.h>

int Maximum(int Arr[],int iLength)
{
    int iMax = Arr[0];

    int iCnt;

    for(iCnt = 1; iCnt < iLength ; iCnt++);
    {
        if(Arr[iCnt] > iMax)
        {
            iMax = Arr[iCnt];
        }
    }
    return iMax;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0;
    int iRet =0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements: ");
    for(iCnt = 0;iCnt< iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }
    printf("Elements of the array are: \n");
    for(iCnt = 0 ;iCnt <iSize ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = Maximum(ptr,iSize);
    printf("Maximum  number is: %d\n",iRet);

    free(ptr);

    return 0;
}