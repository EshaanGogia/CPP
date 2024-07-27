#include <iostream>
using namespace std;

double Cube(double a)
{
	return a*a*a;
}
double Cuboid(double l , double b , double h)
{
	return l*b*h;
}
double Cone(double r , double h)
{
	return 0.33*3.14*(r*r*h);
}
double Sphere(double r)
{
	return 1.33*3.14*(r*r*r);
}

int main()
{
	int num;
	int a;
	int b;
	int c;
	int result;
	
	cout<<"------------------------SHAPES--------------------"<<endl;
	cout<<"                1 for Cube"<<"\n"<<endl;
	cout<<"                2 for Cuboid"<<"\n"<<endl;
	cout<<"                3 for Cone"<<"\n"<<endl;
	cout<<"                4 for Sphere"<<"\n"<<endl;
	
	cout<<"Enter your num :- ";
	cin>>num;
	
	if (num==1 || num==4)
	{
		cout<<"value of a ";
		cin>>a;
	}
	if (num==3)
	{
		cout<<"Value of a ";
		cin>>a;
		cout<<"Value of b ";
		cin>>b;
	}
	if (num==2)
	{
		cout<<"Value of a ";
		cin>>a;
		cout<<"Value of b ";
		cin>>b;
		cout<<"Value of c ";
		cin>>c;
	}
	switch(num)
	{
		case 1:
			cout<<"You choose cube"<<endl;
			result = Cube(a);
			cout<<"Area of Cube is = "<<result<<endl;
			break;
			
		case 2:
			cout<<"You choose Cuboid"<<endl;
			result = Cuboid(a,b,c);
			cout<<"Area of Cubboid is = "<<result<<endl;
			break;
			
		case 3:
			cout<<"You choose Cone"<<endl;
			result = Cone(a,b);
			cout<<"Area of Cone is = "<<result<<endl;
			break;
			
		case 4:
			cout<<"You choose Sphere"<<endl;
			result = Sphere(a);
			cout<<"Area of Sphere is = "<<result<<endl;
			break;
			
		default:
			cout<<"Invalid"<<endl;
			break;
	}
}