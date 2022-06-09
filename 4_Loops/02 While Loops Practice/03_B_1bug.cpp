#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	int digits = 0;

	if (num == 0) //addressing the previous BUG2
		digits = 1;
	else {
		while (num > 0) {
			digits += 1;
			num = num / 10;
		}
	}
	cout << digits;
	return 0;
}

/*
Still 1 bug remains:
Bug1: It doesnot care about negative numbers!
*/