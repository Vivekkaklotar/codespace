#include<iostream>
using namespace std;

class AmazonOrder
{
public:
    string item_name;
    int item_price;

    // Constructor
    AmazonOrder(string in, int ip)
    {
        item_name = in;
        item_price = ip;
    }

    void show_item()
    {
        cout << "Item name: " << item_name << endl;
        cout << "Item price: " << item_price << endl;
    }
};

int main()
{
    AmazonOrder order1("laptop", 50000);
    AmazonOrder order2("mobile", 20000);

    order1.show_item();
    order2.show_item();

    return 0;
}