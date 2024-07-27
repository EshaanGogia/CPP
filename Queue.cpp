#include <iostream>
using namespace std;
#define MAX 1000

class Queue
{
	int arr[MAX];
	int front , rear;
	public: Queue()
	{
		front = rear = -1;
	}
	void Enqueue(int data);
	void Dequeue();
	void Display();
};
void Queue::Enqueue(int data)
{
	if (rear >= MAX-1)
	{
		cout<<"Queue is full"<<endl;
	}
	arr[rear+1]=data;
	cout<<"data inserted"<<endl;
}
void Queue::Dequeue()
{
	if (front >= MAX-1)
	{
		cout<<"Queue is empty"<<endl;
	}
	 
	 arr[front]=0;
	front=front+1;
	cout<<"data deleted"<<endl;
}
int main()
{
	Queue q;
	q.Enqueue(10);
	q.Enqueue(20);
	q.Enqueue(30);
	q.Enqueue(40);
	q.Enqueue(50);
	q.Dequeue();
}