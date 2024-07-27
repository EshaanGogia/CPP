#include <iostream>
using namespace std;

class Matrix
{
	int num[5][5],tnum[5][5];
	int i,j;
	public: void Input();
			void Display();
			void Transpose();
			void Diagonal();
			void SumDiagonal();
			void Rowise();
			void Colwise();
			
};
void Matrix::Input()
{
	cout<<"Enter data Rowise"<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin>>num[i][j];
		}
		cout<<endl;
	}
}
void Matrix::Display()
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<num[i][j]<<" ";
		}
		cout<<endl;
	}
}

void Matrix::Transpose()
{
for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			tnum[i][j]=num[j][i];
		}
		cout<<endl;
		
}
for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cout<<tnum[i][j]<<" ";
		}
		cout<<endl;
	
}
}
void Matrix::Diagonal()
{
	int a=0;
	int b=0;
	
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(i==j)
			{
			a+=num[i][j];	
			}
			if ((i + j) == (4))
			{
			b+=num[i][j];	
			}
		}
		
}
	cout<<"Diagonal 1 : "<<a<<endl;
	cout<<"Diagonal 2 : "<<b<<endl;
}
void Matrix::Rowise()
{
	int r;
	for(i=0;i<5;i++)
	{
		r = 0;
	
	for(j=0;j<5;j++)
	{
		r=r+num[i][j];
	}
	cout<<"Sum  of Row "<<i+1 <<"="<<r<<endl;
}
}
void Matrix::Colwise()
{
	int r;
	for(i=0;i<5;i++)
	{
		r = 0;
	
	for(j=0;j<5;j++)
	{
		r=r+num[j][i];
	}
	cout<<"Sum  of Col "<<i+1 <<"="<<r<<endl;
}
}

int main()
{
	Matrix m;
	m.Input();
	m.Display();
	m.Transpose();
	m.Diagonal();
	m.Rowise();
	m.Colwise();
}