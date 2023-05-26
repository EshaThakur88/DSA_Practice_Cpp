#include <bits/stdc++.h>
using namespace std;

void print_subseq(vector<int> v, int idx, vector<int> &ans){
    //base condition
    if(idx==v.size())
    {
       for(auto i: ans) cout<<i<<" ";
       if(ans.size()==0) cout<<"{}";
       cout<<endl;
       return;
    }
    //working
    //taking elements in vector ans
    ans.push_back(v[idx]);
    print_subseq(v,idx+1,ans);
    //removing element for implementing not taking condition
    ans.pop_back();
    print_subseq(v,idx+1,ans);
}

int main(){
    vector<int> v={1,2,3,4}; 
    vector <int> ans; 
    int n= v.size();
    print_subseq(v,0,ans);

    return 0;
}