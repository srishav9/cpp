//Nested Loops:
/*
***************************
Write a prog to read integer T for T test cases
Thn read T integers, for each number N, print sum 0 -> N

***************************
*/
#include<iostream>
using namespace std;

int main() {
	int T;
	cin >> T;

	while (T > 0) {
		int num;
		cin >> num;

		int sum = 0;
		int start = 1;

		while (start <= num) {		//although we can replace this with formula N*(N+1)/2
			sum += start;
			start++;
		}
		--T;	//reducing to mark each completed test case..
		cout << "Sum from 1 to " << num << " = " << sum << "\n";
	}

	return 0;
}
