// #include<iostream>
// #include<fstream>
// using namespace std;
// /*
// file handling 
// ofstream : write into the file
// */
// int main()
// {
//     ofstream file("example.txt"); // create a file named example.txt
//     file<<"Hello manishbhai..!"; // write into the file
//     file.close(); // close the file
//     cout<<"file written successfully"<<endl;
//     return 0;
// }    


#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("C:\\Users\\hp\\Desktop\\Classes\\example.txt");

    file << "Hello manishbhai..!";
    file.close();

    cout << "File written successfully" << endl;
    return 0;
}