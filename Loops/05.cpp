#include<iostream>
using namespace std;

int main() {
	int x, y;
	while (true) {		//always true
		cin >> x >> y;	//reading two integers
		if (y == 0){	//until y(2nd number) is 0
			cout<<"Y is zero!!\n";
			break; //stop the loop here
		}
		cout << x / y << "\n";	//print their division
	}
	cout<<"Bye\n";
	return 0;
}
