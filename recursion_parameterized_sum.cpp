#include <bits/stdc++.h>
using namespace std;

//when we want to print from  function only 
void print(int i, int sum){
    if(i<1) 
    {
        cout<<sum;
        return;
    }
    print(i-1,sum+i);
}
int main(){
    int n;
    cin>>n;
    //int sum=0;
    print(n,0);
    return 0;
}