#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;      //#
}NODE, *PNODE ,**PPNODE;

void InsertFirst(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data= No;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head ==NULL)            //LL is empty
    {
        *Head = newn ;
    }
    else
    {
        (*Head) ->prev = newn;      //#
        newn -> next = *Head;
        *Head = newn;
    }
}
void InsertLast(PPNODE Head, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn ->data= No;
    newn -> next = NULL;
    newn -> prev = NULL;        //#

    if(*Head ==NULL)            //LL is empty
    {
        *Head = newn ;
    }
    else
    {
        
    }
}
void InsertAtPos(PPNODE Head, int No, int Pos)
{}
void DeleteFirst(PPNODE Head)
{}
void DeleteLast(PPNODE Head)
{}
void DeleteAtPos(PPNODE Head, int Pos)
{}
void Display(PNODE Head)
{
    printf("")
}
int Count(PNODE Head)
{
    return 0;
}
int main()
{
    PNODE First = NULL;
    return 0;
}