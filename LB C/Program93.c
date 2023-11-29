//Return the index of first occurence of number
// Accept n number from user and another number from user and check whether the number is present in the array or not
// Optimised code
#include<stdio.h>
#include<stdlib.h>
#define ERR_NOTFOUND -1

int SearchFirstOccurance(int Arr[],int iLength,int iNo)
{
    int iCnt = 0;
    int iPos = ERR_NOTFOUND;

    for(iCnt = iLength-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int iSize = 0;
    int *ptr = NULL;
    int iCnt = 0, iValue = 0;
    int iRet = 0;

    printf("Enter number of elements: \n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    printf("Enter the elements: ");
    for(iCnt = 0;iCnt< iSize ;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element that you want to search: \n");
    scanf("%d",&iValue);

    printf("Elements of the array are: \n");
    for(iCnt=0 ;iCnt <iSize ;iCnt++)
    {
        printf("%d\n",ptr[iCnt]);
    }

    iRet = SearchFirstOccurance(ptr,iSize,iValue);

    if(iRet == ERR_NOTFOUND)
    {
        printf("There is no such element");
    }
    else
    {
        printf("%d occured at index %d\n",iValue,iRet);
    }

    free(ptr);

    return 0;
}