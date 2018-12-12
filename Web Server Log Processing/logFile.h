#ifndef LOGFILE_H
#define LOGFILE_H
#include<string>
#include<iostream>
#include<cstdlib>
#include<iomanip>
#include<fstream>
using namespace std;
class node
{
public:
	long double avrg_Rsize;
	int ttl_rqst;
	string name;
	node *next;
};
class logFile
{
	node *head, *tail;
public:
	logFile()
	{
		head = NULL;
	}
	void read();
	void search(string, int);
	void add_node(string, int);
	void display();
};
#endif