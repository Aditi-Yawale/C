#include<stdio.h>

long int Factorial(int iNo)
{
    int iCnt = 0;
    long int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}

int main()
{
    long int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %ld", iRet);
    return 0;
}