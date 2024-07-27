#include <iostream>
using namespace std;

class Employee
{
	int Emp_Id;
	string Emp_N;
	string Job;
	double sal;
	
	
	public: void UserInput();
	string Display();
	double Cal_Allow();
		
	};
	
	void Employee::UserInput()
	{
		cout<<"Enter Employee ID :- ";
		cin>>Emp_Id;
		cout<<"Enter Employee Name :- ";
		cin>>Emp_N;
		cout<<"Enter your job :- ";
		cin>>Job;
		cout<<"Enter your salary :- ";
		cin>>sal;
	}
	string Employee::Display()
	{
		cout<<Emp_Id<<endl;
		cout<<Emp_N<<endl;
		cout<<Job<<endl;
		cout<<sal<<endl;
		
	}
	double Employee::Cal_Allow()
	{
		cout<<"To calculate your Basic Earning please Enter your Salary Again :- ";
		cin>>sal;
		
		double hra = 0.20*sal;
		double da = 0.60*sal;
		double ta = 0.10*sal;
		double cca = 0.10*sal;
		double epf = 0.12*sal;
		double gross = hra+da+ta+cca;
		double NetSales = sal+gross-epf;
		
		cout<<"HRA is ="<<hra<<endl;
		cout<<"DA is ="<<da<<endl;
		cout<<"TA is ="<<ta<<endl;
		cout<<"CCA is ="<<cca<<endl;
		cout<<"EPF is ="<<epf<<endl;
		cout<<"Gross is ="<<gross<<endl;
		cout<<"NetSales is ="<<NetSales<<endl;
	}
	
	int main()
	{
		Employee M;
		M.UserInput();
		M.Display();
		M.Cal_Allow();
	}
