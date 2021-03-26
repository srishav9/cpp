//Now we can write complex logic that requires repetition
//Line: 9 11 to run the loop
//Low to high: 1+2+3+4+5
#include<iostream>
using namespace std;

int main() {
	int x = 1;
	int sum = 0;
	while (x < 6){
		sum += x;
		++x;
	}
	cout<<sum;
	return 0;
}
