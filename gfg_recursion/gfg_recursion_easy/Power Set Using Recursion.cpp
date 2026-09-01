/*
Power Set Using Recursion
You are given a string. You need to return the power-set (in any order) of the string.
Note: The string s contains lowercase letter of alphabet.
*/
class Solution {
public:
    void solve(string &s, int i, string curr, vector<string>& ans) {
        if (i == s.size()) {
            ans.push_back(curr);
            return;
        }
        solve(s, i + 1, curr, ans);
        solve(s, i + 1, curr + s[i], ans);
    }
    vector<string> powerSet(string s) {
        vector<string> ans;
        solve(s, 0, "", ans);
        return ans;
    }
};