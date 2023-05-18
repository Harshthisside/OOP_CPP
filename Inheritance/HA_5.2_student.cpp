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
        cout << "Enter name , roll and age: " << endl;
        cin >> name>>roll>>age;
    }

};

class test : public student
{
    protected:
    int sub[5];
    public:
    void getmark()
    {
        cout << "Enter 5 subjects marks : " << endl;
        cin >> sub[0] >> sub[1]>> sub[2]>> sub[3]>> sub[4];
    }
    void details()
    {
        cout << "\n\nName : " << name << "\nRoll number : " << roll << "\nAge: " << age << endl;
        cout << "Marks in 5 subjects : " << sub[0] << ", " << sub[1] << ", " << sub[2] << ", " << sub[3] << ", " << sub[4] << endl;
    }

};


int main()
{
    test ob;
    ob.getdata();
    ob.getmark();
    ob.details();
}