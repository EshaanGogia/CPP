#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int factor = 0;
	
	cout<<"Enter a number";
	cin>>a;
	
	for(b=1;b<=a;b++) {
		if(a%b==0){
			factor++;
		}
	}
	if(factor==2) {
		cout<<"Prime Number"<<endl;
	}
	else{
		cout<<"Not a prime number"<<endl;
	}
	
	return 0;
	
}