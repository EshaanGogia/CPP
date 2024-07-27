#include<iostream>
using namespace std;

class Array
{
	int arr[100];
	int n;
	public:void readdata();
	void FTraverse();
	void BTraverse();
	void total();
	void Avg();
	void Highest();
	void LSearch();
	void BSearch();
	void BubbleSort();
	void Modify();
	void Duplicate();
	void SelectionSort();
	void InsertionSort();
	
};

void Array :: readdata()
{
	cout<<"Enter Size of array = "<<endl;
	cin>>n;
	for(int i = 0;i<n ; i++)
	{
		cout<<"Enter data :";
		cin>>arr[i];
		
	}
	cout<<"data stored"<<endl;
	
}
void Array :: FTraverse()
{
	for(int i = 0;i<n ; i++)
	{

		cout<<arr[i]<<" ";
	}
	cout<<endl;
	
}
void Array :: BTraverse()
{
	for(int i = n-1;i>=0 ; i--)
	{

		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
void Array :: total()
{
	int t=0;
	for(int i = 0;i<n ; i++)
	{
		t+=arr[i];
		
	}
	cout<<t;
	cout<<endl;
}
void Array :: Avg()
{
	int t=0;
	int avg=0;
	for(int i = 0;i<n ; i++)
	{
		t+=arr[i];
		avg=t/n;
	}
	cout<<avg;
	cout<<endl;
}
void Array :: Highest()
{
	int h = arr[0];
	for(int i = 0;i<n ; i++)
	{
		if(arr[i]>h) {
			h=arr[i]; 
		}
	}
	cout<<"Highest Data or Value is "<<h<<endl;
}
void Array :: LSearch()
{
	int num , flag = 0;
	cout<<"Enter a number to be searched : ";
	cin>>num;
	
	for (int i = 0 ; i<n ; i++)
	{
		if(num==arr[i])
		{
			flag = 1;
			break;
			
		}
	}
	if(flag == 1)
	{
		cout<<"data found successfully";
		
	}
	else {
		cout<<"data not found";
		
	}
}
void Array :: Modify()
{
	int num , flag = 0,newnum,index;
	cout<<"Enter a number to be modify : ";
	cin>>num;
	cout<<"Enter new Value : ";
	cin>>newnum;
	
	
	for (int i = 0 ; i<n ; i++)
	{
		if(num==arr[i])
		{
			flag = 1;
			index=i;
			break;
			
		}
	}
	if(flag == 1)
	{
		cout<<"data found successfully at index "<<index<<endl;
		arr[index]=newnum;
		
	}
	else {
		cout<<"data not found";
}
}
void Array :: Duplicate()
{
	int num , flag = 0,c=0;
	cout<<"Enter a number to be searched : ";
	cin>>num;
	
	for (int i = 0 ; i<n ; i++)
	{
		if(num==arr[i])
		{
			flag=1;
			c++;
			
			
		}
	}
	if(flag == 1)
	{
		cout<<"data found successfully";
		cout<<"No of Times "<<c<<endl;
		
	}
	else {
		cout<<"data not found";
		
	}
	
}
void Array :: BSearch()
{
	int beg = 0;
	int end = n-1;
	int se;
	int mid = (beg+end)/2;
	
	cout<<"Enter the value you have to search : ";
	cin>>se;
	
	while(beg<end)
	{
		if(se == arr[mid])
		{
			cout<<"no. found successfully "<<mid<<endl;
			break;
		}
		else if(se<arr[mid])
		{
		end=end-1;
		}
		else
		{
			beg = beg + 1;
		}
	
	mid = (beg+end)/2;
}
if (beg>end)
{
	cout<<"no data found in array "<<endl;
}
	
	
}

void Array::BubbleSort()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp =arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
void Array::SelectionSort()
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]>arr[j])
			{
				temp =arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
}
void Array::InsertionSort()
{
	for(int i=1;i<n;i++)
	{
		int temp=arr[i];
		int j=i-1;
		while(temp<arr[j]&&j>=0)
		{
			arr[j+1]=arr[j];
			j=j-1;
			
		}
		arr[j+1]=temp;
	}
	
}
int main()
{
	Array a1;
    int choice = 0;
    while (true) {
        cout << "\n**Main Menu\n";
        cout << "\nChoose one option from the following list ...\n";
        cout << "\n===============================================\n";
        cout << "\n1.Read Data\n2.Forward Traverse\n3.Backward Traverse\n4.Total\n5.Average\n6.Highest\n7.LSearch\n8.Modify\n9.BSearch\n10.Bubble Search\n11.Selection Sort\n12.Insertion Sort\n";
        cout << "\nEnter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                a1.readdata();
                break;
            case 2:
                a1.FTraverse();
                break;
            case 3:
                a1.BTraverse();
                break;
            case 4:
                a1.total();
                break;
            case 5:
                a1.Avg();
                break;
            case 6:
                a1.Highest();
                break;
            case 7:
                a1.LSearch();
                break;
            case 8:
                a1.Modify();
                break;
            case 9:
                a1.BSearch();
                break;
            case 10:
            	a1.BubbleSort();
            	break;
            case 11:
            	a1.SelectionSort();
            	a1.FTraverse();
            	break;
            case 12:
            	a1.InsertionSort();
            	a1.FTraverse();
            	break;
            case 13:
            	exit(0);
            	break;
            default:
                cout << "Please enter a valid choice.\n";
        }
}
}