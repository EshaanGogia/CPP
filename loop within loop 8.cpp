#include<iostream>
using namespace std;
#define R 11
int main()
{
	int a , b;
	for(a=1;a<=R;a++) {
		for(b=1;b<=R;b++) {
			if (a==1 || a==11 || b==1 || b==11)
			{
				cout<<"*"<<" ";
			}
			else if(a==6 && b==6){
				cout<<"E"<<" ";
			
			}else {
				cout<<" "<<" ";
			}
		}
		cout<<endl;
		}	
	
	return 0;
	
}