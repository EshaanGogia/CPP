#include<iostream>
using namespace std;
#define R 10
int main()
{
	int a , b;
	for(a=1;a<=R;a++) {
		for(b=1;b<=a;b++) {
			cout<<"*"<<"\t";
		}
		cout<<endl;
		}	
	
	return 0;
	
}