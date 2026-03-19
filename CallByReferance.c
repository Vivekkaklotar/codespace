/*
pointer is not secure its use only in C Language*/
 #include<stdio.h>
    void swap(int *a,int *b)  // a=10,b=20
    {
        int temp=*a;
        *a=*b;
        *b=temp;
    }
    int main()
    {
    int a=10,b=20;
    printf("before swapping a = %d and b = %d \n",a,b);
    swap(&a,&b);
    printf("after swapping a = %d and b = %d \n",a,b);
    
     return 0;
    }