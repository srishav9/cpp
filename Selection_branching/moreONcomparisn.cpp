#include<iostream>
using namespace std;

int main() {
	int num1, num2, num3;

	cin >> num1 >> num2 >> num3;

	if (num1 < num2 && num1 < num3)
		cout << num1 << "\n";
	else if (num2 < num1 && num2 < num3)
		cout << num2 << "\n";
	else
		cout << num3 << "\n";

	//A scalable approach: Later on we see them with loops

    cin >> num1 >> num2 >> num3;
	int answer = num1;

	if (answer > num2)
		answer = num2;

	if (answer > num3)
		answer = num3;

	cout << answer << "\n";

	return 0;
}