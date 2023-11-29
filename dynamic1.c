#include<stdio.h>
#include<stdlib.h>

int main()
{
    int Arr[10];            // Static memory allocation

    int size = 0;
    int *ptr = NULL;

    printf("Enter the size of array\n");
    scanf("%d",&size);

    //Step 1 : Allocate the memory 
    ptr = (int *)malloc(sizeof(int)* size);

    //Step2 : Use the memory (Logic building)

    //Step 3: Deallocate the memory

    free(ptr);

    return 0;
}