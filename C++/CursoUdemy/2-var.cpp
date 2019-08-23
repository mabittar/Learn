#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int age, age1, age2; //var declaration
	int sun, avarge;
	cout <<"Enter the 3 ages" << endl;
	cin >> age;
	cin >> age1;
	cin >> age2;

	sun = age + age2 + age1;
	cout <<" The sun of the ages is: " << sun << endl;
	avarge = (age + age1 + age2)/3;
	cout <<"The avarge age is: " << avarge << endl;
	return 0;
}
