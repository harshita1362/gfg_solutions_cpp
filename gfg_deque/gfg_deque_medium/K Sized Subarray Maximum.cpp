/*
K Sized Subarray Maximum
Given an array arr[] of positive integers and an integer k. 
Find the maximum value for each contiguous subarray of size k.
Return an array of maximum values corresponding to each contiguous subarray.
*/
class Solution {
public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        deque<int> dq;
        vector<int> ans;
        for (int i = 0; i < arr.size(); i++) {
            // Remove elements outside the window
            if (!dq.empty() && dq.front() <= i - k)
                dq.pop_front();
            // Maintain decreasing order
            while (!dq.empty() && arr[dq.back()] <= arr[i])
                dq.pop_back();
            dq.push_back(i);
            // Window is ready
            if (i >= k - 1)
                ans.push_back(arr[dq.front()]);
        }
        return ans;
    }
};