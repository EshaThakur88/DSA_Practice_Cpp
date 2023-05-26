#include <bits/stdc++.h>
using namespace std;

//when you want to return value or dont want parameters to do the work 
//rather function call should do the work and returns value.
int print(int i){
    if(i==0) return 0;

    return i+print(i-1);
}

int main(){
    int n;
    cin>>n;
    cout<<print(n);
    return 0;
}