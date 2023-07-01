#include<iostream>
using namespace std;

// void reverse(int *arr,int i,int j){
    
//     if(i>=j) return;
//     swap(arr[i],arr[j]);
//     reverse(arr, ++i,--j);
// }

void reverse2(int arr[], int i, int n){
    if(i>=(n-i-1)) return;
    swap(arr[i],arr[n-i-1]);
    reverse2(arr,++i, n);
}
int main(){
    int arr[]={1,2,3,4,5};
    // reverse(arr,0, 4);
    reverse2(arr, 0, 5);
    // for(auto i: arr){
    //     cout<<i<<" ";
    // }

    for(int i=0; i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}