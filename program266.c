//Accept string from user and convert it into upppercase

#include<stdio.h>

void struprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            (*str) = (*str) -  32;
        }
        
        str++; 
        
    }
}
int main()
{
    char Arr[30];

    printf("Enter String : ");
    scanf("%[^'\n']s",Arr);

    struprX(Arr);

    printf("Updated string is : %s\n", Arr);
    return 0;
}