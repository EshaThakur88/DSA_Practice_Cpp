#include <bits/stdc++.h>
using namespace std;

int main(){

//craeting a variable in heap
    int *num= new int;

    *num=5;

    cout<<&num<<" "<<num<<" "<<*num<<endl;

//creating an array dynamically
    int n;
    cin>>n;

    int *arr=new int [n];

    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
delete []arr;

//creating 2D array dynamically
    int row;
    int col;
    cin>>row>>col;

    int** arr1= new int* [row];
    
    for(int i=0; i<row; i++){
        arr1[i]= new int[col];
    }

//taking input
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin>>arr1[i][j];
        }
        
    }

//printing output
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout<<arr1[i][j]<<" ";
        }
        cout<<endl;
    }

//releasing memory
    for (int i = 0; i < row; i++)
    {
        delete [] arr1[i];
    }

    delete []arr1;
    
    
    
     

    return 0;
}