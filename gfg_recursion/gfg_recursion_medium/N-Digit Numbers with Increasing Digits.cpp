/*
N-Digit Numbers with Increasing Digits
Given an integer n, return all the n digit numbers in increasing order, such that 
their digits are in strictly increasing order(from left to right).
*/
class Solution {
public:
    vector<int> ans;
    void solve(int n, int len, int num, int last) {
        if (len == n) {
            ans.push_back(num);
            return;
        }
        for (int d = last + 1; d <= 9; d++) {
            solve(n, len + 1, num * 10 + d, d);
        }
    }

    vector<int> increasingNumbers(int n) {
        if (n == 1) {
            for (int i = 0; i <= 9; i++)
                ans.push_back(i);
            return ans;
        }
        if (n > 10)
            return ans;
        solve(n, 0, 0, 0);
        return ans;
    }
};