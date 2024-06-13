#include<iostream>
using namespace std;
#define R 5
int main()
{
	int a , b , x=65;
	for(a=1;a<=R;a++) {
		for(b=0;b<a;b++) {
			cout<<char(x+b)<<"\t";
		}
		cout<<endl;
		}	
	
	return 0;
	
}