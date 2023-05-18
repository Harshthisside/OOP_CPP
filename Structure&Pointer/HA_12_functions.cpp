#include<iostream>
#include<string>
using namespace std;

class student {
  string name;
  int roll;
  float marks[5];
  float totalMarks;
  float percentage;

 public:

  void setName(string name) {
	  this -> name = name;
	}

	void setRoll(int roll) {
		this -> roll = roll;
	}

	void setMarks(float *marks) {
		for(int i = 0 ; i < 5 ; i++) {
		  this -> marks[i] = marks[i];
		}
	}

	void setTotalMarks() {
      float total = 0;
      for(int i = 0 ; i < 5 ; i++) {
      	total += this -> marks[i];
      }
      this -> totalMarks = total;
	}

  void setPercentage() {
   	  float total = 0;
      for(int i = 0 ; i < 5 ; i++) {
      	total += this -> marks[i];
      }
      this -> percentage = total/5;
  }
  string getName() {
    return this -> name;
  }
  int getRoll() {
    return this -> roll;
  }
  float getTotalMarks() {
   	return this -> totalMarks;
  }

  float getPercentage() {
   	return this -> percentage;
  }
  void printMarks() {
    for(int i = 0 ; i < 5 ; i++) {
      cout << this -> marks[i] << "\t";
    }
  }
  void studentWithGivenRollNumber(int roll) {
   	    if(this -> roll == roll) {
   	      cout << "Details of Roll No: " << roll << " Are as follows: " << endl << endl;
   	      cout << "Name : " << this -> name << endl;
   	      cout << "Marks : ";
   	      for(int i = 0 ; i < 5 ; i++) {
      	    cout << this -> marks[i] << "\t";
          }
          cout << endl;
          cout <<"Total marks : " << this -> totalMarks << endl;
          cout << "Percentage : " << this -> percentage << "%" << endl;
          cout << endl;
   	    }
  }

  void studentInGivenRange(float lowerRange , float upperRange) {
   	    if(this -> percentage >= lowerRange && this -> percentage <= upperRange) {
          cout << "Name : " << this -> name << endl;
          cout << "Roll number : " << this -> roll << endl;
   	      cout << "Marks : ";
   	      for(int i = 0 ; i < 5 ; i++) {
      	    cout << this -> marks[i] << "\t";
          }
          cout << endl;
          cout <<"Total marks : " << this -> totalMarks << endl;
          cout <<"Percentage : " << this -> percentage << "%" << endl;
          cout << endl; 
   	    }
  }

};
void sortStudentArray(student *s,int n) {
  for(int i = 0 ; i < n ; i++) {
    student min = s[i];
    int minIndex = i;

    for(int j = i+1 ; j < n ; j++) {
      if(s[j].getTotalMarks() < min.getTotalMarks()) {
        min = s[j];
        minIndex = j;
      }
    }

    student temp = s[i];
    s[i] = s[minIndex];
    s[minIndex] = temp;
  }
}


int main() {
  int n;
  cout << "Enter total number of students : ";
  cin >> n;
  student s[n];

  for(int i = 0 ; i < n ; i++) {
   string name;
   cout << "Name " << i+1 << " : ";
   cin >> name;
   s[i].setName(name);

   int roll;
   cout << "Roll Number : " ;
   cin >> roll;
   s[i].setRoll(roll);

   float arr[5];
   cout << "Enter marks in 5 subjects : " << endl ;
   for(int i = 0 ; i < 5 ; i++) {
      cin >> arr[i];
   }

   cout<<("\n");
   s[i].setMarks(arr);
   s[i].setTotalMarks();
   s[i].setPercentage();
 }
 
 cout <<endl<<"(A)"<<endl;
 //finding total marks & percentage of all students
 for(int i = 0 ; i < n ; i++) {
   cout << "Total marks of student : " << i+1 << " : " << s[i].getTotalMarks() << endl;
   cout << "Percentage of student : " << i+1 << " : " << s[i].getPercentage() <<"%"<< endl; 
   cout << endl; 
 }

 cout << endl << "(B)" << endl;

 //display student information of a given roll number
 int num;
 cout << "Enter the student's roll number to search: ";
 cin >> num;
 for(int i = 0 ; i < n ; i++) {
  s[i].studentWithGivenRollNumber(num);
 }
 cout << endl << "(C)" << endl;


 // sorting the student array in ascending order of marks

  sortStudentArray(s,n);

  cout << endl << "(D)" << endl;

  cout <<"After sorting the updated order of student is : " << endl << endl;
  
  for(int i = 0 ; i < n ; i++) {
    cout << "Name : " << s[i].getName() << endl;
    cout << "Roll Number : " << s[i].getRoll() << endl;
   	cout << "Marks : ";
    s[i].printMarks();
    cout << endl;
    cout <<"Total Marks : " << s[i].getTotalMarks() << endl;
    cout <<"Percentage : " << s[i].getPercentage() << "%" << endl;
    cout << endl; 
  }
 
}