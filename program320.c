// IS 6th & 9th BIT ON OR OFF?

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 288;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        printf("6th and 9th bits are ON\n");
    }
    else
    {
        printf("Bits are OFF\n");
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
