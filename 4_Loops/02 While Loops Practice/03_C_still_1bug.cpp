
/*
INT max value: 2147483647	
	min value: -2147483648	=> *-1 will be 2147483648 which will be greater then C++ limit
*/
#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int tnum = num;	//temporarily storing num data for further use.
	int digits = 0;

	if (num == 0)
		digits = 1;
	else if (num == -2147483648)	//this will cause overflow for +ve integer of this magnitude (Range -2147483648 to 2147483647)
		digits = 10;
	else {
		if (num < 0)	//taking care of negative numbers..BUT only this wil not do! One more bug got introduced now.. Hence the 'else if' case :)
			num = -num; // minus of "-2147483648" will cause eoverflow!!

		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	//cout << "# of digits of "<<num<<" is "<<digits;		//again here using num will not give us the correct output as it has become 0 now.
	cout << "# of digits of "<<tnum<<" is "<<digits;
	return 0;
}

/*
all BUGS taken care of now this code runs for all numbers(INT Range)
	This shows even a simple code can be tedious to work with considering all of its test cases.
*/