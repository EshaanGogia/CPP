#include <iostream>
using namespace std;

class Calculator
{
	double a;
	double b;
	
	public: void Getab();
	double Add();
	double Mul();
	double Diff()
	{
	return a-b;	
	}
	double Div()
	{
		return a/b;
		
	}
	
};

void Calculator::Getab(){
	cout<<"Enter Any two Number :"<<endl;
	cin>>a>>b;
}
double Calculator::Add()
{
	double s = a+b;
	return s;
}
double Calculator::Mul()
{
	return a*b;
}




// Driver code
int main()
{
	Calculator eshaan;
	eshaan.Getab();
	cout<<"SUM IS "<<eshaan.Add()<<endl;
cout<<"MUL IS "<<eshaan.Mul()<<endl;

cout<<"Diff is "<<eshaan.Diff()<<endl;
cout<<"Div is "<<eshaan.Div()<<endl;
	Calculator mukesh;
	mukesh.Getab();
	double r1=mukesh.Add();
	cout<<"Sum is "<<r1<<endl;
	cout<<"Mul is "<<mukesh.Mul()<<endl;
	
	return 0;
}