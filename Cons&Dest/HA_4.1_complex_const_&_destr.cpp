#include<iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;
public:
    complex() //Default Constructor
    {
        real=2;
        img=4;
        cout<<"Default Constructor: "<<real<<"+"<<img<<"i"<<endl;
    };
    complex(int r,int i) //Parameterised Constructor
    {
        real=r;
        img=i;
        cout<<"Parameterised Constructor: "<<real<<"+"<<img<<"i"<<endl;
    }
    complex(complex &c) //Copy constructor
    {
        real=c.real;
        img=c.img;
        cout<<"Copy Constructor: "<<real<<"+"<<img<<"i"<<endl;
    }
    ~complex()
    {
        cout<<real<<" and "<<img<<" are destroyed"<<endl;
    };
};

int main()
{
    int r,i;
    cout<<"Enter the real and imaginary part of the complex number: "<<endl;
    cin>>r>>i;
    complex c1;
    complex c2(r,i);
    complex c3(c2);
}