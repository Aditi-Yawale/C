// IS 9th BIT ON OR OFF? - hexadcimal

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 0x00000100;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;
    
    if(iResult == iMask)
    {
        printf("9th bit is ON\n");
    }
    else
    {
        printf("9th bit is OFF\n");
    }
 
    return 0;
}

/*
  0000 0000 0000 0000 000 0001 0000 0000
0x000000100
*/
