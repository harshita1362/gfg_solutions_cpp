/*
Raise to Power of Its Own Reverse
Given a number n, find the value of n raised to the power of its own reverse. 
The result will always fit into a 32-bit signed integer.
*/
class Solution {
public:
    int reverseNum(int n, int rev) {
        if (n == 0)
            return rev;
        return reverseNum(n / 10, rev * 10 + n % 10);
    }

    int power(int n, int p) {
        if (p == 0)
            return 1;
        return n * power(n, p - 1);
    }

    int reverseExponentiation(int n) {
        int rev = reverseNum(n, 0);
        return power(n, rev);
    }
};