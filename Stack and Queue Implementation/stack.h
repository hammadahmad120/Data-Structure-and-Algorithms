#ifndef STACK_H
#define STACK_H
#include<iostream>
using namespace std;
class node
{
public:
	int num;
	node *next;
};
class stack
{
	node *head;
	int size;
public:
	stack()
	{
		size = 0;
		head = NULL;
	}
	void push(int no)
	{
		size++;
		if (head == NULL)
		{
			node *n = new node;
			n->num = no;
			head = n;
			n->next = NULL;
		}
		else
		{
			node *n = new node;
			n->num = no;
			n->next = head;
			head = n;
		}
	}
	int pop()
	{
		
		if (head == NULL)
		{
			cout << "\n\tstack is empty \n";
			return -1;
		}
		else
		{
			size--;
			int n;
			node *temp = head;
			n = head->num;
			head = head->next;
			delete temp;
			return n;
		}

	}
	void display()
	{
		node *temp = head;
		while (temp != NULL)
		{
			cout << temp->num << endl;
			temp = temp->next;

		}
	}
	void top()
	{
		cout << "\n\tTop valure of stack is : " << head->num << endl;
	}
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		else
			false;
			
	}
	int Stacksize()
	{
		return size;
	}
};
#endif