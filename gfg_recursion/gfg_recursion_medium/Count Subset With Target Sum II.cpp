/*
Count Subset With Target Sum II
Given an array arr[] and an integer k, find the count of subsets whose sum is equals to k.
Note: It is guaranteed that the no of valid subsets will fit within a 32-bit integer.
*/
class Solution {
public:
    void generate(vector<int>& arr, int i, int end,
                  long long sum, vector<long long>& sums) {
        if (i == end) {
            sums.push_back(sum);
            return;
        }
        generate(arr, i + 1, end, sum, sums);
        generate(arr, i + 1, end, sum + arr[i], sums);
    }

    int countSubset(vector<int>& arr, int k) {
        int n = arr.size();
        int mid = n / 2;
        vector<long long> left, right;
        generate(arr, 0, mid, 0, left);
        generate(arr, mid, n, 0, right);
        sort(right.begin(), right.end());
        long long ans = 0;
        for (long long x : left) {
            long long need = (long long)k - x;
            auto low = lower_bound(right.begin(), right.end(), need);
            auto high = upper_bound(right.begin(), right.end(), need);
            ans += high - low;
        }
        return ans;
    }
};