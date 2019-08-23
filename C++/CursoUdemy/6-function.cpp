#include <iostream>

using namespace std;

//functions prototype
bool par(int num);


//main function
int main(int argc, char const *argv[])
{

int n;
cout << "Enter an number: ";
cin >> n;

if (par(n))
	cout << "The number " << n << " is even!" << endl;
else
	cout << "The number" << n << " is odd!" << endl; 


	system ("pause");
	return 0;
}


//function declarations

bool par(int num)
{
	if (num % 2 == 0)
		return true;
	return false;
}