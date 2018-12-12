#include "logFile.h"
using namespace std;
void main()
{
	system("mode con:cols=135 lines=12000");
	logFile obj;
	obj.read();
	obj.display();

}