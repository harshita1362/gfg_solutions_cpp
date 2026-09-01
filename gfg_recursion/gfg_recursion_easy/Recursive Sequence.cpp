/*
Recursive Sequence
Given an integer n, compute the value of F(n) where F(n) is defined as: F(n) = (1) + (2×3) + (4×5×6) + (7×8×9×10) + …up to n terms. 
Note: As the answer can be very large, return the answer modulo 109+7.
*/
class Solution {
  public:
    const int MOD = 1e9 + 7;
    int helper(int n){
        if( n == 0)     return 0;
        long long first = 1 + ( n * (n - 1)) / 2;
        long long temp = 1;
        for(int i = 0; i < n; i++){
            temp = (temp * (first + i)) % MOD;
        }
        return (temp + helper(n - 1)) % MOD;
    }
    long long sequence(int n) {
        return helper(n) % MOD;
    }
};