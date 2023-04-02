#include <bits/stdc++.h>
using namespace std;

//Decimal->Binary
//1. divide the number by 2
//2. store the remainder in some variable
//3. repeat above 2 steps until n!=0
//4. reverse the string 
int main()
{
    int n;
    cin>>n;
    long long ans=1;
    int i=0;
    int val;
    while(n!=0){
        bool val=false;
        int bit=n&1;
        ans=(bit*pow(10,i))+ans;
        if(ans>=INT_MAX ||ans<=INT_MIN){
            break;
        }
        n=n>>1;
        i++;
        val=true;
    }
    
    if(val==true){
        int result=ans;
        cout<<result<<endl;
    }else{
        cout<<"overflowed"<<endl;
    }
    return 0;
}