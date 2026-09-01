/*
Juggler Sequence
Juggler Sequence is a series of integers in which the first term starts with a positive integer number a and the remaining terms are generated from the immediate previous term using the below recurrence relation:
Juggler Formula
Given a number n, find the Juggler Sequence for this number as the first term of the sequence until it becomes 1.
*/
class Solution {
public:
    vector<long long> jugglerSequence(long long n) {
        vector<long long> ans;
        ans.push_back(n);
        if (n == 1)
            return ans;
        long long next;
        if (n % 2 == 0)
            next = sqrt(n);
        else
            next = n * sqrt(n);
        vector<long long> temp = jugglerSequence(next);
        ans.insert(ans.end(), temp.begin(), temp.end());
        return ans;
    }
};