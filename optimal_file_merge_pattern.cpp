/*Given n number of sorted files, the task is to find the minimum computations done to reach the Optimal Merge Pattern. 
When two or more sorted files are to be merged altogether to form a single file, the minimum computations are done to reach this file are known as Optimal Merge Pattern.

If more than 2 files need to be merged then it can be done in pairs. For example, if need to merge 4 files A, B, C, D. First Merge A with B to get X1, merge X1 with C to get X2, merge X2 with D to get X3 as the output file.

If we have two files of sizes m and n, the total computation time will be m+n. Here, we use the greedy strategy by merging the two smallest size files among all the files present.*/

//Input: n = 3, size = {2, 3, 4} 
//Output: 14 

#include<iostream>
#include<queue>

using namespace std;

int computation(priority_queue<int, vector<int>, greater<int> > &pq){
    int count=0;
    while(pq.size()>1){
        int first_smallest=pq.top();
        pq.pop();
        int second_smallest=pq.top();
        pq.pop();
        int temp=first_smallest+second_smallest;
        count+=temp;
        pq.push(temp);
    }
    return count;
}
int main(){
    int arr[]={2,3,4};
    priority_queue<int, vector<int>, greater<int> >pq;

    for(int i=0; i<3; i++){
        pq.push(arr[i]);
    }

    int cnt=computation(pq);
    cout<<cnt<<endl;
    return 0;
}