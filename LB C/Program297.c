#include<stdio.h>
#include<stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
}NODE,* PNODE,**PPNODE;

void InsertFirst(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next =NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail ==NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        *newn -> next = *Head;
        (*Head)-> prev = newn;
    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}
void InsertLast(PPNODE Head, PPNODE Tail, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next =NULL;
    newn->prev = NULL;

    if((*Head == NULL)&&(*Tail ==NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)-> next = newn;
        newn ->prev = *Tail;

        *Tail = newn;
    }
    (*Head)->prev = *Tail;
    (*Tail)->next = *Head;
}

void DeleteFirst(PPNODE Head, PPNODE Tail)
{}
void DeleteLast(PPNODE Head, PPNODE Tail)
{}
void Display(PNODE Head, PNODE Tail)
{
    
}
int Count(PNODE Head, PNODE Tail)
{
    return 0;
}
void InsertAtPos(PPNODE Head, PPNODE Tail, int No,int iPos)
{}
void DeleteAtPos(PPNODE Head, PPNODE Tail, int iPos)
{}
int main()
{
    PNODE First =NULL;
    PNODE Last =NULL;
    return 0;
}