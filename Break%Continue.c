#include<stdio.h>
int main()
{
    for(int i=1; i<=10; i++)
    {
        if(i==5)
        {
            break;
        }
        printf("\n %d\n",i);
    }
    int j=0;
    while (j<=5)
    {
        j++;
        if (j==3)
        {
            continue;  //here continue means skip .
        }
        printf(" %d",j);
    }
    for (int i=1;i<=10;i++)
    {
        if (i%2==0) {
            if (i==6) {
                continue;
            }
        }
        printf("\n %d \n",i);
    }
    
    for (int i=1;i<=10;i++)
    {
        if (i%2!=0) 
            continue;
        printf("\n %d \n",i);
    }
     return 0;
}
