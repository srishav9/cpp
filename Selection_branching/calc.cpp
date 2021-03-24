#include<iostream>
using namespace std;

int main() {
	// Good choice for a number here is double
	double num1, num2;
	char operation;

	cin >> num1 >> operation >> num2;

	if (operation == '+')
		cout << num1 + num2 << "\n";

	else if (operation == '-')
		cout << num1 - num2 << "\n";

	else if (operation == '*')
		cout << num1 * num2 << "\n";

	else
		cout << num1 / num2 << "\n";

    cout<<"Check smaller:";
	cin >> num1 >> num2;
	if (num1 < num2)
		cout << num1 << "\n";
	else
		cout << num2 << "\n";

    int n1, n2, n3;

	cin >> n1 >> n2 >> n3;

	if (n1 < n2) {
		// Then either n1 or n3 is the answer
		if (n1 < n3)
			cout << n1 << "\n";
		else
			cout << n3 << "\n";
	} else	// Then either n2 or n3 is the answer
	{
		if (n2 < n3)
			cout << n2 << "\n";
		else
			cout << n3 << "\n";
	}
    
	return 0;
}

