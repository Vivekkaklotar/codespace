/*
constructor = its a invoke automatically whenever object is created 
(Constructor ek special function hota hai jo object create hote hi automatically call hota hai)
1.same as class name
2.no return type

*/
#include<iostream>
using namespace std;
class NetflixUser
{
    string username;
    string subscription;
    public:
    NetflixUser(string u,string s) //parameterized constructor
    {
        username=u;
        subscription=s;
    }
    void show()
    {
        cout<<"Username: "<<username<<endl;
        cout<<"Subscription: "<<subscription<<endl;
    }
};
int main()
{    NetflixUser user1("vivek_kaklotar","premium");
    user1.show();   
}