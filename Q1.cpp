#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c;
	float d,root1,root2,x;
	cout<<"Enter value of a , b, c for a qudratic equations:"<<endl;
	cin>>a>>b>>c;
	d=b*b-4*a*c;
	if(a==0)
	{
		x=-c/b;
		cout<<"Equation Has only one root"<<endl;
		cout<<"x="<<x;
		
	}
	else if(a==0 && b==0)
	{
		cout<<"Equation has no solution"<<endl;
		
	}
	else if(d<0)
	{
		cout<<"Equation has no Real Root"<<endl;	
	}
	else
	{
			cout<<"Equation has two real solution"<<endl;
			
			root1=(-b+sqrt(d))/2*a;
			root2=(-b-sqrt(d))/2*a;
			cout<<"Root1 "<<root1;
			cout<<"Root2 "<<root2;
}

return 0;
}