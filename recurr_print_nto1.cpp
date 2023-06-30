#include<iostream>
using namespace std;

void print_seq(int n){

    if(n==0) return;
    cout<<n<<endl;
    
    print_seq(--n);
}

int main(){
    int n=5;
    print_seq(n);
    return 0;
}