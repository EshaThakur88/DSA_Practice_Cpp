//print count of subsequences which have sum=k

#include<iostream>
#include<vector>
using namespace std;

int printCount(vector<int> &arr, int n, int idx, int k, int curr_sum){
    //base case
    if(idx==n){
        if(curr_sum==k){
            return 1;
        }
        return 0;
    }

    curr_sum+=arr[idx];

    int l=printCount(arr, n, idx+1, k, curr_sum);
    curr_sum-=arr[idx];

    int r=printCount(arr, n, idx+1, k, curr_sum);

    return l+r;
}

int main(){
    vector<int> arr={1,2,1};
    int idx=0, k=2, n=arr.size(), curr_sum;

    int count=printCount(arr, n, idx, k, curr_sum);
    cout<<count;
    return 0;
}