/*
 * DIRECTIONS: Write a program that outputs the results of the 12 days of Christmas
 * 	       using switch-case
 * 	       (Hint: You might want to use fall-through cases)
 */

// CREATED BY: Christian Schultz ON: 07/07/2017 (Jul 7, 2017)


#include <iostream>
using namespace std;

int main () {
	
	cout << "On the first day of Christmas, my true love gave to me:" << endl;
	cout << "A partridge in a pear tree." << endl << endl;
	
	for (int day = 2; day <= 12; day++) {

		cout << "On the " << day << " day of Christmas, my true love gave to me:" << endl;
	
		switch (day) {
	
		case 12:
			cout << "Twelve Drummers Drumming," << endl;
		case 11:
			cout << "Eleven Pipers Piping," << endl;
		case 10:
			cout << "Ten Lords-a-Leaping," << endl;
		case 9:
			cout << "Nine Ladies Dancing," << endl;
		case 8:
			cout << "Eight Maids a-Milking," << endl;
		case 7:
			cout << "Seven Swans a-Swimming," << endl;
		case 6:
			cout << "Six Geese a-Laying," << endl;
		case 5:
			cout << "Five GOLDEN RINGS!," << endl;
		case 4:
			cout << "Four Calling Birds," << endl;
		case 3:
			cout << "Three French Hens," << endl;
		case 2:
			cout << "Two Turtle Doves," << endl;
		case 1:
			cout << "and a partridge in a pear tree." << endl << endl;
			break;
		default:
			return 0;
			break;
		}
	}
}

// PROBLEMS I RAN INTO:
// 1 - Can't figure out how to have the lyrics state "first" and "second"..."eleventh", "twelth",
//     because I'm using a 'for loop' where I have an integer, and the variable that integer is
//     associated with, "day", increases by one each loop, and I use that variable to determine
//     the day on the very first line of each "set".
//     i.e. I have: cout << "On the " << day << "day of Christmas... where day represents an integer
//
//     SOLUTION? 
//     If I could somehow declare a string, and associate each number, 1-12, with string: "first", "second",
//     "third", etc... 
//     Then I could use the variable that represents the string to output the correct lyrics the song contains.
//
// 2 - On the first set of lyrics, it should simply state that "gave to me a partridge in a pear tree."
//     However, since I have a 'fall-through' case, the first set reads "On the first day of Christmas my
//     true love gave to me AND a partridge in a pear tree." <-- How to omit the 'AND' on this first set?
//
//     SOLUTION?
//     Maybe the first "set" out the of 12 "sets of lyrics" should be simple data output placed before and
//     OUTSIDE of the loop, then start the loop so it starts reading from case #2.
/*
* CHANGES MADE:
* Editted the code to reflect and correct problem #2 under "Problems I Ran Into," directly above this text.
* Created an independent output statement for the first day of Christmas, and started the for-loop on the "2" day, therefore
* eliminiting the obvious grammar error/incorrect lyrics on the "first day of Christmas...gave to me AND a partridge..."
*/
