#include<stdio.h>

int Display(iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt<= iNo; iCnt++)
    {
        printf("Jay Hanuman...\n");
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
