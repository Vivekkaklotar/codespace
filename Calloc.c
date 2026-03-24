#include<stdio.h>
#include<stdlib.h>

/*
calloc : dynamic memory allocation
data structure 
array 
int a[100]
20
default value is 0
*/

int main()
{
    int *arr;
    int n;
    printf("\n Enter the size : ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));
    // printf("\n enter the value : ");
    // for(int i = 0; i < n; i++)
    // {
    //     scanf("%d", &arr[i]);
    // }
    for (int i=0; i < n; i++)
    {
        printf("\n %d \n ", arr[i]);
    }
    free(arr);
    return 0;
}