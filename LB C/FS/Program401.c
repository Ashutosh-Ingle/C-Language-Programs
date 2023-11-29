/*
Delete the file

remove(char * Filename);
*/

#include<stdio.h>
#include<fcntl.h>



int main()
{
    char Filename[50];

    printf("Enter the file that you want to delete\n");
    scanf("%s",Filename);

    remove(Filename);
    return 0;
}