// ACCEPT NUMBER FROM USER AND "toggle" THE 4TH BIT ; HEXADECIMAL

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask =  0x00000008;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo ^ iMask;

    printf("Updated number is : %u", iResult);
    
 
    return 0;
}

/*
   0000 0000 0000 0000 0000 0000 0000 1000
   0x00000008
*/