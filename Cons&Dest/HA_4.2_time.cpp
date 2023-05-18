#include<iostream>
using namespace std;

class time_format
{
private:
    int hh;
    int mm;
public:
    time_format()//default constructor
    {
        hh=0;
        mm=0;
        cout<<hh<<":"<<mm<<endl;
    }
    time_format(int h,int m=0)//parameter
    {
        hh=h;
        mm=m;
        cout<<hh<<":"<<mm<<endl;
    }
    
    time_format(time_format &t)//copy
    {
        hh=t.hh;
        mm=t.mm;
        cout<<hh<<":"<<mm<<endl;
    }
    ~time_format()
    {
        cout<<"Destroyed"<<endl;
    };
};


int main()
{
    int h,m;
    cout<<"Enter hours and minutes: ";
    cin>>h>>m;
    
    time_format t1;
    time_format t2(h,m);
    time_format t3(t2);
}


