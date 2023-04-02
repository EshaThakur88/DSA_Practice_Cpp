#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key) {
    int start = 0;
    int end = size-1;

    
    //int mid =  start + (end-start)/2 ;

    while(start<=end) {
        int mid = (start + end )/2;
        if(arr[mid] == key) {
            return mid;
        }
        else if(key>arr[mid]) {
            start = mid +1;
        }
        else if(key<arr[mid]) {
            end = mid-1;
        }
            
        // int mid = (start + end )/2;

        //int mid =  start + (end-start)/2 ; 
    }

    return -1;

}




int main(){
    int even[] = {2,4,6,8,12,18};
    //int odd[] = {3,8,11,14,16};

    int evenindex = binarysearch(even,6,8);

    cout<<"index of 8 is " << evenindex << endl;

     
    // int oddindex = binarysearch(odd,5,14);

    // cout<<" index of 14 is " << oddindex <<endl;
    


    return 0;
}