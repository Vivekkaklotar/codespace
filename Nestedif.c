#include<stdio.h>
int main()
{
    int pass=1234;
    int otp=7890;
    if(pass==1234)
    {
        if (otp==7890)
        {
            printf("\n login successful");
        }
        else
        {
            printf("\n invalid otp");
        }
    }
    else
    {
        printf("\n invalid password");
    }
    //max of 3 numbers
    //a=12,b=45,c=2;
    int a=120,b=45,c=20;
    if (a>b)
    {
        if (a>c)
        {
            printf("\n a is grater \n");
        }
            else
            {
                printf("\n c is grater \n");
            }
        }
        else
        {
            if (b>c)
            {
                printf("\n B is grater \n");
            }
            else
            {
                printf("\n C is grater \n");
            }
        }
    return 0;
}