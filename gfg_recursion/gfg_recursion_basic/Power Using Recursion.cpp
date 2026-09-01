/*
Power Using Recursion
You are given two numbers n and p. You need to find n^p.
*/
class Solution {
public:
    int recursivePower(int n, int p) {
        if (p == 0)
            return 1;
        return n * recursivePower(n, p - 1);
    }
};