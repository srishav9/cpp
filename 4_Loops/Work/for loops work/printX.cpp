#include<iostream>
using namespace std;

int main() {
	int n=5;
    //cin>>n;
    //Notice we are doing this as filling up a 2D matrix of nxn size.
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j || n-i-1==j){ //diagonal conditions
                cout<<"*";
            }
            else{ //You dont have to care about spaces anymore, just fill in rest placess with spaces.
                cout<<" ";
            }
        }
        cout<<endl;
    }	
	return 0;
}

