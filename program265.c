//Accept string from user and convert it into lowercase

#include<stdio.h>

void strlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            (*str) = (*str) + 32;
        }
        
        str++; 
        
    }
}
int main()
{
    char Arr[30];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    strlwrX(Arr);

    printf("Updated string is : %s\n", Arr);
    return 0;
}