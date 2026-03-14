
#include<stdio.h>
#include<string.h>

/*

functions : does some work
function without patameters and without return type
function with parameters and without return type
function without parameters and with return type
function with parameters and with return type
*/
void greet()
{
    printf("Hello World! \n");
}
void sum(int a, int b)
{
    printf("\n Sum is : %d \n",a+b);
}
int mul()
// function without parameters and with return type
{
    int a=34,b=56;
    return a*b;
}
float div (int a, int b)
{
    return (float)a/b;
}
int main()
{
    greet();
    sum(12,12);
    printf("\n mul is : %d \n",(mul));
    printf("\n div is : %f \n",(div(10,03)));

    return 0;
}
