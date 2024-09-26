/*
    0 to 35         FAIL                            (35 is exclusive)
    35 to 50        PASS CLASS                      (50 is exclusive)
    50 to 60        SECOND CLASS                    (60 is exclusive)
    60 to 75        FIRST CLASS                     (75 is exclusive)
    75 to 100       FIRST CLASS WITH DISTINCTION    (100 is exclusive))
*/

#include<stdio.h>

// USER DEFINED MACRO

#define RET_INVALID -1
#define RET_FAIL 2
#define RET_PASS 3
#define RET_SECOND 4
#define RET_FIRST 5
#define RET_DIST 6

int DisplayResult(float fMarks)
{
    if((fMarks < 0.0f) || (fMarks > 100.0f))    //Filter
    {
        return RET_INVALID;
    }
    else if((fMarks >= 0.0f) && (fMarks < 35.0f))
    {
        return RET_FAIL;
    }
    else if((fMarks >= 35.0f) && (fMarks < 50.0f))
    {
        return RET_PASS;
    }
    else if((fMarks >= 50.0f) && (fMarks < 60.0f))
    {
        return RET_SECOND;
    }
    else if((fMarks >= 60.0f) && (fMarks < 75.0f))
    {
        return RET_FIRST;
    }
    else if((fMarks >= 75.0f) && (fMarks < 100.0f))
    {
        return RET_DIST;
    }


}

int main()
{
    float fValue = 0.0f;
    int iRet = 0;

    printf("Please enter your percentage : ");
    scanf("%f", &fValue);

    iRet = DisplayResult(fValue);
    if(iRet == RET_INVALID)
    {
        printf("Your input is invalid\n");
    }
    else if(iRet == RET_FAIL)
    {
        printf("Student is FAIL\n");
    }
    else if(iRet == RET_PASS)
    {
        printf("Student is in PASS class\n");
    }
    else if(iRet == RET_SECOND)
    {
        printf("Student is pass in SECOND class\n");
    }
     else if(iRet == RET_FIRST)
    {
        printf("Student is pass in FIRST CLASS\n");
    }
     else if(iRet == RET_DIST)
    {
        printf("Student is pass in FIRST CLASS WITH DISTINCTION\n");
    }
    return 0;
}