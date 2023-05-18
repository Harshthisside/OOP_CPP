#include  <iostream>
using namespace std;
 
class Distance
{
    private:
        int feet;
        int inch;
    public:
             Distance (); //Constructor
        void getDist  ();
        void showDist ();
        Distance addDist( Distance C2 );
       
};
 
Distance:: Distance ()
{
    feet = 0; inch = 0;
}
 
void Distance:: getDist()
{
    cout << "Enter Value of feets : ";
	 cin >> feet;
    cout << "Enter value of inches : ";
	 cin >> inch;
     
    inch = (inch >= 12) ? 12 : inch;
}
 
void Distance:: showDist()
{
    cout << endl << "\tFeets : " << feet;
    cout << endl << "\tInches: " << inch;
}
 
 
Distance Distance:: addDist( Distance C2 )
{
    Distance temp;
 
    temp.feet = feet + C2.feet;
    temp.inch = inch + C2.inch;
 
    if( temp.inch >= 12)
    {
        temp.feet++;
        temp.inch -= 12;        
    }
    return temp;    
}
 

int main()
{
    Distance C1,C2,C3;
    
 
 
    cout << "Enter Distance 1 : " << endl;
    C1.getDist();
     
    cout << "Enter Distance 2 : " << endl;
    C2.getDist();
 
    C3 = C1.addDist(C2);
   
 
    cout << endl << "Distance 1 : " ;
    C1.showDist();
 
    cout << endl << "Distance 2 : " ;
    C2.showDist();
 
    cout << endl << "Resultant distance after addition : " ;
    C3.showDist();
 
   
    cout << endl;         
    return 0;
}