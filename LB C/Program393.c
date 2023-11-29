/*
Create system call
Create new file

int creat(char *File_name, int Permission)

File_name : Name of file that you want to create
Permission : Permissions for new file(0777)

Return value : On success it return >=0
on failure it returns -1

*/

#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    int fd = 0;
    char Fname[30];

    printf("Enter the file name that you want to create\n");
    scanf("%s",Fname);

    fd = creat(Fname, 0777);

    if(fd == -1)
    {
        printf("Unable to open the file\n");
        return -1;
    }
    else
    {
        printf("File is successfully created\n");
    }
    return 0;
}