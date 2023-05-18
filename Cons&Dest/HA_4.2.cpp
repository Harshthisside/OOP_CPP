#include <iostream>
using namespace std;

class time_format
{
private:
    int hh;
    int mm;

public:
    time_format()
    {
        hh = 0;
        mm = 0;
        cout << hh << ":" << mm << endl;
    }
    time_format(int h)
    {
        hh = h;
        mm = 0;
        cout << hh << ":" << mm << endl;
    }
    time_format(int h, int m)
    {
        hh = h;
        mm = m;
        cout << hh << ":" << mm << endl;
    }
    time_format(time_format &t)
    {
        hh = t.hh;
        mm = t.mm;
        cout << hh << ":" << mm << endl;
    }
};

int main()
{
    int h, m, n;

    cout<<"Enter your choice: \n1.To enter hours and mins.\n2.To enter only hours \n";
    cin>>n;

    if (n == 1)
    {
        cout << "Enter hours and minutes: ";
        cin >> h >> m;
        time_format t1;
        time_format t2(h, m);
        time_format t3(t2);
    }
    else if (n == 2)
    {
        cout << "Enter hours only: ";
        cin >> h;
        time_format t1;
        time_format t2(h);
        time_format t3(t2);
    }
    else
        cout<<"Invalid choice!";
        
}