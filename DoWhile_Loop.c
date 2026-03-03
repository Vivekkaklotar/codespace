#include<stdio.h>
int main()
{
    int i=1;
    do
    {
        printf("\n %d\n",i);
        i++;
    } while (i<=10);
    
    int j=10;
    do
    {
        printf("\n %d\n",j);
        j--; // also use j=j-2;
    } while (j>=1);
    
    return 0;
}