#include<iostream>
using namespace std;
//High to low: 5+4+3+2+1
int main() {
	int x = 5;
	int sum = 0;
	while (x >= 0){
		sum += x;
		x--;
	}
	cout<<sum;
	return 0;
}
