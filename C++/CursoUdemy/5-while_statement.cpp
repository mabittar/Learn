#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num = 1;

	while (num <= 50)
	{	if (num %  2 != 0)
		{
			num++;
			continue;
		}gcc
		cout <<" The number now is: " << num << endl;
		num++; 
	}

	system("pause"); 
	return 0;

}