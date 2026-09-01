/*
Generating All Subarrays
Given an array arr[], generate and return all possible subarrays. The subarrays must be returned in the following order:
    1. Subarrays starting from the first element, followed by subarrays starting from the second element, and so on.
    2. For each starting index, subarrays should be in increasing length.
*/
class Solution {
public:
    vector<vector<int>> getSubArrays(vector<int>& arr) {
        vector<vector<int>> ans;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            vector<int> temp;
            for (int j = i; j < n; j++) {
                temp.push_back(arr[j]);
                ans.push_back(temp);
            }
        }
        return ans;
    }
};