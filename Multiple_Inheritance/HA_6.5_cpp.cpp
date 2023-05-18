#include <iostream>
using namespace std;
class base
{
protected:
    int account_number;
    string name;
    float balance;

public:
    base() {}
    base(int a, string b, float c)
    {
        account_number = a;
        name = b;
        balance = c;
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
};
class current : virtual public base
{
protected:
    int overdue_amount;

public:
    current(int a)
    {
        overdue_amount = a;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Amount exceeds balance" << endl;
        else if (amount <= overdue_amount)
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
    savings(int a)
    {
        minimum_balance = a;
    }
    void withdraw(int amount)
    {
        if (amount > balance)
            cout << "Amount exceeds balance" << endl;
        else if (balance - amount <= minimum_balance)
        {
            cout << "Balance becomes less than minimum balance can't withdraw" << endl;
        }
        else
        {
            balance = balance - amount;
            cout << amount << " withdrawn from saving account" << endl;
        }
    }
};
class customer : public savings, public current
{
public:
    customer(int a, string d, float e, int b, int c) : base(a, d, e), current(b), savings(c)
    {
    }
};
int main()
{
    int a, b, c;
    string d;
    float e;
    cout << "Enter the account number : ";
    cin >> a;
    cout << "Enter the name : ";
    cin >> d;
    cout << "Enter the balance : ";
    cin >> e;
    cout << "Enter the overdue amount : ";
    cin >> b;
    cout << "Enter the minimum balance : ";
    cin >> c;
    customer c1(a, d, e, b, c);
    int x = 1, amount;
    cout << "0.Exit \n1.Deposit Money  \n2.Withdraw from savings \n3.Withdraw from current \n4.Display balance  \n5.Display details" << endl;
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
            c1.deposit(amount);
            break;
        case 2:
            cout << "Enter the amount to be withdrawn : ";
            cin >> amount;
            c1.savings::withdraw(amount);
            break;
        case 3:
            cout << "Enter the amount to be withdrawn : ";
            cin >> amount;
            c1.current::withdraw(amount);
            break;
        case 4:
            cout << "Balance : " << c1.get_balance() << endl;
            break;
        case 5:
            c1.display();
            break;
        default:
            cout << "Wrong choice!!Please Enter again" << endl;
            break;
        }
    }
    return 0;
}