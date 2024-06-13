#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter a number";
	cin>>a;
	int b;
	cout<<"Enter your Second number";
	cin>>b;
	int lcm = 0;
	int hcf = 0;
	int x;
	for(x=1;x<=a && x<=b;x++){
		if(a%x==0 && b%x==0) {
			hcf = x;
			
		}
	}	
	cout<<"Hcf is"<<hcf<<endl;
	lcm = (a*b)/hcf;
	cout<<"Lcm is"<<lcm<<endl;
	return 0;
	
}