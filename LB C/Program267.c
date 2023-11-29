#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
}NODE, *PNODE, **PPNODE;

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

void DeleteFirst(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)-> next ==NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        *Head = (*Head)->next;
        free(temp);
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    if(*Head == NULL)
    {
        return;
    }
    else if((*Head)-> next ==NULL)
    {
        free(*Head);
        *Head = NULL;
    }
    else
    {
        while(temp->next->next !=NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp-> next =NULL;
    }
}

void InsertAtPos(PPNODE Head, int no ,int ipos)
{
    int iLength = 0;
    iLength = Count(*Head);     //Calculate length of LL

    PNODE newn = NULL;
    int iCnt = 0;
    PNODE temp = *Head;

    if((ipos < 1 )||(ipos >iLength +1))
    {
        printf("Invalid Position\n");
        return;
    }
    if(ipos == 1)
    {
        InsertFirst(Head, no);
    }
    else if(ipos == iLength +1)
    {
        InsertLast(Head, no);
    }
    else
    {
        newn = (PNODE)malloc(sizeof(NODE));

        newn-> data = no;
        newn-> next = NULL;

        for(iCnt = 1; iCnt< ipos-1; iCnt++)
        {
            temp = temp ->next;
        }
        //Sequence is important
        newn->next = temp->next;
        temp-> next = newn;
    }
}
void DeleteAtPos(PPNODE Head,int ipos)
{
    int iLength = 0;
    iLength = Count(*Head);     //Calculate length of LL

    if((ipos < 1 )||(ipos >iLength))
    {
        printf("Invalid Position\n");
        return;
    }
    if(ipos == 1)
    {
        DeleteFirst(Head);
    }
    else if(ipos == iLength)
    {
        DeleteLast(Head);
    }
    else
    {
        
    }
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

    InsertAtPos(&First,25,5);
    
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    DeleteFirst(&First);
    DeleteFirst(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    DeleteLast(&First);
    Display(First);
    iRet = Count(First);
    printf("Number of nodes are: %d\n",iRet);

    return 0;
}