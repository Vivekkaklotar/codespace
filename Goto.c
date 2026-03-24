#include<stdio.h>
// int main()
// {
//     printf("\n start \n");
//     goto end;
//     printf("\n this is middle line  \n");
//     end:
//     printf("\n end \n");
//     return 0;
// }

/* here only print start and end lines because of goto statement 
and here the middle line is not printed because of the goto statement

actual we want this line just applied goto statement  */

// example of goto statement in c language :
int main()
{
    int i=1;
    start:
    if (i<=5)
    {
    printf("\n %d \n ", i);
    i++;
    goto start;
    }
    return 0;
}