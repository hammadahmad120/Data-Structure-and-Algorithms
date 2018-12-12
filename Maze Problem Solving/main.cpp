#include<iostream>
#include "puzzle.h"
#include<cstdlib>
using namespace std;
void main()
{
	system("mode con:cols=135 lines=120");
	game obj;
	obj.create_matrix();
	obj.game_solve(0, 0);
	obj.display();
}