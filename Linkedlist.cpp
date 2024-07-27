#include<iostream>
using namespace std;

class Node
{
	public:int data;
			Node *next;
	Node()
	{
		data = 0;
		next = NULL;
		
	}
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
		
	}
};
class linkedlist
{
	Node *head;
	public:
		linkedlist()
		{
			head=NULL;
		}
		void insertNode(int data);
		void Display();
};


void linkedlist::insertNode(int data)
{
	Node *newNode =new Node(data);
	if(head == NULL)
	{
		head = newNode;
		return;
	}
	Node *temp = head;
	while(temp->next != NULL)
	{
		temp = temp->next;
		
	}
	temp->next = newNode;
}
void linkedlist::Display()
	{
		Node *temp = head;
		if(head == NULL)
		{
			cout<<"list empty"<<endl;
			return;
		}
		while(temp!=NULL)
		{
			cout<<temp->data<<"->";
			temp = temp->next;
		}
	}
int main()
{
	linkedlist l;
	l.insertNode(100);
	l.insertNode(200);
	l.insertNode(300);
	l.insertNode(400);
	
	cout<<"Element of the list are: ";
	
	l.Display();
	cout<<endl;
}