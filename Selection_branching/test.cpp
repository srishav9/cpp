/*
Task:
    IF Even: 
        print last digit
    IF Odd:
        if num < 1000:
            print last 2 digits
        if num > 1000 and num < 1000000:
            print last 4 digits
        Otherwise:
            print it's -ve value 
    444 => even => 4
    177 => 77
    566969 => 6969
    1000090 => -1000090

*/

#include<iostream>
using namespace std;

int main() {
	int num;
	cin >> num;

	bool is_even = (num % 2 == 0);

	if (is_even)    
		cout << num % 10 << "\n";
	else {
		if (num < 1000)
			cout << num % 100 << "\n";
		else if (num < 1000000)
			cout << num % 10000 << "\n";
		else
			cout << -num << "\n";
	}
	return 0;
}