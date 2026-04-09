#include<iostream>
using namespace std;

class Player
{
    public:
    string name;
    int health;    
};
class Warrior:public Player
{
    public:
    int strength=50*2;
    int totalstrenghth()
    {
        return strength*2;
    }
};
class SuperWarrior:public Warrior
{
    public:
    int special_power=100;
    int total()
    {
        return totalstrenghth()+special_power;
    }
};
int main()
{
    SuperWarrior sp;
    cout<<"total :"<<sp.total()<<endl;
}