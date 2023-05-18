#include<iostream>
using namespace std;
class account{
    protected:
    int account_no;
    char customer_name[50];
    int balance;
    public:
    void get(){
        cout<<"Enter account no: ";
        cin>>account_no;
        cout<<"Enter customer name: ";
        cin>>customer_name;
        cout<<"Enter balance: ";
        cin>>balance;
        }

};
class savings:public account{
    int inpu;
    int outpu;
    public:
    void deposit_money(){
        get();
        cout<<"Enter the money to be deposited: ";
        cin>>inpu;
        balance=balance+inpu;
    }
    void withdraw(){
        cout<<"Enter the money to be withdrawn: ";
        cin>>outpu;
        if(balance-outpu<=1000){
            cout<<"Money can't be withdrawn";
        }
        else{
            balance=balance-outpu;
        }
    }
    void display(){
        cout<<"Available Balance is: "<<balance<<endl;
    }
};
class current:public account{
    int inpu;
    int outpu;
    int overdue=0;
    public:
    void deposit_money(){
        get();
        cout<<"Enter the money to be deposited: ";
        cin>>inpu;
        balance=balance+inpu;
    }
    void withdraw(){
        cout<<"Enter the money to be withdrawn: ";
        cin>>outpu;
        if(balance-outpu<0){
            overdue=overdue+(balance-outpu);
        }
        else{
            balance=balance-outpu;
        }
    }
    void display(){
        cout<<"Available Balance is: "<<balance<<endl;
        cout<<"Overdue Balance is: "<<overdue<<endl;

    }

};
int main(){
    savings s;
    current c;
    cout<<"For Savings: "<<endl;
    s.deposit_money();
    s.withdraw();
    s.display();
    cout<<"For Current: "<<endl;
    c.deposit_money();
    c.withdraw();
    c.display();
}