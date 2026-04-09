#include<iostream>
using namespace std;

class intermarks 
{
    public:
    int internal=20;
};
class externalmarks
{
    public:
    int external=63;
};
class totalmarks:public intermarks,public externalmarks
{
    public:
    void total()
    {
        cout<<"Total Marks: "<<internal+external<<endl;
    }
};
int main()
{
    totalmarks tm;
    tm.total();
}