/*

Problem #: Print face down left angled triangle
● Read integer N, then print a face down left angled triangle that has N rows.

 */

#include<iostream>
using namespace std;

int main() {
	int N;

	cin >> N;

	int row = N; //going from N to 1
	while (row > 0) {
		int stars_count = 1;

		while (stars_count <= row) {	//same logic as before program we just go from N to 1 now. Hence N ... 3 2 1 stars printed
			cout << '*';
			++stars_count;
		}
		cout << "\n";
		row--;
	}

	return 0;
}

