#include <iostream>
using namespace std;

struct student
{
    char name[50];
    int roll;
    float marks[5];
}s;

int main() 
{
  
    cout << "Enter information of student" << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    
    cout << "Enter marks: ";
    for(int i = 0; i < 5; ++i)
    {
    cin >> s.marks[i];
	cout;
    }

    cout << "\nDisplaying Information" << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks:" << endl;
    for(int i = 0; i < 5; ++i)
    {
    cout  << s.marks[i] << endl;
    }
    return 0;
}