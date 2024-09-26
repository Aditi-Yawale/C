//Accept string from user and convert it into lowercase

#include<stdio.h>

int main()
{
    char Arr[30];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    printf("Entered string is : %s\n", Arr);
    return 0;
}