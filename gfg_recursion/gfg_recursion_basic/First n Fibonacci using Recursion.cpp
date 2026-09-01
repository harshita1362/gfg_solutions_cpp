/*
First n Fibonacci using Recursion
Given a number n, return an array containing the first n Fibonacci numbers.
The first two Fibonacci numbers are 0 and 1. 
Each subsequent Fibonacci number is obtained by adding the previous two numbers.
*/
class Solution {
public:
    void solve(int n, vector<int>& ans) {
        if (n == 0)
            return;
        solve(n - 1, ans);
        if (ans.size() == 0)
            ans.push_back(0);
        else if (ans.size() == 1)
            ans.push_back(1);
        else
            ans.push_back(ans[ans.size()-1] + ans[ans.size()-2]);
    }

    vector<int> fibonacciNumbers(int n) {
        vector<int> ans;
        solve(n, ans);
        return ans;
    }
};