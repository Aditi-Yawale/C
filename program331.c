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
    struct node *Head = NULL; //VIMP - Pointer that can point to structure

    struct node obj;

    return 0;
}