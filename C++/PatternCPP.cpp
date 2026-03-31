#include<iostream>
using namespace std;
/* 
*
**
***
****
*/
int main()
{
    int nrow;
    char ch = 'A';
    cout<<"enter the number of rows :";

    cin>>nrow;
    for(int i=1;i<=nrow;i++){
        for(int k=1;k<=nrow;k++){
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"  *  ";
        }
        cout<<endl;
    }
    int n;
    cout<<"enter the number of rows:";
    cin>>n;
    for(int i=1;i<n;i++){
        for(int k=i;k<=n;k++){
            cout<<" ";  
    }
    for(int j=1;j<=i;j++){
        cout<<"  *  ";}
    cout<<endl;
    }
    
    n=4;
    ch = 'A';
    for(int i=0;i<n;i++){
        
        for(int j=0;j<n;j++){
            cout<<ch<<" ";
            ch=ch+1;
        }
    cout<<endl;}
    n=4;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<char('A'+ i -1);
        }
        cout<<endl;
    }
    ch = 'A';
    for(int i=1;i<=n;i++){
    for(int k=1;k<=n-i;k++){
        cout<<" ";
    }
        for(int j=1;j<=i;j++){ 
            cout<<char('A'+ i -1);
        }cout<<endl;
    }

}