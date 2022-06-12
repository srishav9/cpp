/* Problem #3 extended:
	Read integer N, then print a triangle that has N rows 
	then try printing BARFI also*/
//You need to focus on the number of spaces and stars that appear in a line!!

#include<iostream>
using namespace std;
int main() {
	int N=5, i = 1;
	//cin >> N;
	while (i <= N) {
		int j = 0;
		while(j < N-i)
			cout <<' ',++j;
		j=1;
		while (j <= 2*i-1)
			cout<<'*',++j;
		cout<<"\n";
		i++;
	}i = N-1;
	while (i >= 1) {
		int j = 0;
		while(j < N-i)
			cout <<' ',++j;
		j=1;
		while (j <= 2*i-1)
			cout<<'*',++j;
		cout<<"\n";
		i--;
	}
	return 0;
}