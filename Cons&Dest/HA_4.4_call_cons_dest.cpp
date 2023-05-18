#include<iostream>
#include<string.h>
using namespace std;

class calls
{
private:
    char str[100];
public:
    calls()
    {
        strcpy(str,"Default constructor");
        cout<<str<<" created."<<endl;
    };
    calls(char para)
    {
    //	cout<<para;
        strcpy(str,"Parameterized constructor");
        cout<<str<<" created."<<endl;
    }
    calls(calls &copy)
    {
        strcpy(str,"Copy constructor");
        cout<<str<<" created."<<endl<<endl;
    }
    ~calls()
    {
        cout<<str<<" destroyed."<<endl;
    }
};


int main()
{
    char para;
    cout<<"Enter a parameter to be passed: ";
    cin>>para;
    calls c1;
    calls c2(para);
    calls c3(c2);
}

