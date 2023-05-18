#include<iostream>
using namespace std;

class student
{
    protected:
    char name[20];
    int roll;
    int age;
    public:
    void getdata()
    {
        cout << "Enter name, roll and age : " << endl;
        cin >>name>> roll >> age;
    }

};

class test : public student
{
    protected:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;


    public:
    void getmark()
    {
        cout << "Enter 5 subjects marks : " << endl;
        cin >> sub1 >> sub2>> sub3 >> sub4 >> sub5;
    }
    void details()
    {
        cout << "\n\nName : " << name << "\nRoll number : " << roll << "\nAge: " << age << endl;
        cout << "Marks in 5 subjects : " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }

};

class sports
{
    protected:
    int msports;
    public:
        void getsport()
        {
            cout << "Enter marks in sports : " <<endl;
            cin >> msports;

        }
};

class result : public sports, public test
{
    int total;
    float percent;
    public:
    void display()
    {
        cout << "Marks in sports : " << msports << endl;
        total = sub1+sub2+sub3+sub4+sub5+msports;
        percent = (total*100)/600;
        cout << "Total marks : " << total << "\nPercent : " << percent << endl;
    }
};

int main()
{
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getsport();
   
    ob1.details();
    ob1.display();
}