#include<iostream>
using namespace std;
/*
private : accessible within the class only
public : accessible from anywhere
*/
class BankAccount
{
    private:
    int amount;
    public:
    void setAmount(int a)
    {
        amount=a;
    }
    int getAmount()
    {
        return amount;
    }
};
int main()
{
    BankAccount ba;
    ba.setAmount(10000);
    cout<<"Amount in the bank account: "<<ba.getAmount()<<endl;
    return 0;
} 