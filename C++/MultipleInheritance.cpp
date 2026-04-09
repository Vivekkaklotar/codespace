#include<iostream>
using namespace std;
class BaseSalary
{
    public:
    int base_salary=50000;

};
class Bonus
{
    public:
    int bonus=10000;
};
class TotalSalary:public BaseSalary,public Bonus
    {
    public:
    int total_salary=base_salary+bonus;
    void total_salary123()
    {
        cout<<"Total Salary: "<<total_salary<<endl;
    }
};
int main()
{    TotalSalary ts;
    ts.total_salary123();
}
