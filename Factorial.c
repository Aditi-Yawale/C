//Program to find the factorial of a number without recursion

#include<stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    iCnt = 1;
    while(iCnt <= iNo)
    {
        iFact = iCnt * iFact;
        iCnt++;
    }
    return iFact;
}

int main()
{
    unsigned long int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %lu", iRet);
    return 0;
} 