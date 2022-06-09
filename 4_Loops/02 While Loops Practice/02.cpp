//Power functionality
//read 2 numbers X, Y compute X^Y => X*X*X*...X Y times i.e. while Y==0 OR Y > 0 OR Y >= 1
#include<iostream>
using namespace std;
int main() {
	int num, pow;
	cin >> num >> pow;
	int result = 1;
	while (pow >= 1) {
		result *= num;
		--pow;	//going top to bottom.. say Y=5: 5 4 3 2 1
	}
	cout << result;
	return 0;
}
