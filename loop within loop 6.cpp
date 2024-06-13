#include<iostream>
using namespace std;
#define R 5
int main()
{
	int a , b , x=65;
	for(a=0;a<=R;a++) {
		for(b=1;b>a;b++) {
			cout<<char(x+a)<<"\t";
		}
		cout<<endl;
		}	
	
	return 0;
	
}