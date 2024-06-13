#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Value of n:- ";
	cin>>n;
	int f = 1;
	for(int i = n; i>=1;i--) {
		f=f*i;
	}
	cout<<"Factorial of "<<n<<"is "<<f<<endl;
	return 0;
	
}