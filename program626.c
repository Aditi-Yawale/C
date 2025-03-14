// V V V V VIMP
//SEARCH MIDDLE ELEMENT OF LL
//ASKED IN INTERVIEWS - Time Complexity is Asked
//Same code with TC N/2

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
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCount;
            break;
        }
        iCount++;
        First = First->next;
    }

    return iPos;
}
int SearchLastOccurance(PNODE First, int No)
{
    int iCount = 1; 
    int iPos = -1;

    while(First != NULL)
    {
        if(First->data == No)
        {
            iPos = iCount;       
        }
        iCount++;
        First = First->next;
    }

    return iPos;
}

void SumDigits(PNODE First)
{
    int iDigit = 0;
    int iNo = 0;
    int iSum = 0;

    while(First != NULL)
    {
        iNo = First->data;
        iSum = 0;
        while(iNo != 0)
        {

            iDigit = iNo % 10;
            iSum = iSum + iDigit;
            iNo = iNo / 10;
        }
        printf("%d\n", iSum);
        First = First->next;
    }
}

int FactorsAddition(int iNo)
{
    int iSum = 0, i = 0;
    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    return iSum;
}

void SumFactors(PNODE First)
{
    while(First != NULL)
    {
        printf("%d\n", FactorsAddition(First->data));
        First = First->next;
    }

}

bool CheckPerfect(int iNo)
{
    int iSum = 0, i = 0;

    for(i = 1; i <= iNo/2; i++)
    {
        if(iNo % i == 0)
        {
            iSum = iSum + i;
        }
    }
    if(iSum == iNo)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void DisplayPerfect(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPerfect(First->data) == true)
        {
            printf("Perfect number from LL is : %d\n", First->data);
        }
        First = First->next;
    } 
}

//TC = N + N/2
int MiddleElement(PNODE First) 
{
    int iCnt = 0;
    PNODE temp = First;
    int iPos = 0, i = 0;

    while(temp != NULL)
    {
        iCnt++;
        temp = temp->next;
    }

    iPos = iCnt/2;

    for(i = 1; i <= iPos; i++)
    {
        First = First->next;
    }

    return First -> data;
}

int MiddleElementX(PNODE First)
{
    PNODE Teacher = First;
    PNODE Student = First;

    while((Teacher != NULL) && (Teacher -> next != NULL))   //2 CONDITIONS FOR EVEN AND ODD
    {
        Teacher = Teacher -> next -> next;
        Student = Student -> next;
    }

    return(Student -> data);

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
    InsertFirst(&Head,28);
    InsertFirst(&Head,10);
    InsertFirst(&Head,21);
    InsertFirst(&Head,496);

    
    Display(Head);
    iRet = MiddleElementX(Head);
    printf("Middle element is : %d\n",iRet);    
    return 0;
}
