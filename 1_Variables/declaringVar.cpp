#include<iostream>
using namespace std;

int main()
{
	// int for integer
	int age = 24;

	cout<<age<<"\n";

	// double used for fractions (or float)
	double weight = 56.5;

	cout<<"My weight is "<<weight<<"\n";

    // Declare variable in memory. Garbage value
	int number1;
	int number2;

	// Assign values (in memory(
	number1 = 30;
	number2 = 10;

	// Get values
	cout<<number1 + number2<<"\n";
	cout<<number1 - number2<<"\n";

	// Reassign value
	number1 = 50;
	cout<<"2n+1 = "<<number1 * 2 + 1<<"\n";

	//Initialization:
	int my_age;	//uninitialized; Garbage. DON'T
	int my_age1 = 24;	//C-style, popular
	int age3 (24);	//constructor initialization
	int age4 {24};	//modern c++ initialization

	char group = 'X';

	bool is_male = true;
	bool like_football = false;

	string name = "rishav";

	cout<<"I am "<<age<<" years old\n";
	cout<<"My weight is "<<weight<<"\n";

	cout<<"my name is "<<name
		<<" and group "<<group<<"\n"
		<<is_male<<" "<<like_football<<"\n";	//prints 1 0 i.e. internally bool is just [0,1]
    
    int a = 10;
	int b = 21;

	int i1 = a + b / 2;		// 20
	int i2 = (a + b) / 2;	// 15

	double x = 10.0;
	double y = 21;

	double d1 = x + y / 2.0;	// 20.5	its going to divide first
	double d2 = (x + y) / 2.0;	// 15.5

	return 0;
}