#include<iostream>
using namespace std;

int main() {

	int a, b;

	// ++a: prefix increment: increment then assign
	a = 10;
	b = ++a;
	cout<<a<<" "<<b<<"\n";	// 11 11

	a = 10;
	cout<<++a<<"\n";	// 11

	// a++: postfix increment: assign then increment
	a = 10;
	b = a++;
	cout<<a<<" "<<b<<"\n";	// 11 10

	a = 10;
	cout<<a++<<"\n";	// 10

	a = 10;
	cout<<(a++)<<"\n";	// 10

	a = 10;
	cout<<a++ + ++a<<"\n";	// undefined


	cout<<endl<<endl;
	int a1, b1;

	// --a1: prefix decrement: decrement then a1ssign
	a1 = 10;
	b1 = --a1;
	cout<<a1<<" "<<b1<<"\n";	// 9 9

	a1 = 10;
	cout<<--a1<<"\n";	// 9

	// a1--: postfix decrement: assign then decrement
	a1 = 10;
	b1 = a1--;
	cout<<a1<<" "<<b1<<"\n";	// 9 10

	a1 = 10;
	cout<<a1--<<"\n";	// 10

	a1 = 10;
	cout<<(a1--)<<"\n";	// 10

	a1 = 10;
	cout<<a1-- + --a1<<"\n";	// undefined

	return 0;
}

