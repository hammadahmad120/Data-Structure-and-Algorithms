#include<iostream>
#include "stack.h"
#include "queue.h"
using namespace std;
void main()
{
	int n;
	/*stack obj;
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter value: ";
		cin >> n;
		obj.push(n);
	}
	n = obj.pop();
	if (n!=-1)
	cout << n << " is poped up !!\n\n";
	cout << "Now ! stack is : \n";
	obj.display();
	obj.top();
	cout << "Stack size : " << obj.Stacksize() << endl;*/
	queue obj1;
	for (int i = 0; i < 5; i++)
	{
	cout << "Enter value: ";
	cin >> n;
	obj1.enqueue(n);
	}
	n = obj1.dequeue();
	if (n != -1)
		cout << n << " is dequeued !!\n\n";
	if (obj1.isEmpty1())
		cout << "\n\tEmpty Queue!!\n";
	cout << "\nSize of Queue : " << obj1.QueueSize() << endl;
	cout << "Queue is :\n";
	obj1.display1();
}