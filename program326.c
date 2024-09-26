// IS 11th & 12th BIT ON OR OFF? ; HEXADECIMAL

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000C00;
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
   0000 0000 0000 0000 0000 1100 0000 0000
0x00000C00
*/
