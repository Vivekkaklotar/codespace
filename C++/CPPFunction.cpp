#include<iostream>  //input output stream
using namespace std;  //standard namespace
/*
eveb odd function:
*/

void even_Odd(int num)
{
    if(num%2==0)
    {
        cout<<num<<" is even number";
    }
    else
    {
        cout<<num<<" is odd number";
    }
}
int main()
{
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    even_Odd(num);
    return 0;
}