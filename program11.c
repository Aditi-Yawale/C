#include<stdio.h>
#include<stdbool.h>

/*
    START
        Accept one number as No
        If the number is greater than 30 and if it is lessmthan 50
        then display the message as number is in range
        otherwise
        display the number is not in the range
    STOP
*/
bool CheckRange(int iNo)
{
    if((iNo >=30) && (iNo <=50))
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

    printf("Enter number : \n");
    scanf("%d", &iValue);

    bRet = CheckRange(iValue);
    if(bRet == true)
    {
        printf("%d is in the range 30 & 50\n", iValue);
    }
    else
    {
        printf("%d is in NOT the range 30 & 50\n", iValue);
    }
    return 0;
}