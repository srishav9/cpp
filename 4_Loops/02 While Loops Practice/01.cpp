//read an integer X, find all numbers divisible by 3 fro 1 to X
#include<iostream>
using namespace std;

int main() {
	int end, start = 1; //1 to X so start =1 an d we take X by input
	cin >> end;
	while (start <= end) {  //OR (start < end+1)
		if (start % 3 == 0)
			cout << start << "\n";	//3 6 9 12 15 ...
		start += 1;
	}
	return 0;
}
