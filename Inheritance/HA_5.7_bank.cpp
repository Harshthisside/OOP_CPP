#include <iostream>
using namespace std;
class base
{
protected:
    int account_number;
    string name;
    float balance;

public:
    void set()
    {
        cout << "Enter the account number : ";
        cin >> account_number;
        cout << "Enter the name : ";
        cin >> name;
        cout << "Enter the balance : ";
        cin >> balance;
    }
    void display()
    {
        cout << "Account number : " << account_number << endl;
        cout << "Name : " << name << endl;
        cout << "Balance : " << balance << endl;
    }
    void deposit(int amount)
    {

        balance = balance + amount;
    }
    int get_balance()
    {
        return balance;
    }

public:
};
class current : virtual public base
{
protected:
    int overdue_amount;

public:
    void get_overdue()
    {
        cout << "Enter the overdue amount : ";
        cin >> overdue_amount;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Amount exceeds balance" << endl;
        else if (amount<=overdue_amount)
        {
           balance = balance - amount;
            cout << amount << " withdrawn from current account" << endl;
        }
    }
};
class savings : virtual public base
{
protected:
    int minimum_balance;

public:
    void get_minbalance()
    {
        cout << "Enter the minimum balance : ";
        cin >> minimum_balance;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Amount exceeds balance" << endl;
        else if (balance-amount <= minimum_balance)
        {
            cout << "Balance becomes less than minimum balance can't withdraw" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << amount << " withdrawn from current account" << endl;
        }
    }
};
class customer : public savings, public current
{
public:
};
int main()
{
    customer c;
    c.set();
    c.get_overdue();
    c.get_minbalance();
    int x = 1, amount;
    cout << "0.Exit  \n1.Deposit Money \n2.Withdraw from savings  \n3.Withdraw from current  \n4.Display balance  \n5.Display details" << endl;
    while (x != 0)
    {

        cout << "Enter the operation to be performed : ";
        cin >> x;
        switch (x)
        {
        case 0:
            cout << "Thank you!!" << endl;
            break;
        case 1:
            cout << "Enter the amount to be deposited : ";
            cin >> amount;
            c.deposit(amount);
            break;
        case 2:
            cout << "Enter the amount to be withdrawn : ";
            cin >> amount;
            c.savings::withdraw(amount);
            break;
        case 3:
            cout << "Enter the amount to be withdrawn : ";
            cin >> amount;
            c.current::withdraw(amount);
            break;
        case 4:
            cout << "Balance : " << c.get_balance() << endl;
            break;
        case 5:
            c.display();
            break;
        default:
            cout << "Wrong choice!!Please Enter again" << endl;
            break;
        }
    }
    return 0;
}