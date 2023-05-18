#include<iostream>
using namespace std;

class Data{
	private:
		int x;
		static int funInput ;
		static int funOutput ;
	public:
		void input(); 
		void output();
		void display();//Displaying the number of times the two above functions has been called
		
	
	
};
int Data::funInput=0;
int Data::funOutput = 0;
	void Data::input(){
			
			cout<<"Enter the value of x\n";
			cin>>x;
			funInput++;
		}
		
	void Data::output(){
			
			cout<<"The value of x is "<<x<<endl;
			funOutput++;
		}
		//function display the number of times a function has been called
			void Data::display(){
			cout<<"The input function has been called  "<<funInput<<" times\n";
			cout<<"The output function has been called  "<<funOutput<<" times\n";
		}
int main(){
	Data d;
	d.input(); //Calling the function the first time
	d.output();
	d.input();
	d.output();
	d.display();

}