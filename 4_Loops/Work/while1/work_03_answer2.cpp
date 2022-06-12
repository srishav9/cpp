/* Problem #3 extended:
	Read integer N, then print a triangle that has N rows 
	then try printing BARFI also*/
#include<iostream>
using namespace std;
int main() {
	int N=5, i = 1;
	//cin >> N;
	while (i <= N) {
		int j = 1, k = 0, count=0;
		while (j <= 2*i-1 || k < N-i){
			if(k < N-i)  cout <<' ',++k;
			else  cout<<'*',++j;
		}
		cout<<"\n";
		i++;
	}i=N-1;
	while (i >= 1) {
		int j = 1, k = 0, count=0;
		while (j <= 2*i-1 || k < N-i){
			if(k < N-i)  cout <<' ',++k;
			else  cout<<'*',++j;
		}
		cout<<"\n";
		i--;
	}
	return 0;
}