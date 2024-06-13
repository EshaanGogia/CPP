#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	int max=0;
	
	cout<<"Enter the value of a ";
	cin>>a;
	cout<<"Enter the value of b ";
	cin>>b;
	cout<<"Enter the value of c ";
	cin>>c;
	
	if (a>b)
	{
		if(a>c)
		{
			max=a;
		 } else 
		 {
			max=c;
		}
	} else 
	{
		if(b>c)
		{
			max=b;
		}	
		else
		{
			max=c;
		}
	}
	
	cout<<"Highest value is "<<max<<endl;
	
	return 0;
	
}