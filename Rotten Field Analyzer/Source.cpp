#include<iostream>
using namespace std;
int nsize = 0,rsize,csize;
class node
{
public:
	int row, col;
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
			n->row = s;
			n->col = e;
			head = n;
			tail = n;
			tail->next = NULL;
		}
		else
		{
			node *n = new node;
			n->row = s;
			n->col = e;
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
	int get_row()
	{
		return head->row;
	}
	int get_col()
	{
		return head->col;
	}
};
class rotten
{
	int **ary;
	int size;
public:
	rotten(int r,int c)
	{
		ary = new int*[r];
		for (int i = 0; i < r; i++)
			ary[i] = new int[c];
		for (int i = 0; i < r; i++)
			for (int r = 0; r < c; r++)
				ary[i][r] = (rand() % 3);
	}
	
	void check()
	{
		bool t = true;
		queue obj;
		for (int i = 0; i < rsize; i++)
			for (int r = 0; r < csize; r++)
			{
				if (ary[i][r] == 2)
				{
					nsize++;
					obj.enqueue(i, r);
				}
			}
		int r, c, s, i = 0, steps = 0;
		while (t)
		{
			s = nsize;
			nsize = 0;
			while (i < s)
			{
				r = obj.get_row();
				c = obj.get_col();
				obj.dequeue();
				ary[r][c] = 2;
				if (c != (csize - 1) && ary[r][c + 1] == 1)
				{
					nsize++;
					ary[r][c + 1] = -1;
					obj.enqueue(r, c + 1);
				}
				if (r != (rsize - 1) && ary[r + 1][c] == 1)
				{
					nsize++;
					ary[r + 1][c] = -1;
					obj.enqueue(r + 1, c);
				}
				if (c != 0 && ary[r][c - 1] == 1)
				{
					nsize++;
					ary[r][c - 1] = -1;
					obj.enqueue(r, c - 1);
				}
				if (r != 0 && ary[r - 1][c] == 1)
				{
					nsize++;
					ary[r - 1][c] = -1;
					obj.enqueue(r - 1, c);
				}
				
				i++;
			}
			i = 0;
			if (nsize == 0)
			{
				t = false;
			}
			else
			steps++;

		}
		cout << "total steps : " << steps << endl;
	}
	void display()
	{
		for (int i = 0; i < rsize; i++)
		{
			for (int r = 0; r < csize; r++)
			{
				cout << ary[i][r] << "  ";
			}
			cout << endl;
		}
	}
};
void main()
{
	rsize = 100, csize = 10;
	rotten ob( rsize, csize);
	ob.display();
	ob.check();
	ob.display();
}