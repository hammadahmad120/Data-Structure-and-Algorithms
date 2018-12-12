//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int num;
//	node *next;
//public:
//	node()
//	{
//		next = NULL;
//	}
//};
//class link                         //single link list class
//{
//	node *head;
//public:
//	link()
//	{
//		head = NULL;
//	}
//	void insertAtHead(int);
//	void insertAtTail(int);
//	void insert(int, int);
//	void deleteFromHead();
//	void deleteFromTAil();
//	void deleteFromTAil(int);	
//	void show();
//	void addNode(int);	
//	void reverse();
//	void removeDuplicate();
//	void printMid();
//	
//};
//void link::insertAtHead(int no)
//{
//	node *n = new node();
//	n->num = no;
//	n->next = head;
//	head = n;
//
//}
//void link:: insertAtTail(int no)
//{
//
//	node *n = new node();
//	n = head;
//	while (n->next != NULL)
//	{
//		n = n->next;
//	}
//	node *p = new node;
//	n->next = p;
//	p->num = no;
//	p->next = NULL;
//
//}
//void link::insert(int no, int i)
//{
//
//	node *temp, *temp1;
//	temp = head;
//	int t = 0;
//	while (t < i - 2)
//	{
//		temp = temp->next;
//		t++;
//	}
//	temp1 = temp->next;
//	node *add;
//	add = new node;
//	add->num = no;
//	temp->next = add;
//	add->next = temp1;
//
//}
//void link:: deleteFromHead()
//{
//	head = head->next;
//
//}
//void link:: deleteFromTAil()
//{
//	node *temp = head;
//	node *previous = head;
//	while (temp->next != NULL)
//	{
//		previous = temp;
//		temp = temp->next;
//	}
//	previous->next = NULL;
//	delete temp;
//
//}
//void link::deleteFromTAil(int i)
//{
//	node *previous;
//	node *temp;
//	temp = head;
//	previous = head;
//	while (temp != NULL)
//	{
//
//		if (temp->num == i)
//		{
//			previous->next = temp->next;
//			delete temp;
//			break;
//		}
//		previous = temp;
//		temp = temp->next;
//	}
//
//
//}
//void link::show()
//{
//	node *temp = head;
//	while (temp != NULL)
//	{
//		cout << temp->num << endl;
//		temp = temp->next;
//	}
//
//}
//void link:: addNode(int val)
//{
//	node *n = new node;
//	n->num = val;
//	node *temp = head;
//	if (temp == NULL)
//	{
//		head = n;
//		n->next = NULL;
//
//	}
//	else
//	{
//		while (temp->next != NULL)
//			temp = temp->next;
//		temp->next = n;
//		n->next = NULL;
//	}
//}
//void link:: reverse()
//{
//	node *temp = head;
//	node* current = head;
//	node* previous = NULL;
//
//	while (current->next != NULL)
//	{
//		temp = current->next;
//
//		current->next = previous;
//
//		previous = current;
//
//		current = temp;
//	}
//	current->next = previous;
//	head = current;
//}
//void link::removeDuplicate()
//{
//
//	node *temp = head, *temp1 = head, *previous = head;
//	int no;
//	while (temp != NULL)
//	{
//		no = temp->num;
//		temp1 = temp->next;
//		while (temp1 != NULL)
//		{
//			if (no == temp1->num)
//			{
//				previous->next = temp1->next;
//			}
//			previous = temp1;
//			temp1 = temp1->next;
//		}
//		temp = temp->next;
//	}
//
//}
//void link:: printMid()
//{
//
//	node *slow = head, *fast = head;
//	while (fast->next != NULL)
//	{
//		fast = fast->next;
//		if (fast->next != NULL)
//		{
//			fast = fast->next;
//			slow = slow->next;
//		}
//
//	}
//	cout << "\n\n\t\tmid node value is : " << slow->num << endl;
//}
//void main()
//{
//	int value;
//	link objLink;
//		for (int i = 0; i < 5; i++)
//		{
//			cout << "Enter Value For node : ";
//			cin >> value;
//			objLink.addNode(value);
//		}
//		objLink.reverse();
//		objLink.show();
//	cout << "enter value to be added at head : ";
//	cin >> value;
//	objLink.insertAtHead(value);
//	objLink.show();
//	cout << "enter value to be added at tail : ";
//	cin >> value;
//	objLink.insertAtTail(value);
//	objLink.show();
//	cout << "enter value to be added at specific location : ";
//	cin >> value;
//	int n;
//	cout << "enter location : ";
//	cin >> n;
//	objLink.insert(value, n);
//	objLink.show();
//	objLink.printMid();
//	objLink.removeDuplicate();
//	cout << "\nafter removing duplicates : \n";
//	objLink.show();
//	cout << "enter value to be deleted at specific location : ";
//	cin >> value;
//	objLink.deleteFromTAil(value);
//	objLink.show();
//	cout << "\nnow\n deleted from tail is : \n";
//	objLink.deleteFromTAil();
//	objLink.show();
//	objLink.deleteFromHead();
//	cout << "\n deleted from head is : \n";
//	objLink.show();
//
//}
