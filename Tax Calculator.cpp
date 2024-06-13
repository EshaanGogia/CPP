#include<iostream>
using namespace std;
int main()
{
	int a;
	float tax;
	
	cout<<"Enter your amount: ";
	cin>>a;
	
	if(a > 0 && a < 10000) {
		tax = a - 0.05;
	}
	else if (a > 10000 && a < 20000) {
		tax = a - 0.1;
	}
	else if (a > 20000 && a < 30000) {
		tax = a - 0.15;
	}
	else {
		tax = a - 0.2;
	}
	 cout<<"Your tax is "<<tax<<endl;
	 
	return 0;
	
}