#include<stdio.h>

void Display(iNo)
{
    int iCnt = 0;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {

        printf("%d\n", iCnt);
    }
   
}
int main()
{
    int iValue = 0;
    printf("Enter the number of times you want to display numbers: ");
    scanf("%d", &iValue);
    Display(iValue);

    return 0;
}
