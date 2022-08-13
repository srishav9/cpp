#include<iostream>
using namespace std;

int main() {
	int n, numbers[200];	// max expected size
//input
	cin>>n;
	for (int i = 0; i < n; ++i)
		cin >> numbers[i];

//find maximum index element
	int maximum_idx = 0;
	for (int i = 1; i < n; ++i)
		if (numbers[maximum_idx] < numbers[i])
			maximum_idx = i;
//save max and replace with smallest
//now next max is the new max
	int max1 = numbers[maximum_idx];
	numbers[maximum_idx] = -1000000;	// assume good value

	maximum_idx = 0;	// same code again
	for (int i = 1; i < n; ++i)
		if (numbers[maximum_idx] < numbers[i])
			maximum_idx = i;

	int max2 = numbers[maximum_idx];
	cout << max1 << " " << max2;
	return 0;
}

//optimize next