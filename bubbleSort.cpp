#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[6]={3,2,7,1,8,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=1; i<n; i++){
        bool swapped = false;
        for(int j=0;j<n-i;j++){
            if(arr[j+1]<arr[j]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }

    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }

    return 0;
}