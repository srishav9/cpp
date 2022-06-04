/*

TASK:
	If n < 10K say small
	Otherwise	sum last 3 digits of the number
		if sum is odd	say great number
		Otherwise if sum is even
			if any of the last three digits is odd say good number
			Otherwise, say this is a bad number

*/

#include<iostream>
using namespace std;

int main() {
	int n;
	cin>>n;

	if (n < 10000)
		cout<<"this is a small number\n";
	else
	{
		int digit1 = n%10;
		n = n/10;
		int digit2 = n%10;
		n = n/10;
		int digit3 = n%10;	// old value of n gone

		int sum = digit1+digit2+digit3;

		if ((sum%2) != 0)	// odd ****
			cout<<"this is a great number\n";
		else
		{
			bool is_digit1_odd = (digit1 % 2 == 1);	//because a digit cannot be -ve
			bool is_digit2_odd = (digit2 % 2 == 1); //athough we could still have used
			bool is_digit3_odd = (digit3 % 2 == 1); //digit%2 != 0

			if (is_digit1_odd || is_digit2_odd || is_digit3_odd)
				cout<<"this is a good number\n";
			else
				cout<<"this is a bad number\n";
		}
	}
	return 0;
}

/*
****
comparing odd as num%2 == 1 has a problem
It only works perfectly for +ve numbers
For negative numbers say -1 it gives -1 as remainder
But since we are just comparing with 1 we dont get the expected result!!
patch:	num%2 == 1 || num%2 == -1
Instead, simply we can write num%2 != 0 for odds
*/