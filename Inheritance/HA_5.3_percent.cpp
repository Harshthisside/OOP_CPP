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
        cout << "Enter name , roll and age:" << endl;
        cin >> name >> roll >>age;
    }

};


class test : public student
{
    protected:
    int sub1, sub2, sub3, sub4, sub5;
    
    public:
    void getmark()
    {
        cout << "Enter 5 subjects marks : " << endl;
        cin >> sub1 >> sub2>> sub3 >> sub4 >> sub5;
    }
    void details()
    {
        cout << "\n\nName : " << name << "\nRoll number : " << roll << "\nAge :" << age << endl;
        cout << "Marks in 5 subjects : " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }

};

class result : public test
{

    int total;
    float percent;
    public:
        void calc()
        {
            total = sub1+sub2+sub3+sub4+sub5;
            percent = (total *100)/500;

        }
        void display()
        {
            cout << "Total Marks = " << total << "\nPercentage = " << percent << "%"<< endl;
        }


};



int main()
{
    result ob1;
    ob1.calc();
    ob1.getdata();
    ob1.getmark();
    ob1.details();
    ob1.calc();
    ob1.display();

}