#include<iostream>
using namespace std;
int main(){
    int N=5, i=1, pascal[]={1,1,0,0,0};

    while(i<=N){
        int j=1;
        while(j<=N-i){
            cout<<" ";
            j++;
        }
        int l=0;
        while(l<i-1){
            pascal[l+1]=pascal[l]+pascal[l+1];
            l++;
        }
        j=1;
        int k=1;
        while(j<=2*i-1){
            if(j==1 || j==2*i-1){
                cout<<"1";
                
            }
            else if(j%2==0){
                cout<<" ";
            }
            else{
                //logic to print pascal series need to be implemented.
                cout<<pascal[k];
                k++;
            }
            j++;
        }
        cout<<"\n";
        i++;
    }
}