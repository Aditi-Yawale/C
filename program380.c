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
    
    (*Last)->next = *First; //Removed in common

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
        //NOTE: Sequence is imp
    }
    (*Last)->next = *First;
    
}

void Display(PNODE First, PNODE Last)
{
    //WRONG LOGIC - AS LAST NODE IS NOT VISITED

    // while(First != Last)
    // {
    //     printf("|%d|->",First->data);
    //     First = First->next;
    // }
    // printf("NULL\n");

    //correct logic : USE DO WHILE LOOP as well as FILTER

    if((First == NULL) && (Last == NULL))   //Filter
    {
        return;
    }

    do
    {
        printf("| %d | -> ", First->data);
        First = First->next;
    }while(First != Last->next);

 
}


int main()
{
    PNODE Head = NULL;
    PNODE Tail = NULL; 

    Display(Head, Tail);


    InsertFirst(&Head, &Tail, 51);
    InsertFirst(&Head, &Tail, 21);
    InsertFirst(&Head, &Tail, 11);

    InsertLast(&Head, &Tail, 101);
    InsertLast(&Head, &Tail, 111);
    InsertLast(&Head, &Tail, 121);
    
    Display(Head, Tail);



    return 0;
}