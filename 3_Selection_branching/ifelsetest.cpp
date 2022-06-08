#include<iostream>
using namespace std;
//Once true encountered chain breaks automatically!!
int main() {
    int a=10,b=20,c=30;
    if(a>b){
        cout<<"inside if"<<endl;
    }
    else if(b<c){
        cout<<"inside else if 1"<<endl;
    }
    else if(a<c){
        cout<<"inside else if 2"<<endl;
    }
    else{
        cout<<"inside else"<<endl;
    }
}