#include <bits/stdc++.h>
using namespace std;

void selectionSort(int *arr, int n){
    for (int i = 0; i < n; i++)
    {
        int mini=i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[j]<arr[mini]){
                mini = j;
            }
            
        }
        // cout<<arr[mini];
        swap(arr[mini],arr[i]);        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
    int arr[6]={5,2,8,1,4,7};

    selectionSort(arr,6);
    return 0;
}