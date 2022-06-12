/*
 *Problem #5: Special Average
● Read integer N, followed by reading N numbers. Print 2 values
	○ The average of the even numbers
	○ The average of the odd numbers
● Input
	○ 6 10 3 20 9 30 3
● Output
	○ 20 5
● Explantation
	○ (10+20+30)/3 = 20
	○ (3+9+3)/3 = 5
 */

#include<iostream>
using namespace std;

int main() {
	int N,num,ecnt=0,ocnt=0;
    double esum=0,osum=0;
	cin >> N;
    while(N>0){     //OR start from i=0 while(i<N) step:i++
        cin>>num;
        if (num%2 == 0){    //Even
            ecnt++;
            esum += num;
        }
        else                //Odd
            osum += num, ocnt++;
        
        N--;
    }
    cout<<"Average of even numbers:"<< esum/ecnt<<endl;
    cout<<"Average of odd numbers:"<<osum/ocnt;
	return 0;
}