// ACCEPT NUMBER FROM USER AND OFF THE 10TH BIT ; HEXADECIMAL

#include<stdio.h>

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask =  0xFFFFFDFF;
    unsigned int iResult = 0;

    printf("Enter number : \n");
    scanf("%u", &iNo);

    iResult = iNo & iMask;

    printf("Updated number is : %u", iResult);
    
 
    return 0;
}

/*
   1111 1111 1111 1111 1111 1101 1111 1111
   0xFFFFFDFF
*/

