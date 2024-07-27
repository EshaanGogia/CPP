#include <iostream>
using namespace std;

long Factorial(long n)
{
	long f = 1;
	if (n==0 || n==1){
		return 1;
	}else {
		f=n*Factorial(n-1);
		return f;
	}
}
int main()
{
	int res;
	int a = 5;
	cout<<res<<endl;
	res = Factorial(a);
	return 0;
}