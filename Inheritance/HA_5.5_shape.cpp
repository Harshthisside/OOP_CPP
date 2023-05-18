#include<iostream>
using namespace std;
class shape
{
    protected:
        float areac;
        float areat;
        float arear;
};
class circle:public shape
{
    public:
        void carea()
        {
        int a;
        cout<<"Enter the radius of the circle: ";
            cin>>a;
            areac=3.14*a*a;
            cout<<"Area of the Circle : "<<areac<<endl;
        }
};
class triangle:public shape
{
public:
        void tarea()
        {
            int a,b;
            cout<<"\nEnter base and height of the traingle:\n";
            cin>>a>>b;
            areat=0.5*a*b;
            cout<<"Area of the Triangle : " <<areat<<endl;
        }
};
class rectangle:public shape
{
    public:
        void rarea()
        {
            int a,b;
            cout<<"\nEnter length and breadth of the rectangle:\n";
            cin>>a>>b;
            arear=a*b;
            cout<<"Area of the Rectangle : "<<arear<<endl;
        }
};
int main()
{
    circle obc;
    obc.carea();
    triangle obt;
    obt.tarea();
    rectangle obr;
    obr.rarea();
    return 0;
}