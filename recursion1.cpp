#include <bits/stdc++.h>
using namespace std;


int power(int n, int i){
    //base case
    if(i==0)
        return 1;
    
    int smallerProblem = power(n, i-1);
    int biggerProblem = n*smallerProblem;

    return biggerProblem;
}
int main(){
    int n,i;
    cin>>n>>i;

    int ans;
    ans=power(n, i);    
    cout<<ans<<endl;
    return 0;
}