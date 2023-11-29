#include<stdio.h>
#include<fcntl.h>



int main()
{
    char Filename[50];
    int fd = 0;
    char Arr[10];

    printf("Enter the file that you want to open\n");
    scanf("%s",Filename);

    fd = open(Filename,O_RDONLY);

    read(fd,Arr,10);
    write(1,Arr,10);

    close(fd);
    return 0;
}