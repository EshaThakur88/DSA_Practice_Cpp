#include <iostream>
#include<vector>
using namespace std;

void print_subseq_sum_k(int *arr, int idx, int k,int curr_sum, int n, vector<int> &subseq){
    //base condition
    if(idx==n){
        if(curr_sum==k){
            for(auto &i: subseq){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //procedure
    //take
    subseq.push_back(arr[idx]);
    curr_sum+=arr[idx];
    print_subseq_sum_k(arr, idx+1, k, curr_sum, n, subseq);
    subseq.pop_back();
    curr_sum-=arr[idx];
    print_subseq_sum_k(arr, idx+1, k, curr_sum, n, subseq);
}
int main(){
    int arr[]={1,2,1};
    int k=2;
    int idx=0;
    int curr_sum=0;
    vector<int> subseq;
    print_subseq_sum _k(arr, idx, k, curr_sum, sizeof(arr)/sizeof(arr[0]), subseq);
    return 0;
}