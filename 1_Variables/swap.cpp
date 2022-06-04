/*
Swapping 2 numbers!

Write a program that reads 2 variables num1 and num2
E.g. say we read num1 = 7 and num2 = 231

Target: we want swap the values of Num1 and Num2?
Swap means exchange

So Num1 takes value 231 and Num2 takes value 7
*/

#include<iostream>
using namespace std;

void swap3var(int num1, int num2, int num3){
    int temp = -1;
	// Circulate them instead of direct 2 swaps
	temp = num1;
	num1 = num2;
	num2 = num3;
	num3 = temp;
	cout<<num1<<" "<<num2<<" "<<num3<<"\n";
}

int main() {
	
    int num1, num2, temp;
	cin>>num1>>num2;
	// Swap operation in 3 steps using temp as temporary storage
	// 1) put num2 value in temp
	temp = num2;	// now num3 is 231
	// put num1 in num2
	num2 = num1;		// now num2 is 7
	// get the temp value in num3 in num1
	num1 = temp;
	cout<<num1<<" "<<num2<<endl;	// 231 7
	return 0;
}