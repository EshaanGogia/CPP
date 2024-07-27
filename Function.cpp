#include <iostream>
using namespace std;

float Addition(float a , float b , float c)
{
	return a+b+c;
}
float Subtraction(float a , float b , float c)
{
	return a-b-c;
}
float Multiplication(float a , float b , float c)
{
	return a*b*c;
}
float Division(float a , float b , float c)
{
	return a/b/c;
}

int main()
{
int num;
float result;
float a;
float b;
float c;

cout<<"Value of a ";
cin>>a;
cout<<"Value of b ";
cin>>b;
cout<<"Value of c ";
cin>>c;

cout<<"------------------------CALCULATOR--------------------------"<<endl;
cout<<"/n               1 for Division"<<endl;
cout<<"/n               2 for Multiplication"<<endl;
cout<<"/n               3 for Addition"<<endl;
cout<<"/n               4 for Subtraction"<<endl;

cout<<"Enter your num :- ";
cin>>num;

switch(num)
{
	case 1:
		cout<<"You chose Division(/)"<<endl;
		result = Division(a,b,c);
		cout<<"Division of these 3 no. is = "<<result<<endl;
		break;
		
	case 2:
		cout<<"You chose Multiplication(*)"<<endl;
		result = Multiplication(a,b,c);
		cout<<"Multiplication of these 3 no. is = "<<result<<endl;
		break;
	
	case 3:
		cout<<"You chose Addition(+)"<<endl;
		result = Addition(a,b,c);
		cout<<"Addition of these 3 no. is = "<<result<<endl;
		break;
		
	case 4:
		cout<<"You chose Subtraction(-)"<<endl;
		result = Subtraction(a,b,c);
		cout<<"Subtraction of these 3 no. is = "<<result<<endl;
		break;
	default:
		cout<<"Invalid Symbol"<<endl;
		break;		
}
}