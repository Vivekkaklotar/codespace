/*
pre increment 
post incremenet 
*/
#include <stdio.h>
int main()
{
    int a = 5;
    int b=a++; // post increment

    printf("\n post increment %d\n",a);
    printf("\n post increment %d\n",b);

    int x=10;
    x++;

    printf("\n post increment %d\n",x);

    // pre increment
    int c=5;
    int d=++c; // pre increment
    printf("\n pre increment c is %d\n",c);
    printf("\n pre increment d is %d\n",d);

    int y=10;
    y=++y;
    printf("\n pre increment y is %d\n",y);
    return 0;
}