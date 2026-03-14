#include <stdio.h>

int deposit(int amount)
{
    int balance=1000;
    return balance+=amount;
}
int withdraw(int amount,int balance)
{
    return balance-=amount;
}
int main()
{
    int amount;
    printf("Enter the amount to deposit : ");
    scanf("%d",&amount);
    int balance=deposit(amount);
    printf("Balance is : %d",balance);
    printf("\nEnter the amount to withdraw : ");
    scanf("%d",&amount);

    printf("remaining balance is %d",withdraw(amount,balance));

}