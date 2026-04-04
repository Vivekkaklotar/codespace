#include<iostream>
using namespace std;
/*
oops : object oriented programming
1. class : its a collection of data and function
2. object : its give permission to access functionality of class
3. encapsulation : 
4. inheritance : 
5. polymorphism : 
6. abstraction :
*/

class Instagramuser
{
    public:      //format specifier
    string username;
    int followers;

    void post()
    {
        cout<<username<<" post created"<<endl;
    }
    void show()
    {
        cout<<"Username: "<<username<<endl;
        cout<<"Followers: "<<followers<<endl;
    }
    
};
int main()
{
    Instagramuser user1;
    user1.username="vivek_kaklotar";
    user1.followers=2300;
    user1.post();
    user1.show();
    
    return 0;
}