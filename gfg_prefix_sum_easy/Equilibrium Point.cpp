/* Equilibrium Point
Given an array of integers arr[], the task is to find the first equilibrium point in the array.
The equilibrium point in an array is an index (0-based indexing) such that the sum of all elements before that index is the same as the sum of elements after it. Return -1 if no such point exists.  */


class Solution {
public:
    int findEquilibrium(vector<int> &arr) {
        long long total = 0;
        
        // Calculate total sum
        for (int x : arr) {
            total += x;
        }
        
        long long leftSum = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            // Right sum = total - left sum - current element
            long long rightSum = total - leftSum - arr[i];
            
            if (leftSum == rightSum)
                return i;
            
            leftSum += arr[i];
        }
        
        return -1;
    }
};
