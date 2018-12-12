#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
using namespace std;
class node1
{
public:
	int num;
	node1 *next;
};
class queue
{
	node1 *head,*tail;
	int size1;
public:
	queue()
	{
		head = NULL;
	}
	void enqueue(int no)
	{
		size1++;
		if (head == NULL)
		{
			node1 *n = new node1;
			n->num = no;
			head = n;
			tail = n;
			tail->next = NULL;
		}
		else
		{
			node1 *n = new node1;
			n->num = no;
			tail->next = n;
			tail = n;
			tail->next = NULL;
		}
	}
	int dequeue()
	{
		if (head == NULL)
		{
			cout << "\n\tEmpty Queue!!!\n";
			return -1;
		}
		size1--;
		node1 *temp = head;
		int n = temp->num;
		head = head->next;
		delete temp;
		return n;
	}
	void display1()
	{
		if (head != NULL)
		{
			node1 *temp = head;
			while (temp != tail)
			{
				cout << temp->num << endl;
				temp = temp->next;
			}
			cout << temp->num << endl;
		}
		else
			cout << "\n\tEmpty Queue !!!\n";
	}
	bool isEmpty1()
	{
		if (head == NULL)
			return true;
		else
			return false;
	}
	int QueueSize()
	{
		return size1;
	}
	void front()
	{
		cout << "Front value is : " << head->num << endl;
	}

};
#endif