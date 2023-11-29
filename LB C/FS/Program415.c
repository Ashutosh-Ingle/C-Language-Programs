#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define BUFFERSIZE 1024
int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[BUFFERSIZE];
    int iRet = 0;

    printf("Enter the file that you want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    while(1)
    {
        iRet=read(fd,Arr,sizeof(Arr));  
        if(iRet ==0)
        {
            break;
        }
        write(1,Arr,iRet);
    }

    close(fd);
    return 0;
}