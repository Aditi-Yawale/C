//ADDITION OF N NUMBERS ACCEPTED FROM THE USER

#include<stdio.h>

int Addition(int ptr[],int iSize)
{
    int i = 0;
    int iSum = 0;

    for(i = 0; i < iSize; i++)
    { 
        iSum = iSum + ptr[i];    
    }

    return iSum;
}
int main()
{
    int Arr[5];
    int iRet = 0, i = 0; 

    printf("Enter the elements : \n");

    for(i = 0; i < 5; i++)
    {
        scanf("%d", &Arr[i]);
    }
   
    
    iRet = Addition(Arr,5);
    printf("Sum is : %d", iRet);
    
    return 0;
}