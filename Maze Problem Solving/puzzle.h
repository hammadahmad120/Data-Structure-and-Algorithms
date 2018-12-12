#ifndef PUZZLE_H
#define PUZZLE_H
#include<iostream>
using namespace std;
class node
{
public:
	int r;
	int c;
	node *next, *prev;
	node()
	{
		r = 0;
		c = 0;
		next = NULL;
	}
};
class stack :public node
{
protected:
	node *head, *tail;

public:
	void push(int r1, int c1);
	void pop();
	void display();
};
class game :public stack
{
	int **ary;
public:
	game()
	{
		head = NULL;
	}
	~game()
	{
		delete[]ary;
	}
	int getr();
	int getc();
	void create_matrix();
	void game_solve(int r, int c);
};
#endif