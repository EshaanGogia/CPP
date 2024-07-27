#include<iostream>
using namespace std;

class Node
{
	public: int data;
	Node *next;
	Node()					//default Constructor 
{
	data = 0;
	next = NULL;
}
	Node (int data) 		//parameterized Constructor
{
	this->data = data;
	this->next = NULL;
}
};

class linkedlist
{
	Node *head;
//	
	Node *tail;
	public:
		linkedlist()
		{
			head = NULL;
//			
			tail = NULL;
		}
		void insertNode(int n);
		void Display();
//		void DeleteNode(int data);
};

void linkedlist::insertNode(int n)
{
Node *newNode = new Node(n);
	if(head == NULL)
	{
		head = newNode;
//		
		tail = newNode;
}
else{
	tail->next = newNode;
	tail = newNode;
}
//		return;
//	}
//	Node *temp=head;
//	while(temp->next!=NULL)
//	{
//		temp = temp->next;
//	}
//	temp->next=newNode;
//	
}
void linkedlist::Display()
{
	Node *temp = head;
	if(head==NULL)
	{
		cout<<"list empty"<<endl;
		return;
	}
	while(temp!=NULL)
	{
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}
int main()
{
	linkedlist list;
	list.insertNode(11);
	list.insertNode(22);
	list.insertNode(33);
	list.insertNode(44);

//	cout<<"Element of the list are: ";
//	
	list.Display();
	return 0;
//	cout<<endl;
	}