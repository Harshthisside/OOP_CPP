#include<iostream>
using namespace std;
class student
{
        private:
                
                        char name[20];
                        int roll, marks[5];
        public:
                void input();
               int total_marks();      
               float percentage();
                void display();
};
void student::input()
{
   
        cout<<"Enter Name:";
        cin>>name;
        cout<<"Enter Roll No.:";
        cin>>roll;
        for (int i=0;i<5;i++)
        {
        cout<<"Marks in subject " << i+1 << ": ";
        cin>>marks[i];
       
        }
    
}
int student::total_marks()
{
	int sum =0;
	for (int i=0;i<5;i++)
    sum = sum + marks[i];
    return sum;
}
float student::percentage()
{
    int avg = total_marks();
    float percentage = (avg*100)/500;
    return percentage;
}
void student::display()
{
        cout << "\nDisplaying the details:";
        cout<<"\nName:"<<name;
        cout<<"\nRoll No.:"<<roll;
        for (int i=0;i<5;i++)
        {
        cout<<"\nMarks in subject " << i+1 << ": " << marks[i];
        
        }
        cout << "\nTotal marks:" << total_marks();
        cout << "\nPercentage: " << percentage() <<"%";
}
int main()
{
        student s;
        s.input();
        s.display();
        s.total_marks();
        s.percentage();
}