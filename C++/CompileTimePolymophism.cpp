#include<iostream>
using namespace std;
/*
compile time polymorphism : same function name but different parameters
*/
class compile
{
    public:
    void setvalue (int value)
    {
        cout<<"integer value: "<<value<<endl;
    }
    void setvalue (double value)
    {
        cout<<"double value: "<<value<<endl;
    }
};
int main()
{
    compile c;
    c.setvalue(10);
    c.setvalue(3.14);
    return 0;
}