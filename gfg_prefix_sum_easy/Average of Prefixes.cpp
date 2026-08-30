/* Average of Prefixes
Given an array arr, find the floor of average of the prefix array at every index. 
*/
class Solution {
public:
    vector<int> prefixAvg(vector<int>& arr) {
        vector<int> ans;
        long long sum = 0;
        for (int i = 0; i < arr.size(); i++) {
            sum += arr[i];
            ans.push_back(sum / (i + 1));
        }
        return ans;
    }
};
