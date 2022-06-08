/*

Problem #3: Maximum but constrained
● Given 3 integers, you have to find the biggest one of them which is < 100.
	○ Print -1 if no such number
● Inputs
	○ 22 90 115 ⇒ 90
		■ Here [20 90] are only < 100. Maximum (20, 90) = 90
	○ 200 300 400 ⇒ -1
		■ All of them are > 100, so no answer
	○ 50 100 150 ⇒ 50
		■ Only 50 is < 100.
	○ 10 30 20 ⇒ 30
		■ The 3 numbers < 100, so their max is 30

*/

#include<iostream>
using namespace std;


int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1; //bad initialization

	// The next 3 if conditions: let's try to initalize res correctly, with any of the valid input
	if (a < 100)
		res = a;

	if (b < 100)
		res = b;

	if (c < 100)
		res = c;

	// The next 3 if conditions: let's get the valid max
	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}

// Try -20 -10 -30
