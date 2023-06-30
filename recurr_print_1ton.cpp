#include<iostream>
using namespace std;

void print_seq(int num,int n){

    if(num>n) return;
    cout<<num<<endl;
    
    print_seq(++num, n);
}

int main(){
    int n=5;
    print_seq(1,n);
    return 0;
}