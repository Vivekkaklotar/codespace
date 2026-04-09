#include<iostream>
using namespace std;
class payement
{
    public :
    int amount;
    void seAmount(int am)
    {
        amount=am;
    }
};
class PayByNetBanking:public payement
{
    public:
    int Transaction;
    void netBank()
    {
        Transaction=amount*0.02;
    }
};
class PaybyUPI:public PayByNetBanking
{
    public:
    void calculate()
    {
        int total;
        netBank();
        total=Transaction+amount;
        cout<<"Total : "<<total<<endl;
    }
};
int main()
{
    PaybyUPI upi;
    upi.seAmount(1000);
    upi.calculate();
}