#include<iostream>
using namespace std;
class shape
{
    protected:
        float areac;
        float areat;
        float arear;
};
class circle : public shape
{
    public:
        void carea()
        {
            int a=10;
            areac = 3.14*a*a;
            cout << "Circle : " << areac << endl;
        }
};
class triangle : public shape
{
public:
        void tarea()
        {
            int a=10;
            int b=20;
            areat = 0.5*a*b;
            cout << "Triangle : " << areat << endl;
        }
};
class rectangle : public shape
{
    public:
        void rarea()
        {
            int a=10;
            int b=20;
            arear = a*b;
            cout << "Rectangle : " << arear << endl;
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