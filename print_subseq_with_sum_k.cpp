#include<iostream>
#include<vector>
using namespace std;

void print_subseq_with_sum_k(int *arr,int n,int idx,vector<int> &ans,int k, int curr_sum){{
    //base case
    if(idx==n){
        if(curr_sum==k){
            for(auto &i: ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }

    //procedure
    //take
    ans.push_back(arr[idx]);
    curr_sum+=arr[idx];
    print_subseq_with_sum_k(arr, n, idx+1, ans, k, curr_sum);

    //not take
    ans.pop_back();
    curr_sum-=arr[idx];
    print_subseq_with_sum_k(arr,n,idx+1,ans,k,curr_sum);


}

}
int main(){
    int arr[]={1,2,1};
    int k=2;
    int n=3; int idx=0; int curr_sum=0;
    vector<int> ans;
    print_subseq_with_sum_k(arr, n, idx, ans, k, curr_sum);
    return 0;
}