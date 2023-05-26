#include <bits/stdc++.h>
using namespace std;

void reverse(vector<int> &v, int s, int e){
    if(s>=e)
    {
        return;
    }
    swap(v[s],v[e]);
    return reverse(v,s+1,e-1);
}
void reverse_2(vector<int> &v,int start){
    //base condition
    if(start==v.size()/2) return;
    swap(v[start],v[v.size()-start-1]);
     
    return reverse_2(v,start+1);
}
int main(){
    vector<int> v(5);
    for(int i=0; i<v.size(); i++){
        int num;
        cin>>num;
        v[i]=num;
    }
    //reverse(v,0,v.size()-1);
    reverse_2(v,0);
    for(auto i:v){
        cout<<i<<" ";
    }
    return 0;
}