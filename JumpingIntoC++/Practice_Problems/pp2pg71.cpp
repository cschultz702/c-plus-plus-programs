#include <iostream>
#include <string>

using namespace std;

int main () {
	int password;

	cout << "Enter your numeric password: " << '\n';
	cin >> password;
	
	if ( password == 7592 || password == 70592 )
		cout << "Password accepted. Access granted" << '\n';
	else
		cout << "Incorrect password. Access denied!" << '\n';

	return 0;
}
