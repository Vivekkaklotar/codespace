/*
variable : its container to store the value .var can be changed 
const = value cannot be changed 
*/
#include <stdio.h>
#define year 2026
int main()
{
    int salary = 50000;
    salary = 60000;
    const double pi = 3.14;
    printf("\n salary is :%d ", salary);

    int age = 30;
    age = 35;
    //pi=2;
    //year = 2025;
    printf("\n age is :%d ", age);
    printf("\n AOC :%f ", (pi*5*5));
    printf("\n year is :%d ", year);
    
    return 0;
}