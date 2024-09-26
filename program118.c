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
    int Arr[5] = {10,20,30,40,50};
    int iRet = 0;
   
    
    iRet = Addition(Arr,5);
    printf("Sum is : %d", iRet);
    
    return 0;
}