#include<iostream>
using namespace std;

int main() {
	cout << 25 / 5 << "\n";
	cout << 26 / 5 << "\n";
	cout << 27 / 5 << "\n";
	cout << 28 / 5 << "\n";
	cout << 29 / 5 << "\n";
	cout << 30 / 5 << "\n";
	cout << 31 / 5 << "\n";
	cout << "******\n";
	cout << 25 / 5.0 << "\n";
	cout << 26 / 5.0 << "\n";
	cout << 27.0 / 5 << "\n";
	cout << 28.0 / 5.0 << "\n";
	cout << 29.0 / 5.0 << "\n";
	cout << 30.0 / 5.0 << "\n";
	cout << 31.0 / 5 << "\n";

    int num1 { 12345 };

	cout<<num1/10<<"\n";
	cout<<num1/100<<"\n";
	cout<<num1/1000<<"\n";
	cout<<num1/10000<<"\n";
	cout<<num1/100000<<"\n";

	cout<<"*********\n";

	cout<<num1/10.0<<"\n";
	cout<<num1/100.0<<"\n";
	cout<<num1/1000.0<<"\n";
	cout<<num1/10000.0<<"\n";
	cout<<num1/100000.0<<"\n";

    // 8/3 = 2.6666666666666 ..... 6666
	double num {8/3.0};

	cout<<num<<"\n";

	int res = (int)num;	// C casting (style)
	cout<<res<<"\n";

	char ch {'a'};
	int ch_value { (int)ch };

	cout<<ch_value<<"\n";

	cout<<(int)'a'<<" "<<(int)'z'<<"\n";
	cout<<(int)'A'<<" "<<(int)'Z'<<"\n";

	return 0;
}

