#include<iostream>
using namespace std;

int main() {
	
	int num;
	cin>>num;

	if (num == 10)
	{
		int x1 = 3;
		cout<<"10 is lucky number\n";
		cout<<"also "<<2*num + x1<<"\n";
	}
	//cout<<x1;	# not visible here!

    int salary;

	cout<<"Enter salary: ";
	cin>>salary;

	if (salary < 1000)
	{
		cout<<"Enter age: ";
		int age;
		cin>>age;

		if (age < 22)
			cout<<"You are still young.";
	}
	else
		cout<<"you are rich\n";

	//cout<<age; // NOT visible outside scope

	// Since C++17
	int x = 11;
	if (x % 2 == 1)
		cout << x << " is odd\n";
	else if (x % 2 == 0)
		cout << x << " is even\n";

	cout << x << " is visible here but no need\n";

	// y visible only in if-else block
	if (int y = 10; y % 2 == 1)
		cout << y << " is odd\n";
	else if (y % 2 == 0)
		cout << y << " is even\n";

	return 0;
}

