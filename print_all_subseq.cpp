#include<iostream>
#include<vector>
using namespace std;

//TC: O(2^n * n) 
//SC: O(n) -> since the stack can have max height of recursive tree as n which is equal to size of given array.

void print_subseq(int* arr, int n, int idx, vector<int> &subseq){
    //BASE CASE
    if(idx>=n){
        for(auto &i: subseq){
            cout<<i<<" ";
        }
        cout<<endl;
        return;
    }

    //RECURSIVE PHASE(WHAT WE HAVE TO DO/ THE PROCESS TO ACHIEVE THE GOAL)
    //TAKE
    subseq.push_back(arr[idx]);
    print_subseq(arr, n, idx+1, subseq);

    //NOT TAKE
    subseq.pop_back();
    print_subseq(arr, n, idx+1, subseq);
}

int main(){
    int arr[]={3,1,2};
    int n=3;
    int idx=0;
    vector<int> subseq;
    print_subseq(arr, n, idx, subseq);
    return 0;
}