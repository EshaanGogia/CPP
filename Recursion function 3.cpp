#include <iostream>
using namespace std;

long SUM(long n)
{
	long s= 0;
	if (n==0){
		return 0;
	}else {
		s=n+SUM(n-1);
		return s;
	}
}
int main()
{
	int res;
	int a = 5;
	
	res =SUM(a);
	cout<<res<<endl;
	return 0;
}