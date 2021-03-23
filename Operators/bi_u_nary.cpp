#include<iostream>
using namespace std;

int main() {
	
    int x {6}, y {3};

	cout << x + y << "\n";			// 9
	cout << x + 2 * y - 1 << "\n";	// 11
	cout << x / y << "\n";			// 2

	int z1 = (x + y) / 3 / 3;		// 1
	cout << z1 << "\n";
    
    int x1 {6};
	int y1 {-x1};	// -6

	bool male {true};
	bool female { !male }; // False

	// 1 0
	cout << (!0) <<" "<<(!1);

	return 0;
}
