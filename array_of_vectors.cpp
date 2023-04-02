#include <bits/stdc++.h>
using namespace std;

int main(){
    //array of vectors => 2d array only where rows are fxed whereas the columns number is variable.
    //N vectors only => rows are fixed only columns are of variable size. 
    //N is number of rows here that are fixed. 
    int N;
    cout<<"rows: ";
    cin>>N;
    vector<int> vec[N];

    //taking input 
    for (int i = 0; i < N; i++)
    {
        //n is number of columns.
        cout<<"columns for row "<<i<<" : ";
        int n;
        cin>>n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin>>x;
            vec[i].push_back(x);
        }
    }

        //printing output
        for (int i = 0; i < N; i++)
        {
            int n = vec[i].size();
            for (int j = 0; j < n; j++)
            {
                cout<<vec[i][j]<<" ";
            }
            cout<<endl;
            
        }
        
    // cout<<vec[0][0]<<endl;



    return 0;
}