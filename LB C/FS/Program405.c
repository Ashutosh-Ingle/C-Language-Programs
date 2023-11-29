#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[10];
    int iRet = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    iRet=read(fd,Arr,10);           //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);         //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);         //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);         //10
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);
    write(1,Arr,iRet);

    iRet = read(fd,Arr,10);         //5
    write(1,Arr,iRet);

    iRet = read(fd,Arr,5);          //0

    close(fd);
    return 0;
}