#include<iostream>
using namespace std;
int main()
{
    int a[5];
    int sum=0;
    for(int i=0;i<5;i++)
    {
    cout<<"Enter a numbers: ";
    cin>>a[i];
    sum+=a[i]; 
    }
    cout<<"Sum of the numbers is: "<<sum;
}