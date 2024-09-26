//input = 5
//output = a b c d e

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    char ch = '\0';
    for(iCnt = 1, ch = 'a'; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\t",ch);
    }
   
   
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}