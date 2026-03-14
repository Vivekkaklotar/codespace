#include <stdio.h>
#include<string.h>

    int calculate_total_marks(int m1,int m2,int m3,int m4)
    {
        return m1+m2+m3+m4;
    }
    float average(int total)
    {        return (float)total;
    }

        int main()
        {
          {
             int m1=78,m2=45,m3=56,m4=79;
        
             int total= calculate_total_marks(m1, m2, m3, m4);
             printf("\n Total marks is : %d",total);

             float avg= average(total);
             printf("\n Average marks is : %f",avg);

             return 0;
          }

        }
