#include<bits/stdc++.h>
using namespace std;


void linear_print(int i, int n){
    //print from 1 to n using recursions.
    // //base condition
    // if(i>n) return;

    // cout<<i<<endl;
    // linear_print(i+1,n);
    /*************************************************/
    //print linearly from n to 1
    if(i==0) return;
    cout<<i<<endl;
    linear_print(i-1,n);
}

int main(){
    int n;
    cout<<"Enter desired number: ";
    cin>>n;

    // cout<<"print from 1 to n: "<<endl;
    // linear_print(1,n);
    // cout<<endl;

    cout<<"print from n to 1: "<<endl;
    linear_print(n,n);
    return 0;
}