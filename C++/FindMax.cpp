#include<iostream>
using namespace std;
/*
take 5 numbers from usesr 
pass all value in function and find maximum number
*/
int findMax(int arr[], int size)
{
    int max=arr[0];
    for(int i=1;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[5];
    int max=0;
    for(int i=0;i<5;i++)
    {
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    max=findMax(arr,5);
    cout<<"Maximum number is: "<<max;
}