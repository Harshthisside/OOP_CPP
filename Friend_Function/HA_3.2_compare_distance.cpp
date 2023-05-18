#include <iostream>
using namespace std;




class FeetInches{
private:
	int feet;
	int inches;
public:
	FeetInches(int feet,int inches){
		this->feet=feet;
		this->inches=inches;
	}


	int getFeet(){
		return this->feet;
	}
	int getInches(){
		return this->inches;
	}


	void setFeet(int feet){
		this->feet=feet;
	}
	void setInches(int inches){
		this->inches=inches;
	}
};


class MeterCentimeter{
private:
	int meter;
	int centimeter;
public:
	MeterCentimeter(int meter,int centimeter){
		this->meter=meter;
		this->centimeter=centimeter;
	}


	int getMeter(){
		return this->meter;
	}
	int getCentimeter(){
		return this->centimeter;
	}


	void setMeter(int meter){
		this->meter=meter;
	}
	void setCentimeter(int centimeter){
		this->centimeter=centimeter;
	}
	int compare(FeetInches feetInches){
		float centimetersMeterCentimeter=this->meter*100+this->centimeter;
		float centimetersFeetInches=feetInches.getFeet()*30.48 + feetInches.getInches()* 2.54;
		if(centimetersMeterCentimeter>centimetersFeetInches){
			return 1;
		}
		if(centimetersMeterCentimeter<centimetersFeetInches){
			return -1;
		}
		return 0;
	}
};
 


int main(){


	int feet;
	int inches;
	int meter;
	int centimeter;


	cout<<"Enter feet: ";
	cin>>feet;
	cout<<"Enter inches: ";
	cin>>inches;
	cout<<"\nEnter meter: ";
	cin>>meter;
	cout<<"Enter centimeter: ";
	cin>>centimeter;


	FeetInches feetInches(feet,inches);
	MeterCentimeter meterCentimeter(meter,centimeter);


	if(meterCentimeter.compare(feetInches)==1){
		cout<<"\nMeter Centimeter is larger than Feet Inches\n";
	}
	if(meterCentimeter.compare(feetInches)==-1){
		cout<<"\nFeet Inches is larger than Meter Centimeter\n";
	}
	if(meterCentimeter.compare(feetInches)==-1){
		cout<<"\nFeet Inches is equal to Meter Centimeter\n";
	}


	system("pause");
	return 0;
}