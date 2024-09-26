/*
    PRIME NUMBER
*/




#include<stdio.h>
#include<stdbool.h>

//Sir's Method : 
bool CheckPrime(int iNo)
{
    int iCnt = 0, iCount = 0;
    if(iNo < 0) //Updater
    {
        iNo = -iNo;
    }
    
    for(iCnt = 2; iCnt <=(iNo / 2); iCnt ++)
    {
        if((iNo % iCnt)==0)
        {
            iCount++;
        }
    }
    if(iCount == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

/*
my METHOD 1:
bool CheckPrime(int iNo)
{
    int iCnt = 0;   
    for(int iCnt = 2; iCnt <= (iNo / 2) ; iCnt++)     //To find factors
    {
       if((iNo % iCnt == 0))
       {
          return false;      
       }
       else
       {
            return true;
       }
    }
    
}

my METHOD 2:
bool CheckPrime(int iNo)
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

    if(iSum == 1)
    {
        return true;
    }
    else
    {
        return false;
    }

}
*/

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if(bRet == true)
    {
        printf("%d is a prime number", iValue);
    }
    else
    {
        printf("%d is NOT a prime number", iValue);
    }
    return 0;
}