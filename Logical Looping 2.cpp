#include <iostream>
using namespace std;
int main()
{
int odd=0;
int even=0;
int x;
int n;
	for(x=1;x<=10;x++) {
		cout<<"Enter a number";
		cin>>n;
	if(n%2==0){
		even++;
	}
	else{
		odd++;
	}
}
cout<<"No of even numbers "<<even<<endl;
cout<<"No of odd numbers"<<odd<<endl;
		
}