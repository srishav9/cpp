#include<iostream>
using namespace std;

int main() {
	
	int num;

	cout<<"Enter your lucky number\n";

	cin>>num;

	cout<<"********\n";
	cout<<2 * num + 1<<"\n";

	int a, b;

	cout << "Enter 2 numbers\n";

	cin >> a >> b;

	cout << a * b << " " << a + b << "\n";
	
	int age;
	cout<<"Enter age: ";
	cin>>age;

	double weight;
	cout<<"Enter weight: ";
	cin>>weight;

	char group;
	cout<<"Enter group: ";
	cin>>group;

	string name;
	cout<<"Enter name: ";
	cin>>name;

	cout<<"I am "<<name<<" belongs to group "<<group<<"\n";
	cout<<"My weight "<<weight<<" and age "<<age;

	return 0;
}
