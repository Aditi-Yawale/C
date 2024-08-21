//Write a program which accept one number from user and print that number of even numbers on screen

#include<stdio.h>

void Display(int iNo)
{
    if(iNo <= 0)
    {
        return;
    }
    
    int iCnt = 0;
    for(iCnt = 1; iCnt <= 2*iNo; iCnt++ )
    {
        if(iCnt % 2 == 0)
        {
            printf("%d ", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}