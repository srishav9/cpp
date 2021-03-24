#include<iostream>
using namespace std;

int main() {
	int salary;
	cin>>salary;

	if (salary < 1000)
		cout<<"you are poor\n";

	if (salary < 1000)
		cout<<"you are poor\n";	//a second reminder that you are poor :P Do something about it! Work hard
	else if (salary >= 1000 && salary < 20000)
		cout<<"good salary\n";
	else
		cout<<"you are rich\n";

	cout<<"Namaste!";

    int num;
	cin>>num;

	if (num < 10)
		cout<<"1 digit\n";
	else if (num < 100)
		cout<<"2 digits\n";
	else if (num < 1000)
		cout<<"3 digits\n";
	else if (num < 10000)
		cout<<"4 digits\n";
	else
		cout<<"5 or more digits\n";

	return 0;
}

