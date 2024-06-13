#include <iostream>
using namespace std;
int main()
{
	int a = 1;
	int term = 0;
	int c;
	for(c=1;c<=60;c++) {
		term = term*10+a;
		cout<<term<<endl;
	}
}