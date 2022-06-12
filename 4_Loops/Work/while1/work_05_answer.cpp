/*
 *Problem #5: Special Average
● Read integer N, followed by reading N numbers. Print 2 values
	○ The average of the numbers in odd positions (1st, 3rd, 5th, …)
	○ The average of the numbers in even positions (2nd, 4th, 6th, …)
● Input
	○ 6 10 100 20 200 30 600
● Output
	○ 20 300
● Explantation
	○ (10+20+30)/3 = 20
	○ (100+200+600)/3 = 300
 
 *More Test cases
 * Input: 7 11 101 21 201 31 602 78
 *
 * Output: 35.25 301.333
 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	// Use doubles to: 1) allow any values 2) get average correctly
	double even_sum = 0, odd_sum = 0;
	int even_count = 0, odd_count = 0;

	int cnt = 1;
	while (cnt <= N) {
		double value;	
		cin >> value;

		if (cnt % 2 == 0){	// even position
			even_sum += value;
			even_count++;
		}
		else				// odd position
			odd_sum += value, odd_count++; //above 2 lines can be written in a single line.
		cnt++;
	}

	cout <<odd_sum / odd_count << " " << even_sum / even_count << "\n";

	return 0;
}

