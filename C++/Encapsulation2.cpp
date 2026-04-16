#include<iostream>
using namespace std;

/*
protected : only accessible in child class 

*/
class salary
{
    protected:
    int sal;
    public:
    void setsalary(int s)
    {
        sal=s;
    }
    int getsalary()
    {
        return sal;
    }
};
class manager:public salary
{
    public:
    void info()
    {
        setsalary(50000);
        cout<<"Manager Salary: "<<getsalary()<<endl;
    }
};
int main()
{
    manager m;
    m.info();
    return 0;
}