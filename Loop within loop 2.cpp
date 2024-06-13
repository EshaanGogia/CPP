#include<iostream>
using namespace std;
#define R 10
#define C 10
int main()
{
		int a , b;
	for(a=1;a<=R;a++) {
		for(b=1;b<=C;b++){
			cout<<a*b<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
	
}