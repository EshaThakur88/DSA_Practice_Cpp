#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n==0 || n==1)
        return n;

    int small=fib(n-1)+fib(n-2);

    return small;
}
int main(){
    int n;
    cin>>n;

    int ans=fib(n);

    cout<<ans<<endl;
    return 0;
}