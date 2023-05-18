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
cout << "Enter name, roll and age :" << endl;
cin >> name >> roll >> age;
}
};
class test : public virtual student
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
cout << "\n\nName : " << name << "\nRoll number : " << roll << "\nAge : " << age << endl;
cout << "Marks in 5 subjects : " << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4<<", "<<sub5 << endl;
}
};
class sports : public virtual student
{
protected:
int msports;
public:
void getspo()
{
cout << "Enter marks in sports : ";
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
cout << "Marks in sports = " << msports << endl;
total = sub1+sub2+sub3+sub4+sub5+msports;
percent = (total*100)/600;
cout << "Total marks : " << total << " Percent : " << percent << "%" << endl;
}
};
int main()
{
result ob1;
ob1.getdata();
ob1.getmark();
ob1.getspo();
ob1.details();
ob1.display();
}