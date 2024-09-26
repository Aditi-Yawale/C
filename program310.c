//count number of ones in binary

#include<stdio.h>

int CountOne(int iNo)
{
    int iDigit = 0, iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 2;

        iSum = iSum + iDigit;
        iNo = iNo / 2;
    }
    printf("\n");
    return iSum;
}
int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    iRet =  CountOne(iValue);
    printf("Number of ones in binary is : %d", iRet);


    return 0;
}

