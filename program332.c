//DATA STRUCTURES

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

//
typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

int main()
{
    PNODE Head = NULL;
    //struct node *Head = NULL;

    NODE obj;
    //struct node obj;

    return 0;
}