#include<iostream>
using namespace std;

int main() {
	int count = 0;

	for (int x = 50; x <= 300; ++x) {
		for (int y = 70; y <= 400; ++y) {			//can optimise this, say x is 100 then all y conditions from 70 to 99 are failing
			if (x < y && ((x + y) % 7 == 0)) {		//if we can somehow update y initialisation everytime x is incremented we will be better off!!
				//cout<<x<<" "<<y<<" "<<x+y<<"\n";
				++count;
			}
		}
	}
	cout<<count<<"\n";

	return 0;
}

