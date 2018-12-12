//#include <queue>
//#include<iostream>
//using namespace std;
//static int i = 1;
//class node               //balance BT by using queue
//{
//public:
//	int num;
//	node *parent;
//	node *left;
//	node *right;
//};
//std::queue<node*> ad;
//std::queue<node*> ad1;
//class bt
//{
//	node *root;
//	node *current;
//public:
//	bt()
//	{
//		root = NULL;
//	}
//	void max_heap(int no)
//	{
//		if (root == NULL)
//		{
//			node *n = new node();
//			n->num = no;
//			root = n;
//			current = n;
//			n->parent = NULL;
//			n->left = NULL;
//			n->right = NULL;
//		}
//		else
//		{
//			node *n = new node();
//			n->num = no;
//			n->parent = current;
//			n->left = NULL;
//			n->right = NULL;
//			ad.push(n);
//			ad1.push(n);
//			if (i % 2 == 1)
//				current->left = n;
//			else
//			{
//				current->right = n;
//				current = ad.front();
//				ad.pop();
//			}
//			if (n->num > current->num)
//			{
//				swap_node_max(n);
//			}
//			i++;
//		}
//
//	}
//	void min_heap(int no)
//	{
//		if (root == NULL)
//		{
//			node *n = new node();
//			n->num = no;
//			root = n;
//			current = n;
//			n->parent = NULL;
//			n->left = NULL;
//			n->right = NULL;
//		}
//		else
//		{
//			node *n = new node();
//			n->num = no;
//			n->parent = current;
//			n->left = NULL;
//			n->right = NULL;
//			ad.push(n);
//			ad1.push(n);
//			if (i % 2 == 1)
//				current->left = n;
//			else
//			{
//				current->right = n;
//				current = ad.front();
//				ad.pop();
//			}
//			if (n->num < current->num)
//			{
//				swap_node_min(n);
//			}
//			i++;
//		}
//	}
//	void swap_node_max(node *p)
//	{
//		if (p->parent == NULL)
//			return;
//		if (p->num > p->parent->num)
//		{
//			int no = p->num;
//			p->num = p->parent->num;
//			p->parent->num = no;
//		}
//		else
//		{
//			return;
//		}
//		swap_node_max(p->parent);
//
//	}
//	void display_by_queue()
//	{
//		cout << root->num << ", ";
//		while (!(ad1.empty()))
//		{
//			node *n = ad1.front();
//			if (n != NULL)
//			{
//				cout << n->num << ", ";
//			}
//			ad1.pop();
//		}
//
//	}
//	node* get_root()
//	{
//		return root;
//	}
//	void display(node *n)
//	{
//		if (n == NULL)
//		return;
//		display(n->left);
//		cout << n->num << ", ";
//		display(n->right);
//
//	}
//	void swap_node_min(node *p)
//	{
//		if (p->parent == NULL)
//			return;
//		if (p->num < p->parent->num)
//		{
//			int no = p->num;
//			p->num = p->parent->num;
//			p->parent->num = no;
//		}
//		else
//		{
//			return;
//		}
//		swap_node_min(p->parent);
//
//
//	}
//	void delete_node()
//	{
//		node *n = root;
//		while (n->left != NULL&&n->right != NULL)
//		{
//			if (n->left->num > n->right->num)
//			{
//				int v = n->num;
//				n->num = n->left->num;
//				n->left->num = v;
//				n = n->left;
//			}
//			else
//			{
//				
//				int v = n->num;
//				n->num = n->right->num;
//				n->right->num = v;
//				n = n->right;
//			}
//		}
//		if (n->left != NULL)
//		{
//			int v = n->num;
//			n->num = n->left->num;
//			n->left->num = v;
//			n->left = NULL;
//			n = n->left;
//			n = NULL;
//		}
//		else
//		{
//			n = NULL;
//			delete n;
//		}
//
//	}
//};
//void main()
//{
//	bt obj;
//	obj.max_heap(5);
//	obj.max_heap(15);
//	obj.max_heap(25);
//	obj.max_heap(35);
//	obj.max_heap(45);
//	obj.max_heap(55);
//	obj.max_heap(65);
//	obj.max_heap(12);
//	obj.max_heap(70);
//
//	obj.delete_node();
//
//
//	/*obj.min_heap(5);
//	obj.min_heap(55);
//	obj.min_heap(25);
//	obj.min_heap(15);
//	obj.min_heap(42);
//	obj.min_heap(13);
//	obj.min_heap(60);
//	obj.min_heap(3);
//	obj.min_heap(1);*/
//
//	node *r = obj.get_root();
//	obj.display(r);
//	//obj.display_by_queue();
//	cout << endl;
//}
