#include <iostream>
#include <fstream>
using namespace std;

class content
{
    public:
    string title,platfor_name,status,views;
    void input()
    {
        cin.ignore();//buffer clear
        cout<<"Enter the title of the content: ";
        getline(cin,title);
        cout<<"Enter the platform name: ";
        //cin>>platfor_name;
        getline(cin,platfor_name);
        cout<<"Enter the views: ";
        //cin>>views;
        getline(cin,views);
        cout<<"Enter the status: ";
        //cin>>status;
        getline(cin,status);

    }
    void display()
    {
        cout << "Title  | Platform Name | Views | Status" << endl;
    }
};
void add_content()
{
    content c;
    c.input();
    ofstream file("forprojectdemo.txt",ios::app);
    file << c.title << " | " 
    << c.platfor_name << " | " 
    << c.views << " | " 
    << c.status << endl;
    file.close();
}
void showData()
{
    ifstream file("forprojectdemo.txt");
    string line;
    while (getline(file, line))
    {
        cout << line << endl;
    }
    file.close();
}
int main()
{
    int choice;
    while(true)
    {
        cout <<"1.add\n2.show\n3.delete\n4.update\n5.exit\n";
        cin>>choice;
        if (choice == 1)
        {
            add_content();
        }
        else if (choice == 2)
        {
            showData();  
        }
        else if (choice == 3)
        {
            //delete_content();
            /*
            1.take title to delete
            2.make temp file
            3.*/
        }
        else if (choice == 4)
        {
            //update_content();
        }
        else if (choice == 5)
        {
            break;
        }
    }
}