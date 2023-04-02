#include <bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p;

    // initializing using internal function
    p=make_pair(1,"esha");
    //initialising using another method.
    p ={2,"aman"};
    cout<<p.first<<" "<<p.second<<endl;
    
    //copy of p is present therefore will not make any changes in the p
    // pair<int, string> p1 =p;
    // p1.first=3;
    // cout<<p.first<<" "<<p.second<<endl;


    //p is now passed as  reference therefore no copy, p1 is exact p only. 
    pair<int, string> &p1 =p;
    p1.first=3;
    cout<<p.first<<" "<<p.second<<endl;

    //use case: when we have to maintain relation between two entities.
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};

    pair<int, int> p_array[3];
    p_array[0]={1,4};
    p_array[1]={2,5};
    p_array[2]={3,6};

    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<"after swapping"<<endl;

    swap(p_array[0],p_array[2]);
    for(int i=0; i<3; i++){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    cout<<endl;
    return 0;
}