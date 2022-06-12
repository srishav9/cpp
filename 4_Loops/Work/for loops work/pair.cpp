/*
Find all pairs that has A+B=SUM,
    A=[1,N] and B=[1,M] So basically 2SUM problem.
*/
#include<iostream>
using namespace std;
int main(){
    int N, M, SUM, count=0;
    cout<<"Enter N M SUM: ";
    cin>>N>>M>>SUM;
    // for(int i=1;i<=N/2;i++){
    //     for(int j=1;j<=M;j++){
    //         if(i+j == SUM){
    //             count++;
    //         }
    //     }
    // }
    // cout<<"Pairs possible: "<<count;
/*
    The second loop is basically useless as you are iterating to get just one number!!
    Instead get the required number (SUM-i) and check if it is in range [1,M]!!
    Thats it!!
*/
    for(int i=1;i<=M/2;i++){
        int res=SUM-i;
        //check range:
        if(res >= 1 && res <= M){
            count++;
        }
    }
    cout<<"Pairs possible: "<<count;
}