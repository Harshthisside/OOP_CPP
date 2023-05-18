#include<iostream>
using namespace std;
class Complex{
public:
    int realNumber;
    int imagNumber;

     void input()
    {
        cout<<"\nEnter the real part: \n";
		cin>>realNumber;
	    cout<<"Enter the imaginary part: \n";	
        cin>>imagNumber;
    }


    void display()
    {
        cout<<realNumber<<"+"<<imagNumber<<"i"<<endl;
    }


    
  };
int main()
    {
        Complex arr[20];
        cout<<"Enter 10 complex numbers\n";
		for(int i=0; i<10; i++){
			cout<<"\nComplex number "<<(i+1)<<": ";
			arr[i].input();
        
		}
		cout<<"The 10 entered complex numbers are\n";
		for(int i=0; i<10; i++){
			arr[i].display();
		}
    return 0;
    }