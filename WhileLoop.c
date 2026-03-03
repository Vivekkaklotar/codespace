#include<stdio.h>
int main()
{    int i=1;
    while (i<=10)
    {
        printf("\n %d\n",i);
        i++;
    }
    int j=2;
    while (j<=10)
    {
        printf("\n %d\n",j);
        j+=2; // also use j=j=2;
    }
    return 0;
}

