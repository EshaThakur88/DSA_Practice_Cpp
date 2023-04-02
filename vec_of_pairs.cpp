#include <bits/stdc++.h>
using namespace std;

int main(){
    //each vector element consists of a pair. 
    int n;
    cout<<"Number of elements in vector: ";
    cin>>n;
    cout<<endl;
    int x; string y;
    vector<pair<int, string> > vp;
    //Input loop
    for(int i=0; i<n; i++){
        cout<<"Enter element at position "<<i<<" of vector vp: ";
        cin>>x>>y;
        cout<<endl;
        vp.push_back({x,y});
    }
    //output loop
    for (int i = 0; i < n; i++)
    {
        cout<<"vp"<<i<<": "<<vp[i].first<<" "<<vp[i].second<<endl;
    }
    

    

    return 0;
}