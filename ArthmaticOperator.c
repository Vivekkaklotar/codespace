/*
Arithmatic operators : useing for calculations 
+ - * / 
% = modulo,mod  
*/

/*
12345
%10
answer is : 1234.5*/

#include <stdio.h>
int main()
{
    int num_1 = 10, num_2 = 2;
    printf("\n sum is %d\n",num_1+num_2);
    printf("\n sub is %d\n",num_1-num_2);
    printf("\n mul is %d\n",num_1*num_2);
    printf("\n div is %d\n",num_1/num_2);
    printf("\n mod is %d\n",num_1%num_2);   
    return 0;
}