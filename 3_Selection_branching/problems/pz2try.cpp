/*

Problem #2: Two Intervals Intersection
● Read 4 numbers representing 2 intervals and print their intersection interval. If
they don’t intersect, print -1
● Inputs
	○ 1 6 3 8 ⇒ 3 6
		■ Interval [1 6] and [3 8] only intersects at [3, 6]
		■ Why: interval [1, 6] has numbers: {1, 2, 3, 4, 5, 6}
		■ And: interval [3, 8] has numbers: {3, 4, 5, 6, 7, 8}
		■ So the intersection is {3, 4, 5, 6} = [3, 6]
	○ 1 15 20 30 ⇒ -1

*/

#include<iostream>
using namespace std;
//BRUTEFORCE solution!!
int main() {
    int s1, e1, s2, e2;
    cout<<"Enter: ";
    cin >> s1 >> e1 >> s2 >> e2;
    //no intersection:
    if (e1<s2 || s1>e2){ 
        cout << -1;
    }

    //intersections: 
    //EQUAL:
    if (s1==s2 && e1<e2){
        cout<<"EQUAL"<<endl;
        cout<<s1<<" - "<<e1;
    }
    
    //range 1 < range 2: 3 cases
    // if(s1>s2 && e1<e2) { cout<<s1<<" - "<<e1; }
    // if(s1==s2 && e1<e2) { cout<<s1<<" - "<<e1; }
    // if(s1>s2 && e1==e2) { cout<<s1<<" - "<<e1; }
    //consolidated:
    if (s1>=s2 && e1<=e2){
        cout<<"R1<R2"<<endl;
        cout<<s1<<" - "<<e1;
    }

    //range 1 > range 2:
    if (s2>=s1 && e2<=e1){
        cout<<"R1>R2"<<endl;
        cout<<s2<<" - "<<e2;
    }

    //CROSS:
    if (s1<s2 && e1<e2){
        cout<<"CROSS"<<endl;
        cout<<s2<<"-"<<e1;
    }
    if (s1>s2 && e1>e2){
        cout<<"CROSS"<<endl;
        cout<<s1<<"-"<<e2;
    }

}