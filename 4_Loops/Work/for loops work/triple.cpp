/*
Find all triples that has A+B<=C,
    A=[1,N], B=[A,M] and C=[1,W]  So basically 2SUM problem again but with range.
*/
#include<iostream>
using namespace std;
int main(){
    int N, M, W, cnt=0;
    cout<<"Enter N M W: ";
    cin>>N>>M>>W;
    for(int i=1;i<=N;++i){
        for(int j=i;j<=M;++j){      //B lies in between A and M hence start loop from i.
            int k = i+j;
            if(k>=1 && k<=W)
                cnt += W - k + 1; //adding range k to w. **To understand better start with the bruteforce approach.
        }
    }
    cout<<"Pairs possible: "<<count;
}

/*
for(i:0->N)
  for(j:i->M)
    for(k:1->W)
      if(i+j<=k)  <<<<just finding 1 K rest K to W will always be true.
        cnt++;

MORAL: In some problems you can reduce the inner loops with some mathematical approaches.
*/