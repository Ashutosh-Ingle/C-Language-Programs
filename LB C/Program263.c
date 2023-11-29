#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

//Allocate memory for new node
//Initialize the node
//check whether LL is empty or not
// iF LL is empt store address of new node in first

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn-> data = no;
    newn-> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn -> next = *Head;
        *Head = newn;
    }
}

void InsertLast(PPNODE Head, int no)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    PNODE temp = *Head;

    newn-> data = no;
    newn-> next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp ->next != NULL)
        {
            temp = temp -> next;
        }
        temp-> next = newn;
    }
}
void Display (PNODE Head)
{
    printf("Elements of linkedlist are: \n");

    while(Head != NULL)
    {
        printf("|%d| -> ",Head -> data);
        Head = Head -> next;
    }
    printf("NULL \n");
}
int Count(PNODE Head)
{
    int iCount = 0;
    while(Head != NULL)
    {
        iCount++;
        Head = Head -> next;
    }
    return iCount;
}
int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertLast(&First, 11);
    InsertLast(&First, 21);
    InsertLast(&First, 51);
    InsertLast(&First, 101);

    Display(First);

    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    return 0;
}