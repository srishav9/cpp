//Read an Integer and count the number of Digits in it!!

//This code has 2 bugs though!
#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	int digits = 0;
	while (num > 0) {		//BUGGy LiNE
		digits += 1;
		num = num / 10;
	}
	cout<<digits;
	return 0;
}

/*
Bug1: It doesnot care about negative numbers!
Bug2: It doesnot care about 0 as in INPUT!
Let's address them in the next code
*/
