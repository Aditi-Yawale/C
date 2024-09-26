#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    iCnt = 1;
    while( iCnt<= iNo)
    {
        printf("Jay Hanuman...\n");
        iCnt++;
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number of times you wish to display Jay Hanuman : ");
    scanf("%d", &iValue);
    Display(iValue);
    return 0;
}
