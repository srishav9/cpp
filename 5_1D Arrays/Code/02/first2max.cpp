#include<iostream>
using namespace std;

int main() {
    const int size=10;
	int numbers[size], id1, id2;

	for (int i = 0; i < size; ++i)
		cin >> numbers[i];
    
    if (numbers[0] >= numbers[1])
		id1 = numbers[0], id2 = numbers[1];
	else
		id1 = numbers[1], id2 = numbers[0];

    for(int i=0; i<size; i++){
        if(id1<numbers[i]){
            id2=id1, id1=numbers[i];
        }
        else if(id2<numbers[i]){
            id2=numbers[i];
        }
    }


	cout<<id1<<" "<<id2;

	return 0;
}

