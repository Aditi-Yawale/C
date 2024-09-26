//CHECK IF 2 STRINGS ARE ANAGRAM
//String 1 = hello
//String 2 = olhel
//CAT   &   ACT
//TAN   &   ANT

//LOGIC - Count frequency of each letter in 1st string and compare with 2nd

//CASE SENSITIVE - small letters only

#include<stdio.h>
#include<stdbool.h>

bool CheckAnagram(char str1[], char str2[])
{
    int Count1[26] = {0};
    int Count2[26] = {0};
    int i = 0;

    while(*str1 != '\0')
    {
        Count1[*str1 - 'a']++;
        str1++; 
    }

    while(*str2 != '\0')
    {
        Count2[*str2 - 'a']++;
        str2++; 
    }
    for(i = 0; i < 26; i++)
    {
        if(Count1[i] != Count2[i])
        {
            break;
        }
    }

    if(i == 26)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter first string : \n");
    scanf("%s", Arr);

    printf("Enter second string : \n");
    scanf("%s", Brr);

    bRet = CheckAnagram(Arr, Brr);

    if(bRet == true)
    {
        printf("Strings are anagram\n");
    }
    else
    {
        printf("Strings are not anagram\n");
    }

}