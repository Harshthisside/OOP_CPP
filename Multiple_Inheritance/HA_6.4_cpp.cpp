
#include <iostream>
using namespace std;
class student
{
protected:
    string name;
    int roll;
    int age;

public:
    student(){}
    student(string a, int b, int c)
    {

        name = a;
        roll = b;
        age = c;
    }
};
class Test : private student
{
protected:
    int marks[5];

public:
    Test(string a, int b, int c, int d[]) : student(a, b, c)
    {

        for (int i = 0; i < 5; i++)
            marks[i] = d[i];
    }
    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Age : " << age << endl;
        cout << "Marks : ";
        for (int i = 0; i < 5; i++)
            cout << marks[i] << " ";
        cout << endl;
    }
};
class sports
{
protected:
    int marks_sports;

public:
    sports(int a)
    {
        marks_sports = a;
    }
    void display()
    {
        cout << "Marks in sports activity : " << marks_sports << endl;
    }
};
class Result : private Test, private sports
{
    int total_marks;
    float percentage;

public:
    Result(string a, int b, int c, int d[], int e) : Test(a, b, c, d), sports(e)
    {
        totalMarks();
        Percentage();
    }
    void totalMarks()
    {
        total_marks = marks[0] + marks[1] + marks[2] + marks[3] + marks[4] + marks_sports;
    }
    void Percentage()
    {
        percentage = total_marks / 6.0;
    }
    void display()
    {
        cout << "\n**Details of students**\n\n";
        Test::display();
        sports::display();
        cout << "Total Marks : " << total_marks << endl;
        cout << "Percentage : " << percentage << endl;
    }
};
int main()
{
    string a;
    int b, c, d[5], e;
    cout << "Enter the Name, Roll and age : ";
    cin >> a >> b >> c;
    cout << "Enter the marks in 5 subjects : ";
    for (int i = 0; i < 5; i++)
        cin >> d[i];
    cout << "Enter the marks in sports activity : ";
    cin >> e;
    Result s(a, b, c, d, e);
    s.display();
    return 0;
}