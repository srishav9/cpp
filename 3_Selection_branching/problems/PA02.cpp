/*

Problem #2: Sort 3 numbers
● Given 3 integers, sort (order) them in ascending order and print them .
● Inputs ⇒ outputs
	○ 1 2 3 ⇒ 1 2 3
	○ 1 3 2 ⇒ 1 2 3
	○ 2 1 3 ⇒ 1 2 3
	○ 2 3 1 ⇒ 1 2 3
	○ 3 1 2 ⇒ 1 2 3
	○ 3 2 1 ⇒ 1 2 3
● Do you notice there are only 6 ways to permutate 3 numbers!

*/

#include<iostream>
using namespace std;

int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	if (b < a) { // Swap them

		tmp = a;
		a = b;
		b = tmp;
	}
	// Now a, b are correct

	if (c < b) { // Swap them

		tmp = b;
		b = c;
		c = tmp;

		// Now b, c are correct
		// But a, b may not be again

		if (b < a) {	// Swap them
			tmp = a;
			a = b;
			b = tmp;
		}
	}
	cout<<a<<" "<<b<<" "<<c<<"\n";

	return 0;
}

