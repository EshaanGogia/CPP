#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter your marks: ";
	cin>>a;
	
	if (a>90)
	{
		cout<<"Grade A+"<<endl;
	}
	else if (a>80 && a<=90)
	{
		cout<<"Grade A"<<endl;
	}
	else if (a>70 && a<=80)
	{
		cout<<"Grade B+"<<endl;
	}
	else if (a>60 && a<=70)
	{
		cout<<"Grade B"<<endl;
	}
	else if (a>50 && a<=60)
	{
		cout<<"Grade C"<<endl;
	}
	else if (a>40 && a<=50)
	{
		cout<<"Grade D"<<endl;
	}
	else if (a<40)
	{
		cout<<"Grade F"<<endl;
	}
	
	return 0;
	
}