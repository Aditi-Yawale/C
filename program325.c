// IS 6th & 9th BIT ON OR OFF? ; HEXADECIMAL

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000120;
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
   0000 0000 0000 0000 0000 0001 0010 0000
0x00000120

*/
