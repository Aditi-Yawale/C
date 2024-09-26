// IS 4th & 8th BIT ON OR OFF?

/*
    iNo     11      0 0 0 0 1 0 1 1
    MASK            1 0 0 0 1 0 0 0 
                    ________________ &
                    0 0 0 0 1 0 0 0


    iNo     20      0 0 0 1 0 1 0 0
    MASK            1 0 0 0 1 0 0 0 
                    _______________ &
                    0 0 0 0 0 0 0 0

*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 136;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        printf("4th and 8th bits are ON\n");
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
