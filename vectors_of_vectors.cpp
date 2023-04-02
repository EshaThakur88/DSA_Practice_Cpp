#include <bits/stdc++.h>
using namespace std;

int main(){
    //it s also a 2d vector with rows and columns both having variable size.

    vector<vector<int> > v;
    int rows;
    cin>>rows;

    //taking input
    for (int i = 0; i < rows; i++)
    {
        int cols;
        cin>>cols;
        //since the vetor v has no ith positon right now therefore we have to 
        //declare a temp vector which can store the values anf pushback that temp vector 
        //directly into the v vector.
        vector<int> temp; 
        //instead of taking temp vector we can push any empty vector => vector<int> () into v and 
        //then elements can be pushed into v[i] direclty in the inner loop. 
        for (int j = 0; j < cols; j++)
        {
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
        
    }

    //printing output
    for (int i = 0; i < rows; i++)
    {
        for(int j=0; j<v[i].size(); j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    

    return 0;
}