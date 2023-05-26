#include <bits/stdc++.h>
using namespace std;

int recursive_fib(int n){
    //base condition
    if(n<=1) return n;
    int last=recursive_fib(n-1);
    int slast=recursive_fib(n-2);
    return last+slast;
}
int iterative_fib(int n){
    if(n==0||n==1) return n;
    int fib_number=0;
    int fib_minus_1=1;
    int fib_minus_2=0;
    int i=2;
    while(i<=n){
        fib_number=fib_minus_1+fib_minus_2;
        fib_minus_2=fib_minus_1;
        fib_minus_1=fib_number;
        i++;
    }
    return fib_number;
}
int main(){
    int n;
    cin>>n;
    cout<<recursive_fib(n)<<endl;
    cout<<iterative_fib(n);
    return 0;
}