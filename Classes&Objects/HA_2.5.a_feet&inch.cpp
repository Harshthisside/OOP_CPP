#include<iostream>
using namespace std;
class dist
{
   public:
   int feet,inch,C1,C2,C3;
   void input()
   {
      cout<<"Enter feet and inches:"<<"\n";
      cin>>feet>>inch;
   }
   void show()
   {
      cout<<"The distance is: " ;
      cout<<feet<<"feet\t" <<inch<<"inch\n";
   }
   void add(dist C1,dist C2)
   {
      feet=C1.feet+C2.feet;
      inch=C1.inch+C2.inch;
      if(inch>=12)
      {
         feet=feet+1;
         inch=inch-12;
      }
   }
};
int main()
{
dist C1,C2,C3;
   C1.input();
   C2.input();
   C3.add(C1,C2);
   C3.show();
}