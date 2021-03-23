/*
How does C++ compare strings?
Assume all are lower case. 
The answer is exactly as your English Dictionary
- Letter by letter is compared
- If a word has a smaller letter: it appears first
-- E.g. love < zebra as l is before z
-- E.g. love > long as lo are common, but v > n
- If one word is done in comparison: the smaller in length comes first
-- E.g. counter < counterattack
What about a mix of upper and lower cases?
- Upper letters are smaller than small letters
- A < a
- A < z
- Z < a
- loVE < love       (as V < v)
- loVe < long       (as V < n)
Overall: letter by letter comparison and decision based on which letter is smaller
*/

#include<iostream>
using namespace std;

int main() {

    cout << (3 > 5) << "\n";
	cout << (3 < 5) << "\n";
	cout << (3 == 5) << "\n";
	cout << (3 >= 5) << "\n";
	cout << (3 >= 3) << "\n";
	cout << (3 == 3) << "\n";
	cout << (3 > 1) << "\n";
	cout << (3 != 4) << "\n";
	cout << (3 != 3) << "\n";

	double a { 3.0 / 7.0 };
	double b { 1 + 3.0 / 7.0 - 1 };

	//0.428571 0.428571 0 SURPRISE SOMETIMES not 1
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	a = 5.0, b = 4.99999999999999999;

	//5 5 1 SURPRISE SOMETIMES not 0
	cout<<a<<" "<<b<<" "<<(a == b)<<"\n";

	// Never compare doubles for equality directly

    int x, y;
	x = 3, y = 5;

	bool result = (x > y);
	cout << result << "\n";

	result = (x < y);
	cout << result << "\n";

	cout << !result << "\n";
	cout << !(x < y) << "\n";

    string name1 { "ali" }, name2 { "ali mostafa" };
	string name3 {"ziad"}, name4 {"ali"}, name5 {"ALI"};

	cout<<(name1 < name2) <<"\n";
	cout<<(name1 > name3) <<"\n";
	cout<<(name1 != name4) <<"\n";
	cout<<(name1 == name4) <<"\n";

	cout<<(name1 == name5) <<"\n";
	cout<<(name1 > name5) <<"\n";

	return 0;
}
