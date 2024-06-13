#include <iostream>
using namespace std;
int main()
{
	int a = 0;
	int b = 1;
	int c = 0;
	int x;
	for(x=1;x<=10;x++) {
		a=b;
		b=c;
		c=a+b;
		cout<<c<<endl;
		
	}
	
	return 0;
	
}