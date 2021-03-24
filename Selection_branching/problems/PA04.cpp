/*

Problem #4: Conditional Count
● Write a program that reads number X, then other 5 numbers. Print 2 values:
	○ How many numbers <= X
	○ How many numbers > X
	○ Any relation between these 2 outputs?
● Inputs
	○ 10 300 1 5 100 200
	○ Output: 2 3
	○ Explantation
	○ 2 numbers (1, 5) are <= 10
	○ 3 numbers (100, 200, 300) are > 10

*/

#include<iostream>
using namespace std;

int main() {
	int x, a1, a2, a3, a4, a5;

	cin >> x >> a1 >> a2 >> a3 >> a4 >> a5;

	int cnt = 0;

	cnt += (a1 <= x);
	cnt += (a2 <= x);
	cnt += (a3 <= x);
	cnt += (a4 <= x);
	cnt += (a5 <= x);

	cout << cnt << " " << 5 - cnt << "\n";

	return 0;
}

