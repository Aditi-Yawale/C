#include<stdio.h>

//  WRONG OUTPUT 

void Display(int *ptr,int iSize)
{
    int i = 0;

    for(i = 0; i < iSize; i++)
    {
        printf("%d\n",*ptr); 
    }
}
int main()
{
    int Arr[5] = {10,20,30,40,50};
   
    
    Display(Arr,5);
    

    return 0;
}