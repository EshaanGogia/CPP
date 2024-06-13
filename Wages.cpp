#include <iostream>
using namespace std;
int main()
{
	int hours;
	int wages;
	
	cout<<"Enter how much hours did the worker worked:- ";
	cin>>hours;
	
	if (hours > 0 && hours <= 8) {
		wages=370;
	}
	else if (hours > 8 && hours <= 12) {
		wages=370+(hours-8)*75;
	}
	else if (hours > 12 && hours <= 16) {
		wages=370+(hours-12)*75;
	}
	else if (hours > 16 && hours <= 20) {
		wages=370+(hours-16)*75;
	}
	else if (hours > 20 && hours <= 24) {
		wages=370+(hours-20)*75;
	}
	else{
		cout<<"Invalid hours "<<endl;
	}
	
cout<<"Hours"<<hours<<endl;
cout<<"Wages is Rs."<<wages<<endl;
	
}