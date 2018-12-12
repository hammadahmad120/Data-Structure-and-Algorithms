//#include<iostream>
//using namespace std;
//class node
//{
//public:
//	int num;
//	node *next;
//	node *previous;
//};
//class doubleLink                //double link list class
//{
//	node *head;
//	node *tail;
//public:
//	doubleLink()
//	{
//		head = NULL;
//	}
//	void addNode(int val)
//	{
//		node *temp = head;
//		if (temp == NULL)
//		{
//			node *n = new node;
//			n->num = val;
//			n->next = NULL;
//			n->previous = NULL;
//			head = n;
//			tail = n;
//		}
//		else
//		{
//			while (temp->next != NULL)
//			{
//				temp = temp->next;
//			}
//			node *n = new node;
//			n->num = val;
//			temp->next = n;
//			n->previous = temp;
//			n->next = NULL;
//			tail = n;
//		}
//
//	}
//	void showFrwd()
//	{
//		node *temp = head;
//		while (temp != NULL)
//		{
//			cout << temp->num << endl;
//			temp = temp->next;
//		}
//
//	}
//	void showReverse()
//	{
//		node *temp = tail;
//		while (temp != NULL)
//		{
//			cout << temp->num << endl;
//			temp = temp->previous;
//		}
//
//	}
//	void insertAtHead(int);
//	void insertAtTail(int);
//	void insert(int, int);
//	void deleteFromHead();
//	void deleteFromTAil();
//	void deleteFromTAil(int);
//};
//void doubleLink::insertAtHead(int no)
//{
//	node *n = new node();
//	n->num = no;
//	n->next = head;
//	head->previous = n;
//	n->previous = NULL;
//	head = n;
//
//}
//void doubleLink:: insertAtTail(int no)
//{
//
//	node *n = new node();
//	n->num = no;
//	tail->next = n;
//	n->previous = tail;
//	n->next = NULL;
//	tail = n;
//}
//void doubleLink::insert(int no, int i)
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
//	add = new node();
//	add->num = no;
//	temp->next = add;
//	add->previous = temp;
//	add->next = temp1;
//	temp1->previous = add;
//
//}
//void doubleLink:: deleteFromHead()
//{
//	head = head->next;
//	head->previous = NULL;
//
//}
//void doubleLink:: deleteFromTAil()
//{
//	tail = tail->previous;
//	tail->next = NULL;
//
//}
//void doubleLink::deleteFromTAil(int i)
//{
//	node *n;
//	node *temp;
//	temp = head;
//	n = head;
//	while (temp != NULL)
//	{
//
//		if (temp->num == i)
//		{
//			n = temp->next;
//			temp = temp->previous;
//			temp->next = n;
//			n->previous = temp;
//			break;
//		}
//		temp = temp->next;
//	}
//
//
//}
//
//void main()
//{
//	doubleLink obj;
//	int val;
//	for (int i = 0; i < 5; i++)
//	{
//		cout << "enter value : ";
//		cin >> val;
//		obj.addNode(val);
//	}
//	obj.showFrwd();
//	cout << "\n\n\t\tREVERSE ARRAY IS : \n";
//	obj.showReverse();
//	cout << "enter value to be added at head : ";
//	cin >> val;
//	obj.insertAtHead(val);
//	cout << "enter value to be added at tail : ";
//	cin >> val;
//	obj.insertAtTail(val);
//	cout << "enter value to be added at specific location : ";
//	cin >> val;
//	int n;
//	cout << "enter location: ";
//	cin >> n;
//	obj.insert(val,n);
//	obj.showFrwd();
//	cout << "Now Deleting head and tail :\n\n";
//	obj.deleteFromHead();
//	obj.deleteFromTAil();
//	obj.showFrwd();
//	cout << "Enter Value you want to delete : ";
//	cin >> val;
//	obj.deleteFromTAil(val);
//	obj.showFrwd();
//
//}