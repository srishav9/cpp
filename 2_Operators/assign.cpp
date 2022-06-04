#include<iostream>
using namespace std;

int main() {
	int num {5};

	num = num + 1;
	cout<<"num1 "<<num<<"\n";	// 6

	num += 1;	// same as num = num+1
	cout<<"num1 "<<num<<"\n";	// 7

	num *= 2;	// same as num = num * 2
	cout<<"num1 "<<num<<"\n";	// 14

	num = num - (-2);
	cout<<"num1 "<<num<<"\n";	// 16

	num -= 10;	// num = num - 10
	num /= 2;	// num = num - 2
    
    //Comma operator:
    //evaluates lt to rt and then returns the rightmost item
    int x=20;
    cout<<(10,x=1,num=30+x,69,9)<<" "<<num;   //9 31

	return 0;
}

