#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iCnt * iFact;
    }
    return iFact;
}

int main()
{
    int iRet = 0;
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);
    printf("Factorial is : %d", iRet);
    return 0;
}