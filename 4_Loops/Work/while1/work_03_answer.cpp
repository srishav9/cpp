/*
 * 
 Problem #3: Print left angled triangle
● Read integer N, then print a left angled triangle that has N rows

now for inverted do the opposite!
go from row=N to 1. i.e. row--; 

 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int row = 1;  //going from 1 to N=> 1 2 3 ... N stars printed.
	while (row <= N) {
		int stars_count = 1;

		while (stars_count <= row) {	//LOGIC: row is 1 print 1 star, row 2 print 2 star  and so on... used i,j normally
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row++;
	}

	return 0;
}

