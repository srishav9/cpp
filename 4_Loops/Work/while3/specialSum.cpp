#include<iostream>
using namespace std;
int main(){
    int T;
    cout<<"Enter tests: ";
    cin>>T;
    while(T>0){
        int N, cnt=1, sum=0;
        cout<<"Enter N ints: ";
        cin>>N;
        while(N>0){
            int num, prod=1, i=0;
            cin>>num;
            while(i<cnt){
                prod *= num, i++;
            }
            sum += prod;
            cnt++;
            N--;
        }
        cout<<"Special sum is: "<<sum<<" "<<endl;
        T--;
    }
}