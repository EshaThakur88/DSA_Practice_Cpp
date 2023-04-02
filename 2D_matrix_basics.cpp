#include <bits/stdc++.h>
using namespace std;

// linear search function
void search2D(int arr[][4], int row, int col, int target)
{
    bool sum=0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == target)
            {
                cout<<"Element is Present at index: "<<i<<" "<<j<<endl;
                sum=1;
                break;
            }
        }
    }
    if(sum){
        cout<<"Present verified"<<endl;
    }
    else{
        cout<<"not present"<<endl;
    }
}

// row wise sum
void rowSum(int arr[][4], int row, int col)
{
    cout<<"ROW WISE SUM: ";
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << sum<<" ";
    }
}
//largest row sum
void largestRowSum(int arr[][4], int row, int col){
    int largestSum=INT_MIN;
    int rowIndex=-1;
    for (int i = 0; i < row; i++)
    {
        int sum=0;
        for (int j = 0; j < col; j++)
        {
            sum+=arr[i][j];
        }
        if(largestSum<sum){
            largestSum=sum;
            rowIndex=i;
        }
    }
    cout<<"Max sum row index is "<<rowIndex<<" and it's sum is "<<largestSum<<"."<<endl;
    
}

//column wise sum
void colSum(int arr[][4], int row,int col){
    cout<<"COLUMN WISE SUM: ";
    for (int i = 0; i < col; i++)
    {
        int sum=0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
        cout<<sum<<" ";
    }
    
}

int main()
{
    int arr[3][4] = {{2, 4, 5, 7},
                     {1, 3, 4, 5},
                     {6, 1, 8, 2}};

    // taking input row-wise
    //  for(int i=0; i<3;i++){
    //      for (int j= 0; j < 4; j++)
    //      {
    //          cin>>arr[i][j];
    //      }

    // }

    // taking input col-wise
    //  for(int i = 0; i < 4; i++)
    //  {
    //      for (int j = 0; j < 3; j++)
    //      {
    //          cin>>arr[j][i];
    //      }

    // }

    // print elements
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j];
            cout << " ";
        }
        cout << endl;
    }
    cout << endl;

    // linear search in 2D matrix
    // if (search2D(arr, 3, 4, 6))
    // {
    //     cout << "Element is present."<<endl;
    // }
    // else
    // {
    //     cout << "Element is not present."<<endl;
    // }

    // search2D(arr,3,4,11);
    // // row wise sum
    // rowSum(arr, 3, 4);
    // //col wise sum
    // colSum(arr,3,4);
    // //largest row sum
    // cout<<endl;
    // cout<<"largest row sum: ";
    largestRowSum(arr,3,4);
    return 0;
}