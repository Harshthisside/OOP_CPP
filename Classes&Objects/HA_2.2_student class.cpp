#include<iostream>
using namespace std;
class student
{
        private:
                
                        char name[20];
                        int roll, t_marks;
        public:
                void input();
                void display();
                        
                
};
void student::input()
{
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Roll No.:";
        cin>>roll;
        cout<<"Enter total marks:";
        cin>>t_marks;
        
}
void student::display()
{
        cout<<"\nName:"<<name;
        cout<<"\nRoll No.:"<<roll;
        cout<<"\nTotal marks:"<<t_marks;
        
}
int main()
{
        student s;
        s.input();
        s.display();
}