#include <bits/stdc++.h>
using namespace std;

bool IsPrime(int n){
    
    if(n<=1)
        return 0;
    for(int i=2; i<n; i++){
        if(n%i==0)
            return 0;
    }
    return 1;

}
int main(){
    int n;
    cin>>n;
    
    if(IsPrime(n)==1)
        cout<<"Prime"<<endl;
    else
        cout<<"Not Prime";
    return 0;
}