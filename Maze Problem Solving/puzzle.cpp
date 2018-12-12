#include<iostream>
#include "puzzle.h"
#include<fstream>
using namespace std;
int rsize, csize, T_hurdles;
void stack::push(int r1, int c1)
{
	if (head == NULL)
	{
		node *n = new node;
		n->r = r1;
		n->c = c1;
		head = n;
		tail = head;
		n->next = NULL;
	}
	else
	{
		node *n = new node;
		n->r = r1;
		n->c = c1;
		n->next = head;
		head->prev = n;
		head = n;
		n->prev = NULL;
	}
}
void stack::pop()
{
	if (head == NULL)
	{
		cout << "\n\tstack is empty \n";
	}
	else
	{
		node *temp = head;
		head = head->next;
		delete temp;
	}
}
void stack::display()
{
	cout << "\n\t\t~%~%~%~%~% PUZZLE PATH ~%~%~%~%~%~\n\n";
	node *temp = tail;
	int i = 1;
	/*if (temp->r == 1 || temp->c == 1)
	temp = temp->prev;*/
	cout << "  row  colm\n\n";
	while (temp != NULL)
	{
		cout << i << ".  " << temp->r << "    " << temp->c << endl << endl;
		temp = temp->prev;
		i++;

	}

}
int game::getr()
{
	int r = head->r;
	return r;
}
int game::getc()
{
	int c;
	c = head->c;
	return c;
}
void game::create_matrix()
{
	ifstream file;
	file.open("matrix.txt");
	int r, c;
	file >> rsize;
	file >> csize;
	file >> T_hurdles;
	ary = new int*[rsize];
	for (int i = 0; i < rsize; i++)
		ary[i] = new int[csize];
	for (int i = 0; i < rsize; i++)
		for (int r = 0; r < csize; r++)
			ary[i][r] = 0;
	int i = 0;
	while (i < T_hurdles)
	{
		file >> r;
		file >> c;
		ary[r][c] = 1;
		++i;

	}

	file.close();
	cout << "\n______________________\n";
	for (int i = 0; i < rsize; i++)
	{
		for (int r = 0; r < csize; r++)
			cout <<"|"<< ary[i][r] << "  ";
		cout << "\n______________________\n";

	}

}
void game::game_solve(int r, int c)
{
	ary[0][0] = 2;
	push(0, 0);
	while (r != (rsize - 1) || c != (csize - 1))
	{
		if (!(ary[0][1] == 1 && ary[1][0] == 1) || (ary[rsize - 1][csize - 2] == 1 && ary[rsize - 2][csize - 1] == 1))
		{
			if (c != (csize - 1) && ary[r][c + 1] == 0)
			{
				c = c + 1;
				ary[r][c] = 2;
				push(r, c);
			}
			else if (r != (rsize - 1) && ary[r + 1][c] == 0)
			{
				r = r + 1;
				ary[r][c] = 2;
				push(r, c);
			}
			else if (c != 0 && ary[r][c - 1] == 0)
			{
				c = c - 1;
				ary[r][c] = 2;
				push(r, c);
			}
			else if (r != 0 && ary[r - 1][c] == 0)
			{
				r = r - 1;
				ary[r][c] = 2;
				push(r, c);
			}
			else
			{
				ary[r][c] = 1;
				pop();
				r = getr();
				c = getc();
			}
		}
		else
		{

			cout << "\n\t\tThere Is No Path\n";
			exit(0);

		}
	}

}
