#include<bits/stdc++.h>
using namespace std;

void print(int i, int n){
    //base condition
    if(i>n) return;
    //recursive call
    print(i+1,n);
    cout<<i<<endl;

}
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;

    // cout<<"printing numbers from 1 to n after backtracking: "<<endl;
    // print(n, n);

    cout<<"printing numbers from n to 1 after backtracking: "<<endl;
    print(1, n);
    return 0;
}