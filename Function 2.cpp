#include <iostream>
using namespace std;


float Square(float a)
{
	return a*a;
}
float Rectangle(float l , float b)
{
	return l*b;
}
float Triangle(float b , float h)
{
	return 0.5*(b*h);
}
float Circle (float r)
{
	return 3.14*(r*r);
}

int main()
{
	int num;
	int a;
	int b;
	int result;
	
	cout<<"------------------------SHAPES--------------------"<<endl;
	cout<<"                1 for Square"<<"\n"<<endl;
	cout<<"                2 for Rectangle"<<"\n"<<endl;
	cout<<"                3 for Triangle"<<"\n"<<endl;
	cout<<"                4 for Circle"<<"\n"<<endl;
	
	cout<<"Enter your num :- ";
	cin>>num;
	
	switch(num)
	{
		case 1:
			cout<<"You choose square"<<endl;
			cout<<"Enter Side of Square :";
			cin>>a;
			result = Square(a);
			cout<<"Area of square is = "<<result<<endl;
			break;
			
		case 2:
			cout<<"You chose Rectangle"<<endl;
			cout<<"Enter length of rectangle";
			cin>>a;
			cout<<"Enter breadth of rectangle";
			cin>>b;
			result = Rectangle(a,b);
			cout<<"Area of Rectangle is = "<<result<<endl;
			break;
			
		case 3:
			cout<<"You chose Triangle"<<endl;
			cout<<"Enter breadth of triangle";
			cin>>a;
			cout<<"Enter height of triangle";
			cin>>b;
			result = Triangle(a,b);
			cout<<"Area of Triangle is = "<<result<<endl;
			break;
			
		case 4:
			cout<<"You chose Circle"<<endl;
			cout<<"Enter radius of Circle";
			cin>>a;
			result = Circle(a);
			cout<<"Area of Circle is = "<<result<<endl;
			break;
			
		default:
			cout<<"Invalid"<<endl;
			break;
	}
}