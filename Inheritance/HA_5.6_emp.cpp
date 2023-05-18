#include<iostream>
using namespace std;

class employee{
    protected:
    string names;
    int id,salary;
    
};

class regular: public employee{
    private:
    int DA,HRA,basic;
    public:
    regular(int d,int h,int s){
        DA=d;
        HRA=h;
        basic=s;
    }
    void display(){
        cout<<"Salary of Regular employee:"<<(DA+HRA+basic)<<endl;
    }
};

class parttime:public employee{
    private:
    int hours,pay;
    public:
    parttime(int hour,int pay){
        this->hours=hour;
        this->pay=pay;
    }
    void display(){
        cout<<"Salary of part time employee:"<<hours*pay<<endl;
    }
};

int main(){
    int d,h,s;
    cout<<"Enter DA,HRA and basicc salary:";
    cin>>d>>h>>s;
    regular r(d,h,s);
    r.display();

    int hour,pay;
    cout<<"Enter hours and pay per hour:";
    cin>>hour>>pay;
    parttime t(hour,pay);
    t.display();
}