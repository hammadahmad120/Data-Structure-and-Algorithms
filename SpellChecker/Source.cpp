//#include<iostream>
//#include<string>
//#include<fstream>
//using namespace std;
//const int size = 26;
//class node
//{
//public:
//	string str;
//	node *next;
//};
//class link
//{
//	node *head;
//public:
//	link()
//	{
//		head = NULL;
//	}
//	void addNode(string val)
//		{
//			node *n = new node;
//			n->str = val;
//			node *temp = head;
//			if (temp == NULL)
//			{
//				head = n;
//				n->next = NULL;
//		
//			}
//			else
//			{
//				while (temp->next != NULL)
//					temp = temp->next;
//				temp->next = n;
//				n->next = NULL;
//			}
//		}
//	bool check_spell(string s)
//	{
//		string s1 = "incorrect";
//		node *temp = head;
//		while (temp != NULL)
//		{
//			if (temp->str == s)
//			{
//				cout << "correct\n\nword: " << temp->str<<endl;
//				return true;
//			}
//			temp = temp->next;
//		}
//		return false;
//
//	}
//	void choices(string s)
//	{
//		node *temp = head;
//		int wrong = 0;
//		int len1 = s.size();
//		int i = 0;
//		while (temp != NULL)
//		{
//			string str2 = temp->str;
//			int len2 = str2.size();
//			if (len1 == len2)
//			{
//				while (s[i] != NULL)
//				{
//					if (s[i] != str2[i])
//						wrong++;
//					i++;
//				}
//				if (wrong <= 2)
//					cout << str2 << ", ";
//				wrong = 0;
//				i = 0;
//			}
//			else
//			{
//				while (str2[i]!=NULL&&i < len1)
//				{
//					if (s[i] != str2[i])
//						wrong++;
//					i++;
//				}
//				if (wrong == 0)
//					cout << str2 << ", ";
//				wrong = 0;
//				i = 0;
//			}
//			temp = temp->next;
//
//		}
//
//	}
//};
//int hashF(string);
//void search(link[], string);
//void main()
//{
//	string str1;
//	link obj[size];
//	fstream file;
//	file.open("spell.txt",ios::in|ios::out);
//	while (getline(file,str1))
//	{
//		int no = hashF(str1);
//		obj[no].addNode(str1);
//	}
//	cout << "enter string you want to search : ";
//	cin >> str1;
//	search(obj, str1);
//	cout << endl << endl;
//}
//void search(link obj[], string s)
//{
//	int no = hashF(s);
//	bool test= obj[no].check_spell(s);
//	if (test)
//		return;
//	else
//	{
//		cout << "familiar words : ";
//		obj[no].choices(s);
//	}
//}
//int hashF(string s)
//{
//	return ((int(s[0])) % 26);
//}