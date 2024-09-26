//CHECK IF 2 STRINGS ARE ANAGRAM
//String 1 = hello
//String 2 = olhel
//CAT   &   ACT
//TAN   &   ANT

//LOGIC - Count frequency of each letter in 1st string and compare with 2nd4
//INSTEAD OF CREATING 26 VARIABLES, CREATE AN ARRAY OF 26 ELEMENTS
// a = index 0; b = index 14

//WILL BE ASKED FOR HIGHER EXP INTERVIEWS

#include<stdio.h>
#include<stdbool.h>

void CalculateFrequency(char str[])
{
    int Count[26] = {0};
    int i = 0;

    while(*str != '\0')
    {
        Count[*str - 'a']++; //for a to index 0; b to index 1; z to index 26 -- AS ASCII VALUE OF a in 97
        str++;
    }

    for(i = 0; i < 26; i++)
    {
        printf("Frequency of %c is : %d\n", 'a'+i, Count[i]);
    }

}

int main()
{
    char Arr[30];

    printf("Enter  string : \n");
    scanf("%s", Arr);

    CalculateFrequency(Arr);
    return 0;

}