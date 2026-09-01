/*
Subset Sums
Given an array arr of integers, return the sums of all subsets in the list.  Return the sums in any order.
*/
class Solution {
public:
    void solve(vector<int>& arr, int i, int sum, vector<int>& ans) {
        if (i == arr.size()) {
            ans.push_back(sum);
            return;
        }
        solve(arr, i + 1, sum, ans);
        solve(arr, i + 1, sum + arr[i], ans);
    }

    vector<int> subsetSums(vector<int>& arr) {
        vector<int> ans;
        solve(arr, 0, 0, ans);
        return ans;
    }
};