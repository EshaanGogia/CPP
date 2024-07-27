#include <iostream>
#include<string.h>
using namespace std;

int Getlen( string str)
{
	int l=0;
	for(int i=0;str[i]!='\0';i++)
	{
		l++;
	}
	return l;
}






int main()
{
    char str[100];
    

    cout << "Enter a string: ";
    cin >> str;
    cout << "You entered: " << str << endl;

    
    
    int len =Getlen(str);
    
    cout<<"Length of string "<<len<<endl;
    
    cout<<"Length of string "<<strlen(str);
    
    
    

    return 0;
}