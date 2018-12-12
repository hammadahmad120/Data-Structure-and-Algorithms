#include<iostream>
#include<queue>
using namespace std;
std::queue<int>qobj;
int *parent;				//correct bfs
class node
{
public:
	int vert;
	node *next;
};
class link_list
{
	node *head;
	node *tail;
public:
	link_list()
	{
		head = NULL;
		tail = NULL;
	}
	void insert(int v)
	{
		node *n = new node();
		n->vert = v;
		node *temp = head;
		n->next = NULL;
		if (head == NULL)
		{
			head = n;
			tail = n;
			
		}
		else
		{
			tail->next = n;
			tail = n;

		}
	}
	node* get_list()
	{
		return head;
	}
};
class graph
{
	bool type;
	link_list *data;
	int size;
public:
	graph(int s,bool t)
	{
		type = t;
		size = s;
		data = new link_list[size];
	}
	void addEdge(int u, int v)
	{
		if (type)
		{
			data[u].insert(v);
		}
		else
		{
			data[u].insert(v);
			data[v].insert(u);
		}
	}
	void bfs(int s,int r)
	{
		bool *p;
		p = new bool[size];
		
		int *distance;
		parent = new int[size];
		distance = new int[size];
		for (int i = 0; i < size; i++)
		{
			p[i] = false;
			parent[i] = numeric_limits<int>::max();
			distance[i] = -1;
		}
		qobj.push(s);
		p[s] = true;
		distance[s] = 0;
		cout << s << ", ";

		while (!(qobj.empty()))
		{
			int n = qobj.front();
			qobj.pop();
			node *temp = data[n].get_list();
			while (temp != NULL)
			{
				int s = temp->vert;
				if (p[s] == false)
				{
					cout << s << ", ";
					p[s] = true;
					qobj.push(s);
					distance[s] = distance[n] + 1;
					parent[s] = n;
					if (s == r)
					{
						display_path(0, s);			//where find destination,display path
						return;
					}
				}
				temp = temp->next;
			}
		}
		cout << endl;
		//display_path( 0, 4);
		cout << endl;
	
	}
	void display_path(int s, int d)
	{
		if (d == s)
			cout << d ;
		else
		{
			display_path( s, parent[d]);
			cout << "->" << d;
		}

	}
	
};
void main()
{
	graph obj(6, false);
	obj.addEdge(0, 1);
	obj.addEdge(0, 3);
	obj.addEdge(1,2);
	obj.addEdge(2, 3);
	obj.addEdge(2, 5);
	obj.addEdge(3, 5);
	obj.addEdge(2, 4);
	obj.bfs(0,4);
}