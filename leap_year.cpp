// Leap Year

#include<iostream>
using namespace std;
int main(){
	int year;
	cout<<"Please enter Year :";
	cin>>year;
	if (year%4==0 && year%100!=0 || year%400==0){
		cout << "Year "<<year <<" is a Leap Year.";
	}else 
	cout<< "Year"<<year<<" is not a Leap Year.";
	return 0;
}
