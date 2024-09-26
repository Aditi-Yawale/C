#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    iCnt = 1;
    while(iCnt <= iNo)
    {

        printf("%d\n", iCnt);
        iCnt++;
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
