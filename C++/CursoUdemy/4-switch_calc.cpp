/* CACULATOR operations allow
+ -> Addition
- -> Subtraction
* -> multiplication
/ -> division
*/


#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int num1, num2, result;
	float div;
	char op; //operation

	cout << "enter the first number" << endl;
	cin >> num1;
	cout << "enter the second number" << endl;
	cin >> num2;
	cout << "enter the operation (+, - , * , /)" << endl;
	cin >> op;

switch (op)
{
	case '+':
		result = num1 + num2;
		cout << "SUM = " << result <<endl;
		break;
	case '-':
		result = num1 - num2;
		cout << "Subtraction = " << result <<endl;
		break;
	case '*':
		result = num1 * num2;
		cout << "MULTIPLICATION = " << result <<endl;
		break;
	case '/':
		if (num2 != 0)
		{
		div = (float)num1 / num2;
		cout << "DIVISION = " << div <<endl;
		} else {
			cout << "not allowed!" <<endl;
		}
		break;



	default:
		cout <<"cant find the operator";
		break;
}
	system("pause");
	return 0;

}