// IS 4th BIT ON OR OFF?

/*
    iNo     11      0 0 0 0 1 0 1 1
    MASK            0 0 0 0 1 0 0 0 
                    ________________ &
                    0 0 0 0 1 0 0 0


    iNo     20      0 0 0 1 0 1 0 0
    MASK            0 0 0 0 1 0 0 0 
                    _______________ &
                    0 0 0 0 0 0 0 0

*/

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 8, iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    //MY LOGIC : 

    // if(iResult == 0)
    // {
    //     printf("4th bit is off\n");
    // }
    // else
    // {
    //     printf("4th bit is on\n");
    // }

    //SIR'S :

    if(iResult == iMask)
    {
        printf("4th bit is ON\n");
    }
    else
    {
        printf("4th bit is OFF\n");
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
