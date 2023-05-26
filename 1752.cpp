// class Solution {
// public:
// bool arraySortedOrNot(vector<int> &arr, int n)
// {
//     // Array has one or no element
//     if (n == 0 || n == 1)
//         return true;
 
//     for (int i = 1; i < n; i++)
 
//         // Unsorted pair found
//         if (arr[i - 1] > arr[i])
//             return false;
 
//     // No unsorted pair found
//     return true;
// }
//     bool check(vector<int>& nums) {
//         int maxi=INT_MIN;
//         int n=nums.size();
//         //finds maximum
//         for(int i=0; i<n; i++){
//             if(nums[i]>maxi){
//                 maxi=nums[i];
//             }
//         }
//         //rotated the array upto the maximum element
//         int i=0, endVal;

//         // for(int i=0; i<n; i++){

//         // }
//         while(true){
//             i=0;
//             endVal=nums[n - 1];
//             for(int j=0;j<n-1;j++){
//                 nums[j+1]=nums[j];
//             }
//             nums[i]=endVal;           
//         }
//         //check if array is sorted or not.
               
//         bool ans = arraySortedOrNot(nums, n);
//         return ans;

//     }
// };