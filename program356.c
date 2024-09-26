//DOUBLY LINEAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;  //$ - line different from singly linear linked list
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void Display(PNODE First)
{
    printf("NULL <=> ");
    while(First != NULL)
    {
        printf("| %d | <=> ",First->data);
        First = First->next;
    }
    printf("NULL");
}

int Count(PNODE First)
{
    int iCnt = 0; 
    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }   
    return iCnt;
}

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // $

    if(*First == NULL)
    {
        *First = newn;
    }
    else    
    {
        newn->next = *First;
        (*First)->prev = newn;  //$
        *First = newn;
    }
   
}

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;
    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;
    newn->prev = NULL;  // $

    if(*First == NULL)
    {
        *First = newn;
    }
    else    
    {
        temp = *First;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        newn->prev = temp;  //$
        temp->next = newn;
    }
    
}

void InsertAtPos(PPNODE First, int No, int iPos)
{

}

void DeleteFirst(PPNODE First)
{

}

void DeleteLast(PPNODE First)
{
    
}

void DeleteAtPos(PPNODE First, int iPos)
{

}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head, 8);
    InsertFirst(&Head, 4);
    InsertFirst(&Head, 12);

    InsertLast(&Head,5);
    InsertLast(&Head,18);
    InsertLast(&Head,3);

    Display(Head);

    iRet = Count(Head);
    printf("Number of nodes : %d", iRet);

    return 0;
}