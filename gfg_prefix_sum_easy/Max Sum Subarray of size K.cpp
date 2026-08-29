/* 
Given an array of integers arr[]  and a number k. Return the maximum sum of a subarray of size k.

Note: A subarray is a contiguous part of any given array.

*/

class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int n=arr.size();
        int i=0, j=0, sum=0, maxi=0;
        
        for(; j<n; j++){
            sum+=arr[j];
            for(; i<n && (j-i+1>k); i++){
                sum-=arr[i];
            }
            maxi=max(maxi, sum);
        }
        return maxi;
    }
};
