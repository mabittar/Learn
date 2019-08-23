#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num = 10;

	cout << "enter an number between 9 and 11" << endl;
	cin >> num;

switch (num)
{
	case 9:
		cout << "number 9" <<endl;
		break;
	case 10:
		cout << "number 10" <<endl;
		break;
	case 11:
		cout <<"number 11" <<endl;
		break;

	default:
		cout <<"cant find the number";

}

	return 0;
}