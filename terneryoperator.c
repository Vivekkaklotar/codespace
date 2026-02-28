
//ternary operator :

#include <stdio.h>
int main()
{
    int marks=50;
    char result=(marks>=33) ? 'P' : 'F';
    printf("\n result is : %c",result); //p

int no1=85,no2=90;
/*
if (no1>no2)
{
    printf("\n max no is %d \n ",no1);
}
    else
    {
        printf("\n max no is %d \n ",no2);
    }
*/
int max=(no1>no2) ? no1 : no2;
printf("\n max no is %d \n ",max);

    return 0;
}