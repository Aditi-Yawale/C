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

//Hungarian case - InsertFirst (Capital small capital small)
//Call by address
void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL; //Pointer

    //STEP 1 : Dynamically Allocate Memory for New Node
    newn = (PNODE)malloc(sizeof(NODE)); 

    //STEP 2 : Initialise the new node
    newn->data = No;
    newn->next = NULL;


    //STEP 3: Check if linked list is empty
    if(*First == NULL)
    {
        *First  = newn;
    }
    else    //If linked list contains atleast one node in it
    {
        newn->next = *First;
        *First = newn;
    }
}

//Call by value
void Display(PNODE First)
{

}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head, 51);
    InsertFirst(&Head, 21);
    InsertFirst(&Head, 11);


    Display(Head);

    return 0;
}