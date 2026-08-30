/* Mean of Range in Array
Given an integer array arr[] and a 2D array queries[][] of size q. Each query queries[i] = [l, r] represents a subarray ranging from index l to r (inclusive). 
For every query, compute the mean (average) of the elements in the specified range, and return the floor value of that mean.
Return an array where each element corresponds to the result of a query.
*/

class Solution {
public:
    vector<int> findMean(vector<int> &arr, vector<vector<int>> &queries) {
        int n = arr.size();
        // Prefix sum
        vector<long long> prefix(n + 1, 0);
        for (int i = 0; i < n; i++) {
            prefix[i + 1] = prefix[i] + arr[i];
        }
        vector<int> ans;
        for (auto &q : queries) {
            int l = q[0];
            int r = q[1];
            long long sum = prefix[r + 1] - prefix[l];
            int count = r - l + 1;
            // Integer division gives floor
            ans.push_back(sum / count);
        }
        return ans;
    }
};
