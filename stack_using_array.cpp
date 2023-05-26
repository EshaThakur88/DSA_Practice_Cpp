#include<iostream>
using namespace std;

int top=-1;
int count=0;
int arr[5];

void push(int x, int* arr){
    ++top;
    if(count<5){
        arr[top]=x;
        count++;
    }
    return;
}

void pop(int* arr){
    arr[top--]=-1;
    
}


int main(){
    push(5,arr);
    push(4,arr);
    push(3, arr);
    push(2, arr);
    push(1, arr);
    pop(arr);
    for(auto i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<top<<" "<<arr[top]<<endl;


    return 0;
}