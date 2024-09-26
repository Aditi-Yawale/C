//Same code without comments

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertLast(PPNODE First, int No)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = No;
    
    newn->next = NULL;

    if(*First == NULL)
    {
        *First  = newn;
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


void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE)); 

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First  = newn;
    }
    else 
    {
        newn->next = *First;
        *First = newn;
    }
}

//Call by value function
void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->", First->data);
        First = First -> next;
    }
    printf("NULL\n");
}

//Call by value function
int Count(PNODE First)
{
    int iCnt = 0;
    while(First != NULL)
    {
        iCnt++;
        First = First -> next;
    }
    return iCnt;
}

int main()
{
    int iRet = 0;
    PNODE Head = NULL;

    InsertFirst(&Head, 101);
    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);

    Display(Head);

    iRet = Count(Head);
    printf("Total number of nodes is : %d\n", iRet);

    printf("\n");

    InsertLast(&Head,111);
    InsertLast(&Head,121);
    InsertLast(&Head,151);

    Display(Head);

    iRet = Count(Head);
    printf("Total number of nodes is : %d", iRet);



    return 0;
}