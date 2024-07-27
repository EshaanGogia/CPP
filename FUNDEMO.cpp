#include <iostream>
using namespace std;

void Rectangle(float l, float b)
{
	cout<<" Area of Rectangle is "<<l*b;
}

double Perimeter(float l, float b)
{
	return 2*(l+b);
}

void Leapyear(int year)
{
	if(year %4==0)
	{
		cout<<"Leap Year"<<endl;
	}
	else
	{
	cout<<"Not a Leap Year"<<endl;	
	}
}


int main()
{
	int a=90,b=70;
	cout<<"value of a is "<<a <<"\n"<<"value of b "<<b<<endl;
	
	Rectangle(a,b);
	
	double p=Perimeter(a,b);
	cout<<"\nPerimeter of rectangle is "<<p;
	
	
	
	
	
	return 0;
	
}