//SCL - Singly Circular Linked List

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

void InsertFirst(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }
    
    (*Last)->next = *First; 

}
void InsertLast(PPNODE First, PPNODE Last, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if((*First == NULL) && (*Last == NULL))
    {
        *First = newn;
        *Last = newn;
        
    }
    else
    {
        (*Last)->next = newn;
        *Last = newn;

    }
    (*Last)->next = *First;
    
}

void Display(PNODE First, PNODE Last)
{
    if((First == NULL) && (Last == NULL))  
    {
        printf("Linked List is Empty\n");
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }while(First != Last->next);


}

int Count(PNODE First, PNODE Last)
{
    int iCount = 0;
    if((First == NULL) && (Last == NULL)) 
    {
        return 0;
    }

    do
    {
        iCount++;
        First = First->next;
    }while(First != Last->next);

    return iCount;
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL; 

    int iRet = 0;

    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    
    Display(Head, Tail);

    iRet = Count(Head, Tail);
    printf("Number of nodes : %d\n", iRet);

    return 0;
}