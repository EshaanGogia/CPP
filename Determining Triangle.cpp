#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	
	cout<<"Enter the value of a: ";
	cin>>a;
	
	cout<<"Enter the value of b: ";
	cin>>b;
	
	cout<<"Enter the value of c: ";
	cin>>c;
	
	if(a==b && b==c) {
		cout<<"Its an equilateral triangle "<<endl;
	}else if (a == b || a == c || b == c) {
		cout<<"Its an isoceles triangle"<<endl;
	}else{
		cout<<"Its an scalene triangle "<<endl;
		
	}
	return 0;
	
	}
