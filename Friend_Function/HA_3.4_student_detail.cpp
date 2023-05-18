#include<iostream>
using namespace std;

class student
{
private:
    int n;
    char name[200][100];
    int roll[200];
    float total_marks[300];
    float average;
public:
    void setData()
    {
        cout<<"Enter the number of students: ";
        cin>>n;

        for (int i = 0; i < n; i++)
        {
            cout<<"For student "<<i+1<<": "<<endl;
            cout<<"Enter name: ";
            cin>>name[i];

            cout<<"Enter roll number: ";
            cin>>roll[i];

            cout<<"Enter total marks: ";
            cin>>total_marks[i];
        }
    }

    void find_avg()
    {
        float sum=0;
        for (int i = 0; i < n; i++)
        {
            sum+=total_marks[i];
        }
        float avg=sum/(float)(n);
        average= avg;
    }

    friend void display_avg(student s)
    {
        cout<<"The average marks of all students is "<<s.average;
    }


};


int main()
{
    student s1;
    s1.setData();
    s1.find_avg();
    display_avg(s1);
}