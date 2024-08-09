//Addition of two numbers taken from user

/*
    STEPS I FOLLOW TO SOLVE A PROBLEM STATEMENT : 

    Step 1 : Understand the problem statement
    Step 2 : Write the algorithm
    Step 3 : Decide the programming language
    Step 4 : Write the program
    Step 5 : Test the program
*/

#include<stdio.h>

//FUNCTION HEADER - 

///////////////////////////////////////////////////////////////
//
//  Function Name : Addition
//  Description :   It is used to perform addition of 2 floats
//  Input :         Float, Float
//  Output :        Float
//  Author :        Aditi Kishor Yawale
//  Date :          15/04/2024
//
////////////////////////////////////////////////////////////////

float Addition(float fNo1, float fNo2)
{
    float fAns = 0.0;
    fAns = fNo1 + fNo2;
    return fAns;
}

////////////////////////////////////////////////////////////////
// Function name : main
// Description : It is an entry point function
////////////////////////////////////////////////////////////////
int main()
{

    float fValue1 = 0.0, fValue2 = 0.0;
    float fResult = 0.0;

    printf("Enter first number : \n");
    scanf("%f", &fValue1);

    printf("Enter second number : \n");
    scanf("%f", &fValue2);

    fResult = Addition(fValue1, fValue2);

    printf("Addition is : %f\n", fResult);

    return 0;
}