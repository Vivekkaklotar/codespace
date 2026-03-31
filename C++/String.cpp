#include<iostream>  //input output stream
using namespace std;  //standard namespace
int main()
{
    string str;
    cout<<"Enter a string: ";
    cin>>str;

    for(int i=str.length()-1;i>=0;i--)
    {
        cout<<str[i];
    }
}