#include<iostream>
using namespace std;
int main(){
    int N=4, i=1;
    while(i<=N){
        int j=1;
        while(j<=N-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=2*i-1){
            if(j==1 || j==2*i-1){
                cout<<"1";
            }else{
                cout<<i;
            }
            j++;
        }
        cout<<"\n";
        i++;
    }
    i=N-1;
    while(i>=1){
        int j=1;
        while(j<=N-i){
            cout<<" ";
            j++;
        }
        j=1;
        while(j<=2*i-1){
            if(j==1 || j==2*i-1){
                cout<<"1";
            }else{
                cout<<i;
            }
            j++;
        }
        cout<<"\n";
        i--;
    }
}