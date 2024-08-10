//Program to find if a number is a perfect number or not

/*
    Accept number as no
    search all its factors
    perform addition of all its factorss
    if addition is same as No
    then display as no is perfect number
    otherwise display as no is not a perfect number
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckPerfect(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }
    
    for(int iCnt = 1; iCnt <= (iNo / 2) ; iCnt++)     //To find factors
    {
        if((iNo % iCnt) == 0)
        {
            iSum = iSum + iCnt;
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


int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a perfect number", iValue);
    }
    else
    {
        printf("%d is NOT a perfect number", iValue);
    }
    return 0;
}