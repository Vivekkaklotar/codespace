#include<stdio.h>

struct  Employee

{
    int emp_id;
    char emp_name[100];
    char emp_department[100];

};

int main()

{

    struct Employee e1={1132,"Vivek","IT"};
    printf("\n Employee id is %d \n",e1.emp_id);
    printf("\n Employee name is %s \n",e1.emp_name);
    printf("\n Employee department is %s \n",e1.emp_department);
    return 0;

}