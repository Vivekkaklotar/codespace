#include<iostream>
using namespace std;

class employee
{
    public:
    int salary;
    void setsalary(int s)
    {
        salary=s;
    }
};
class manager:public employee
{
    public:
    int bonus = 10000;
    double total_salary(int s)
    {
        return s+bonus;
    }
};
class developer:public employee
{
    public:
    int bonus = 7000;
    double total_salary(int s)
    {
        return s+bonus;
    }

};
class intern:public employee
{
    public:
    int bonus = 5000;
    double total_salary(int s)
    {
        return s+bonus;
    }
};
 int main()
{
    manager m;
    developer d;
    intern i;
    m.setsalary(50000);
    d.setsalary(30000);
    i.setsalary(15000);
    cout<<"Manager Salary: "<<m.total_salary(m.salary)<<endl;
    cout<<"Developer Salary: "<<d.total_salary(d.salary)<<endl;
    cout<<"Intern Salary: "<<i.total_salary(i.salary)<<endl;
    return 0;
}