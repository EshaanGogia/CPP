#include <iostream>
using namespace std;
int main()
{
	int ne=0;
	int po=0;
	int ze=0;
	int x;
	int n;
	for(x=1;x<=10;x++) {
		cout<<"Enter a number";
		cin>>n;
	
	if(n<0){
		ne++;
	}
	else if (n>0){
		po++;
	}
	else {
		ze++;
	}
	
}
cout<<"No of Po "<<po<<endl;
cout<<"No of Ne "<<ne<<endl;
cout<<"No of Ze "<<ze<<endl;

}