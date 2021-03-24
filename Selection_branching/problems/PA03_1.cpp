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

//******** Assume all integers are >= 0  ********

int main() {
	int a, b, c, tmp;
	cin >> a >> b >> c;

	int res = -1;	//bad initialization, doesnot work
	//using the lowest -ve integer might have worked

	if (a < 100 && a > res)
		res = a;

	if (b < 100 && b > res)
		res = b;

	if (c < 100 && c > res)
		res = c;

	cout<<res<<"\n";

	return 0;
}

