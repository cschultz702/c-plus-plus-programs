#include <iostream>
#include <string>

using namespace std;

int main () {
	int age_one;
	int age_two;
	cout << "Enter two user's ages. First, enter the first user's age: " << "\n";
	cin >> age_one;
	cout << "Now, enter the second user's age: " << '\n';
	cin >> age_two;

	if ( age_one > age_two )
		cout << "The first user is older than the second user." << '\n';
	else if ( age_two > age_one )
		cout << "The second user is older than the first user." << '\n';
	else if ( age_one == age_two )
		cout << "Both users are the exact same age." << '\n';
	if ( age_one > 100 && age_two > 100 )
		cout << "Wow! Both of you are older than 100! What a long life!" << '\n';


	return 0;
}
