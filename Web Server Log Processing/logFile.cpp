#include "logFile.h"
void logFile:: read()
{
	int mul = 1, no = 0, i = 50, len;
	string str, name = "/";
	char ch;
	fstream file;
	file.open("real.txt", ios::in | ios::out);
	while (getline(file, str))
	{
		len = str.size();  //length of complete line that has been read out
		len--;
		if (len>i&&str[len] != '-')  //if there is - at end then this line is inappropirate so ignore it
		{

			while (str[i] != '/')
				i++;
			i++;

			while (!(str[i] == '?' || str[i] == ' '))  //to store name in string,name ends with space or ?
			{
				ch = str[i];
				name = name + ch;
				i++;
			}
			while (str[len] != ' ')
			{
				no = no + mul*(str[len] - 48);  //to read response size from end and convert it in int value
				mul = mul * 10;
				len--;
			}
			search(name, no);   //this function search that page name from link list
		}
		name = "/";
		no = 0;        //again initialization of required variables
		mul = 1;
		i = 50;
	}
	file.close();


}
void logFile::search(string name, int size)
{
	node *temp = head;
	int t = 0;
	while (temp != NULL)
	{
		if (temp->name == name)
		{
			t = 1;                          //if already exist,update data in that node
			temp->ttl_rqst = temp->ttl_rqst + 1;
			temp->avrg_Rsize = temp->avrg_Rsize + size;
			break;
		}
		temp = temp->next;

	}
	if (t != 1)
		add_node(name, size);             //if not exist then create new node and add data

}
void logFile::add_node(string name, int size)
{

	if (head == NULL)
	{
		node *n = new node;
		n->name = name;
		n->ttl_rqst = 1;
		n->avrg_Rsize = size;
		n->next = NULL;
		head = n;
		tail = n;

	}
	else
	{
		node *n = new node();
		n->name = name;
		n->ttl_rqst = 1;
		n->avrg_Rsize = size;
		tail->next = n;
		n->next = NULL;
		tail = n;


	}
}
void logFile:: display()
{
	node *temp = head;
	while (temp != NULL)
	{

		cout << left << setw(75) << temp->name << setw(30) << temp->ttl_rqst;
		cout << (temp->avrg_Rsize / temp->ttl_rqst) << endl << endl;

		temp = temp->next;
	}

}

