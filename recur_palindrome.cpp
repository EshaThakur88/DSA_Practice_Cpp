#include<iostream>
using namespace std;

bool palindrome(int *arr, int i,int n){
    if(i>=n/2) return true;

    if(arr[i]==arr[n-i-1]){
        return palindrome(arr,++i,n);
    }
    else{
        return false;
    }
}
int main(){
    int arr[]={1,2,3,1,1};
    cout<<palindrome(arr,0,5)<<endl;
    return 0;
}