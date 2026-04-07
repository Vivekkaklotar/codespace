#include<iostream>
using namespace std;
class Order
{
    public:
    string item;
    double price;
    int quantity;

    double total()
    {
        return price*quantity;
    }

void showOrder()
{
    cout<<"Item: "<<item<<endl;
    cout<<"Price: "<<price<<endl;
    
}
};
int main()
{
    Order item1;
    item1.item="burger";
    item1.price=80.50;
    item1.quantity=2;
    cout<<"Total price for "<<item1.quantity<<" "<<item1.item<<" is "<<item1.total()<<endl;
    return 0;
}