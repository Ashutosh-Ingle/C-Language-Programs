# include<stdio.h>

extern int i;
extern int j;
extern int arr[4];

void gun();
void fun();

int main()
{
    printf("Value of i is %d\n",i);
    printf("Value of j is %d\n",j);

    j = 51;
    printf("value of j is %d\n",j);
    printf("Value from array %d",arr[0]);

    fun();
    gun();

    return 0;

}

int i = 21;
void gun()
{
    printf("Inside gun");
}