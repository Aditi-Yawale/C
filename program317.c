// IS 6th BIT ON OR OFF?

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 32;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        printf("6th bit is ON\n");
    }
    else
    {
        printf("6th bit is OFF\n");
    }
 
    return 0;
}

/*
    __________________________________
    OP1     OP2     &       |       ^
    __________________________________
    1       1       1       1       0
    1       0       0       1       1
    0       1       0       1       1
    0       0       0       0       0
    __________________________________

*/
