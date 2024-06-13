#include <iostream>
using namespace std;
int main()
{
	cout<<"-----------------------MENU------------------------------"<<endl;
	cout<<"           1. Burger      		   "<<endl;
	cout<<"           2. Pizza       		   "<<endl;
	cout<<"           3. Pasta      		   "<<endl;
	cout<<"           4. Chaap                 "<<endl;
	cout<<"           5. Tandoori Paneer       "<<endl;
	
	int op;
	int qty;
	int bill;
	
	cout<<"Enter option =";
	cin>>op;
	
	switch(op)
	{
		case 1:
			cout<<"Burger"<<endl;
			cout<<"Enter Quantity"<<endl;
			cin>>qty;
			bill=qty*79;
			cout<<"Total Bill"<<bill<<endl;
			break;
			
		case 2:
			cout<<"Pizza"<<endl;
			cout<<"Enter Quantity"<<endl;
			cin>>qty;
			bill = qty*99;
			cout<<"Total Bill"<<bill<<endl;
			break;
			
		case 3:
			cout<<"Pasta"<<endl;
			cout<<"Enter Quantity"<<endl;
			cin>>qty;
			bill = qty*119;
			cout<<"Total Bill"<<bill<<endl;
			break;
			
		case 4:
			cout<<"Chaap"<<endl;
			cout<<"Enter Quantity"<<endl;
			cin>>qty;
			bill = qty*139;
			cout<<"Total Bill"<<bill<<endl;
			break;
			
		case 5:
			cout<<"Tandoori Paneer"<<endl;
			cout<<"Enter Quantity"<<endl;
			cin>>qty;
			bill = qty*229;
			cout<<"Total Bill"<<bill<<endl;
			break;
		case 0:
			exit(0);
			break;
			default:
				cout<<"Invalid Input"<<endl;
				break;
				
	}
	
	return 0;
	
}