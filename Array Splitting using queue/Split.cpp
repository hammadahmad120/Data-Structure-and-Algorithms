#include<iostream>
#include<ctime>
#include<cstdlib>
#include<windows.h>
using namespace std;
class node
{
public:
	int start, end;
	node *next;
};
class queue
{
	node *head, *tail;
public:
	queue()
	{
		head = NULL;
	}
	void enqueue(int s, int e)
	{

		if (head == NULL)
		{
			node *n = new node;
			n->start = s;
			n->end = e;
			head = n;
			tail = n;
			tail->next = NULL;
		}
		else
		{
			node *n = new node;
			n->start = s;
			n->end = e;
			tail->next = n;
			tail = n;
			tail->next = NULL;
		}
	}
	void dequeue()
	{
		node *temp = head;
		head = head->next;
		delete temp;
	}
	int get_start()
	{
		return head->start;
	}
	int get_end()
	{
		return head->end;
	}
};

class split
{
	int *ary;
	int size;
public:
	split(int s)
	{
		size = s;
		ary = new int[s];
		for (int i = 0; i < s; i++)
		{
			ary[i] = int(rand() % 100);
		}
	}
	void display()
	{
		int start = 0;
		int end = size - 1;
		queue ob;
		while (start != end)
		{
			int i = start;
			cout << "array : ";
			while (i <= end)        //display array
			{
				cout << ary[i] << ", ";
				i++;
			}
			i = start;
			int mid = (start + end) / 2;  //get mid of array
			ob.enqueue(start, mid);           //enqueue left side of array
			ob.enqueue(mid + 1, end);         //enqueue right side of array
			cout << "\n\nleft : ";
			while (i <= mid)
			{
				cout << ary[i] << ", ";
				i++;
				
			}
			int j = mid + 1;
			cout << "\n\nright : ";
			while (j <= end)
			{
				cout << ary[j] << ", ";
				j++;
			}
			cout << "\n-----------------------------------\n";
			start = ob.get_start();  //get start and end index of array from head
			end = ob.get_end();      //now which is to be printed 
			ob.dequeue();            //dequeued the head,i.e head moves to the
			//next position
		}
		

	}
};
void main()
{
	int n;
	cout << "enter size of array : ";
	cin >> n;
	cout << "\n-----------------------------------\n";
	split obj(n);
	obj.display();
	cout << endl;
}