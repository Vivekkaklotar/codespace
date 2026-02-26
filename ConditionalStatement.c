/*if : if condtion is true : true statement print else nothing
*/

#include <stdio.h>
int main()
{
    int age=18;
    if(age>=18)
    {
        printf("\n you are eligible for voting");
    }

    int num1=12;
    if(num1>0)
    {
        printf("\n num1 is positive");
    }
    
/*
if else : 
if condition is true true statement print else false statement print 
 */
    int no1=13;
    if(no1%2==0)
    {
        printf("\n no1 is even");
    }
    else
    {
        printf("\n no1 is odd");
    }
/*-----------------------------------------------------------------------*/
    int marks = 85;
    if(marks>=90)
    {
        printf("\n Pass");
    }
    else
    {
        printf("\n Fail \n");
    }
    return 0;
}