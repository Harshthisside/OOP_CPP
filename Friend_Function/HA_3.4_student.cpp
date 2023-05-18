#include <iostream>
using namespace std;
class students
{
string name;
int roll;
int tmarks;
static int avgMarks;
public:
void getdata()
{
cout<<"Enter Name: ";
cin>>name;
cout<<"Enter Roll: ";
cin>>roll;
cout<<"Enter Total Marks: ";
cin>>tmarks;
}
static void display(students obj[],int n)
{
for(int i=0; i<n; i++)
{
avgMarks=avgMarks+obj[i].tmarks;
}
cout<<"\nAverage marks of the students : "<<(avgMarks/n);
}
};
int students::avgMarks=0;
int main()
{
int n;
cout<<"Enter number of students: ";
cin>>n;
students ob[n];
for(int i=0; i<n; i++)
{
ob[i].getdata();
}
cout << "\n\n";
students::display(ob,n);
return 0;
}
