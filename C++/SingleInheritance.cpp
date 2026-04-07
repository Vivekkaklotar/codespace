#include<iostream>
using namespace std;
/*
Inheritance : deriving attribute of some class

1. single inheritance : one class inherit from another class
2. multiple inheritance : one class inherit from more than one class
3. multilevel inheritance : one class inherit from another class and that class inherit from another class
4. hierarchical inheritance : one class inherit from another class and more than one class inherit from that class
5. hybrid inheritance : combination of more than one type of inheritance
*/

class bank
{
    public:
    double balance=1000;

    void show_balance()
    {
        cout<<"current Balance: "<<balance<<endl;
    }
};

class Interest:public bank
{
    public:
    double addInterest()
    {
        balance+=100;
    }
};
int main()
{
    Interest i1;
    i1.show_balance();
    i1.addInterest();
    i1.show_balance();
    
}