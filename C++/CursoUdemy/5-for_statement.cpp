#include <iostream>

using namespace std;


int main (int argc, char *argv[])
{
	int i = 1;

	for (; ; )
		{
		if (i > 100)
			break;
		cout << i << endl;
		i++;
		}

system("pause");
return 0;


}