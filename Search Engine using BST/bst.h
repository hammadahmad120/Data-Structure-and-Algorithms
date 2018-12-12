#ifndef BST_H
#define BST_H
#include<iostream>
#include<string>
#include<fstream>
using namespace std;
class bnode
{
public:
	string key;
	string filename;
	bnode *left;
	bnode *right;
};

class binary_tree
{
	bnode *root;
public:
	binary_tree()
	{
		root = NULL;
	}

	void traverse(int);
	void inorder(bnode *temp);
	void showResult(string);
	friend string getFile(string);
	string get_url(string, string);
	void insert_in_bst(string, string);
};
#endif
