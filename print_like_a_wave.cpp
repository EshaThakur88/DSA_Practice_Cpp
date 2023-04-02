#include <bits/stdc++.h>
using namespace std;

vector<int> printWave(vector<vector<int>> vect, int row, int col){
    vector<int> ans;
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if(i%2==0){
                ans.push_back(vect[j][i]);
            }
            else{
                ans.push_back(vect[row-1-j][i]);
            }
        }
        
    }
    return ans;
    
}

int main(){

    // vector<vector<int>> v(3,vector<int> (4));

    vector<vector<int>> v{{1,2,3},{4,5,6},{7,8,9},{10,11,12}};

    // for (int i = 0; i < v.size(); i++)
    // {
    //     for (int j = 0; j < v[i].size(); j++)
    //     {
    //         cin>>v[i][j];
    //     }
        
    // }

    for (int i = 0; i < v.size(); i++)
    {
        for (int j = 0; j < v[i].size(); j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Printing the wave form: "<<endl;
    vector<int> result = printWave(v,4,3);
    for(auto i: result){
        cout<<i<<" ";
    }
    return 0;
}