/*
*The values are undefined!
*USE: g++ fix.cpp -Wall -o fix to see the warnings
*/

#include<iostream>
using namespace std;

int main() {
/*
all are Undefined operations
say X + Y is an exp as such X and Y are exp themselves
now till C++17 came the order of execution is not well defined!
Hence these are considered to be undefined.
*/

	int a1;
    a1 = 10;
	cout<<a1-- + --a1<<"\n";
    a1 = 10;
    cout<<--a1 + a1--<<"\n";
    a1 = 10;
    cout<<a1++ + ++a1<<"\n";          
    a1 = 10;
    cout<<++a1 + a1++<<"\n";
    a1 = 10;
    cout<<a1++ + a1++ + a1++<<"\n";
    a1=10;
    int b=0;
    ++b=a1;
    cout<<b<<endl;
    // b++=a1;  gives error!! no address for b++ to set a value
    // cout<<b;
    a1=10;
    cout<<a1<<" "<<++a1<<endl;  //undefined
    a1=10;
    cout<<a1<<" "<<a1++;    //again undefined untill C++17 came
	return 0;
}


// fix.cpp: In function 'int main()':
// fix.cpp:8:10: warning: operation on 'a1' may be undefined [-Wsequence-point]
//   cout<<a1-- + --a1<<"\n";
//         ~~^~
// fix.cpp:10:11: warning: operation on 'a1' may be undefined [-Wsequence-point]
//      cout<<--a1 + a1--<<"\n";
//            ^~~~
// fix.cpp:12:13: warning: operation on 'a1' may be undefined [-Wsequence-point]
//      cout<<a1++ + ++a1<<"\n";
//            ~~^~
// fix.cpp:14:11: warning: operation on 'a1' may be undefined [-Wsequence-point]
//      cout<<++a1 + a1++;
