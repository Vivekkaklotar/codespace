#include<iostream>
#include<cmath>
#include<string>
#include<cctype>
#include<algorithm>  //or #include<utility>
using namespace std;
int main()
{
    // math functions <cmath>
    cout<<sqrt(16)<<endl;
    cout<<pow(2,3)<<endl;
    cout<<abs(-5)<<endl;

    // string functions <string>
    string str="Hello";
    cout<<"Length of the string is: "<<str.length()<<endl;
    cout<<"Substring of the string is: "<<str.substr(1,4)<<endl;

    // character functions <cctype>
    cout<<isalpha('1')<<endl;
    cout<<isdigit('d')<<endl;
    cout<<(char)toupper('a')<<endl;
    cout<<(char)tolower('A')<<endl;
    cout<<max(5,10)<<endl;
    cout<<min(5,10)<<endl;
    
    //swap function <algorithm> or #include<utility>
    int a=10, b=20;
    swap(a,b);
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;

}
