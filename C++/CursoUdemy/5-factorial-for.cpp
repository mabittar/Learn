/*
factorial calc

*/

#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	
int num, fat = 1;

cout << "Enter an number:";
cin >> num;

for (int i = 1; i < num; i++)
{
	fat = fat * (i + 1);
}
	cout << "Factorial = " << fat << endl;

	system ("pause");
	return 0;
}