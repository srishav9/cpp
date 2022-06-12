/*

Problem #1: Print Range
● Given a starting number X and an ending number Y, print all numbers
between X and Y inclusive, each on a line.
● Input 3 7
● Output
○ 3
○ 4
○ 5
○ 6
○ 7

*/
#include<iostream>
using namespace std;

int main() {
	int start, end;

	cin>>start>>end;

	while(start <= end)
	{
		cout<<start<<"\n";
		start++;
	}

	return 0;
}

