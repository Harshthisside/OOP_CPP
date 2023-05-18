#include <iostream>

using namespace std;
struct employee
{
    int id;
    char name[20];
    int age;
    int bsal;
    float gsal;
    
    void record()
    {
        int i;
       
        cout<<"Name: ";
        cin>>name;
        cout<<"Id: ";
        cin>>id;
        cout<<"Age: ";
        cin>>age;
        cout<<"Basic Salary: ";
        cin>>bsal;
        gsal=bsal+(0.8*bsal)+(0.1*bsal);
        
    cout<<"\n";
    }

    void display()
    {
        cout<<"Name: "<<name<<"\t";
        cout<<"id: "<<id<<"\t\t";
        cout<<"Age: "<<age<<"\t\t";
        cout<<"Basic salary: "<<bsal<<"\t";
        cout<<"Gross salary: "<<gsal<<endl;
       
    }
};
int main()
{
    int n;
    cout<<"Enter the number of employees: ";
    cin>>n;
    employee *e = new employee[n];
    for(int i=0;i<n;i++)
    {
    	 cout << "Display info of employee  " << i+1 <<"\n";
        (e+i)->record();
    }

    cout<<("------- All Employees Details --------\n\n");
    
    for(int i=0;i<n;i++)
    {
        (e+i)->display();
    }

    return 0;
}