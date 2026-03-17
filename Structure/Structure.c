/* Structure : different data types of data stored in single variable 
*/
#include<stdio.h>
struct student
{
    int id;
    char name[100];
    char address[100];
    int marks;
};
int main()
{
    struct student s1;
    s1.id=1;
    // s1.name=vivek;
    // s1.address=surat;
    s1.marks=85;
    printf("\n in id is %d \n",s1.id);
    // printf("\n in name is %s \n",s1.name);
    // printf("\n in address is %s \n",s1.address);
    printf("\n in marks is %d \n",s1.marks);
    return 0;
}