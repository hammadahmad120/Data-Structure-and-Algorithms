#include "bst.h"

void binary_tree::insert_in_bst(string str, string f)
{
	int t = 0;
	bnode *temp = root;
	bnode *prev = root;
	if (root == NULL)
	{
		bnode *n = new bnode();
		n->key = str;
		n->filename = f;
		n->right = NULL;
		n->left = NULL;
		root = n;
	}
	else
	{
		bnode *n = new bnode();
		while (temp != NULL)
		{
			if (str > temp->key)
			{
				t = 1;
				prev = temp;
				temp = temp->right;
			}
			else
			{
				t = 0;
				prev = temp;
				temp = temp->left;
			}
		}
		if (t == 1)
		{
			n->key = str;
			n->filename = f;
			prev->right = n;
			n->right = NULL;
			n->left = NULL;
		}
		else
		{
			n->key = str;
			n->filename = f;
			prev->left = n;
			n->right = NULL;
			n->left = NULL;
		}
	}


}

void binary_tree::traverse(int n)
{
	if (n == 1)
		inorder(root);
}
void binary_tree::inorder(bnode *temp)
{
	if (temp == NULL)
		return;
	inorder(temp->left);
	cout << temp->key << "  " << temp->filename << endl;
	inorder(temp->right);
}
void binary_tree::showResult(string name)
{
	bnode *temp = root;
	while (temp != NULL)
	{
		if (name == temp->key)
		{
			string n = temp->filename;
			if (n[0] == ' ')  //if urls are in memory then after colon there willbe space
			{
				cout << "\n\tread from memory!!\n\nURL's are:  ";
				cout << n << endl;
			}
			else
			{
				cout << "\n\n\tRead from file!!\n\nURL's are:  ";  //otherwise there will be filename 
				string st = get_url(name, n);							//and then we search it from file
				cout << st << endl;
			}
			return;
		}
		else if (name > temp->key)
			temp = temp->right;
		else
			temp = temp->left;
	}
	cout << "\n\n\tnot found!!!\n\n";   //if not in bst then output not found


}

string binary_tree::get_url(string str, string fn)
{
	string str1;
	fstream file2;
	file2.open(fn, ios::in | ios::out);
	while (getline(file2, str1, ':'))  //record key till colon,becuse name is till colon
	{
		if (str1 == str)
		{
			string u;
			getline(file2, u);
			file2.close();
			return u;
		}
		getline(file2, str1);
	}

}
