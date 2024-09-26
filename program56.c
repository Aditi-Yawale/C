#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iNo = iNo / 10;
        iCount++;
    }

    return iCount;
}

int main()
{
    int iValue = 0;
    int iDigit = 0;

    printf("Enter Number : \n");
    scanf("%d", &iValue);

    iDigit = CountDigits(iValue);

    printf("Number of digits = %d", iDigit);
    return 0;
}