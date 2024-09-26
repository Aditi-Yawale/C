//SEARCH FIRST OCC GIVEN NUMBER IN LINKED LIST
//ASKED IN INTERVIEWS

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

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

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First -> next;
    }
    printf("NULL\n");
} 

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

int Addition(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        iSum = iSum + (First->data);
        First = First->next;
    }

    return iSum;
}

int EvenCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data) % 2 == 0)
        {
            iCount++;
        }
        First = First->next;
    }

    return iCount;
}

int OddCount(PNODE First)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data) % 2 != 0)
        {
            iCount++;
        }
        First = First->next;
    }

    return iCount;
}

int FrequencyCount(PNODE First, int No)
{
    int iCount = 0;

    while(First != NULL)
    {
        if((First->data) == No)
        {
            iCount++;
        }
        First = First->next;
    }

    return iCount;
}

bool Search(PNODE First, int No)
{
    bool bFlag = false;

    while(First != NULL)
    {
        if((First->data) == No)
        {
            bFlag = true;
            break;
        }
        First = First->next;
    }

    return bFlag;
}

int SearchFirstOccurance(PNODE First, int No)
{
    int iCount = 1; //AS LL INDEX STARTS FROM 1

    while(First != NULL)
    {
        if(First->data == No)
        {
            break;
        }
        iCount++;
        First = First->next;
    }
    //return iCount; CANT DO CUZ IF NO DOEST EXIST IT WILL STILL RETURN 1

    if(First == NULL)//AS NO ISNT THERE THEN FIRST REACHES LAST
    {
        return -1;
    }
    else
    {
        return iCount;
    }


}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iValue = 0;
    bool bRet  = false;

    InsertFirst(&Head,42);
    InsertFirst(&Head,10);
    InsertFirst(&Head,50);
    InsertFirst(&Head,21);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,11);
    
    Display(Head);
    
    iRet = Addition(Head);
    printf("Addition of all elements : %d\n", iRet);

    iRet = EvenCount(Head);
    printf("Even number of elements are : %d\n", iRet);

    iRet = OddCount(Head);
    printf("Odd number of elements are : %d\n", iRet);

    printf("Enter value to check frequency : \n");
    scanf("%d", &iValue);

    iRet = FrequencyCount(Head, iValue);
    printf("Frequency of %d is: %d\n", iValue, iRet);

    printf("Enter value to search: \n");
    scanf("%d", &iValue);

    bRet = Search(Head, iValue);
    if(bRet == true)
    {
        printf("Element is present in LL\n");
    }
    else
    {
        printf("Element is NOT present in LL\n");
    }

    iRet = SearchFirstOccurance(Head, 73);
    if(iRet == -1)
    {
        printf("There is no such element\n");
    }
    else
    {
        printf("First occuranced of element is : %d", iRet );
    }



    return 0;
}
