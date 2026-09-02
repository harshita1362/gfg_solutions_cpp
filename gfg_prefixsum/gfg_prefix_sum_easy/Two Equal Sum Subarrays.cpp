/* Two Equal Sum Subarrays
Given an array of integers arr[], return true if it is possible to split it in two subarrays (without reordering the elements), such that the sum of the two subarrays are equal. 
If it is not possible then return false.
*/
class Solution {
public:
    bool canSplit(vector<int>& arr) {
        long long total = 0;

        for (int x : arr)
            total += x;

        // Total sum must be even
        if (total % 2 != 0)
            return false;

        long long prefix = 0;
        long long target = total / 2;

        for (int i = 0; i < arr.size() - 1; i++) {
            prefix += arr[i];

            if (prefix == target)
                return true;
        }

        return false;
    }
};
