#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class bookstore{
string name;
string author;
float price;
public:
void getbooks(){
cout<<"Enter the book name: "<<endl;
cin>>name;
cout<<"Enter the author: "<<endl;
cin>>author;
cout<<"Enter the price: "<<endl;
cin>>price;
}
friend void check(bookstore b[], int n);
};
void check(bookstore b[], int n){
int i;
int low, up;
cout<<"Enter the lower index of the price range: "<<endl;
cin>>low;
cout<<"Enter the upper index of the price range: "<<endl;
cin>>up;
cout<<"\nThe books in the range "<<low<<" to "<<up<<" are: "<<endl;
for( i = 0; i < n; i++){
if(b[i].price >= low && b[i].price <= up){
cout<<"\nName of the book"<<right<<setw(2)<<" : "<<right<<setw(4)<<b[i].name<<endl;
cout<<"Author of the book"<<right<<setw(2)<<" : "<<right<<setw(4)<<b[i].author<<endl;
cout<<"Price of the book"<<right<<setw(2)<<" : "<<right<<setw(4)<<b[i].price<<endl;
}

else{

cout<<"No books are in this price range."<<endl;
}
}
}
int main(){
int n, i;
cout<<"Enter the number of books: "<<endl;
cin>>n;
bookstore b[n];
for(i = 0; i < n; i++){
b[i].getbooks();
}
check(b, n);
return 0;
}