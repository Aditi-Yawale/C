//Delete :-
//NOTE : To traverse in a linked list for call by address function - we NEED a temporary variable

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
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
        temp->next = newn;
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First->next;
    }
    printf("NULL\n");
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
//Call by address
void DeleteFirst(PPNODE First)
{
    PNODE temp = NULL;
    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    //BRACKET is very imp for *First
    else if((*First) -> next == NULL)   //Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        //Case 3
    {
        temp = *First;
        *First = (*First) -> next;
        free(temp);
    }
}

void DeleteLast(PPNODE First)
{
    PNODE temp = NULL;

    if(*First == NULL)        //Case 1
    {
        printf("Unable to delete as LL is empty\n");
        return;
    }
    //BRACKET is very imp for *First
    else if((*First) -> next == NULL)   //Case 2
    {
        free(*First);
        *First = NULL;
    }
    else        //Case 3
    {
        temp = *First;
        while(temp->next->next != NULL)
        {
            temp = temp -> next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main()
{
    PNODE Head = NULL; 
    int iRet = 0;


    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    InsertLast(&Head, 101);
    InsertLast(&Head, 111);
    InsertLast(&Head, 121);

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    DeleteFirst(&Head);

    printf("\n");

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    DeleteLast(&Head);

    printf("\n");

    Display(Head);
    iRet = Count(Head);

    printf("Number of elements are : %d\n", iRet);

    return 0;
}