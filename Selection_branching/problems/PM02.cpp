/*

Problem #2: Find Maximum up to 10
● Read an integer N (2 <= N <= 10)
● Then read N integers, find which of them has the biggest value and print it.
● Inputs
	○ 5 1 3 2 4 2 ⇒ 4
		■ 5 means read 5 integers
		■ Then we read them [1 3 2 4 2]. Their maximum is 4
	○ 10 1 67 -9 88 -45 129 90 65 77 34 ⇒ 129
		■ Same as last homework. This time we are given first N (10)

*/

#include<iostream>
using namespace std;

int main() {
	int cnt, result, num;

	cin>>cnt;

	cin>>result;	// First number
	cnt -= 1;

	// Read 9 times and maximize,	Later in while loops this wil look easy
	//9 times because it is the constraint for cnt(N) given.
	//Notice the writing style.. just good to understand XD
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}
	if(cnt > 0)		{cnt -=1;		cin>>num;	if(result < num)	result = num;		}

	cout<<result;

	return 0;
}

