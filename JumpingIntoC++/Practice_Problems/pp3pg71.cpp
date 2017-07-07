#include <iostream>

using namespace std;

int main () {
	double firstArgument;
	double secondArgument;

	cout << "Enter the first argument: " << '\n';
	cin >> firstArgument;
	cout << "Enter the second argument : " << '\n';
	cin >> secondArgument;

	cout << firstArgument << " + " << secondArgument << " = " << firstArgument + secondArgument << '\n';
	cout << firstArgument << " - " << secondArgument << " = " << firstArgument - secondArgument << '\n';
	cout << firstArgument << " * " << secondArgument << " = " << firstArgument * secondArgument << '\n';
	cout << firstArgument << " / " << secondArgument << " = " << firstArgument / secondArgument << '\n';

	return 0;
}
