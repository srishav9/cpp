#include<iostream>
using namespace std;
int main(){
    int T;
    cout<<"Enter tests: ";
    cin>>T;
    while(T>0){
        int itr, cnt=1, sum=0;
        cout<<"Enter N ints: ";
        cin>>itr;
        while(itr>0){
            int num, prod=1, i=0;
            cin>>num;
            while(i<cnt){
                prod = prod*num;
                i++;
            }
            sum += prod;
            cnt++;
            itr--;
        }
        cout<<"Special sum is: "<<sum<<" "<<endl;
        T--;
    }
}