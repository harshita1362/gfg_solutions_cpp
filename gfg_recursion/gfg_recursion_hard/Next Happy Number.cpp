/*
Next Happy Number
Given a non-negative integer n, find the smallest Happy Number greater than n. 
A number is called a Happy Number if repeatedly replacing the number with the sum of the squares of its digits 
eventually results in 1.
*/
class Solution {
public:
    int sumSq(int n) {
        if (n == 0)
            return 0;
        int d = n % 10;
        return d * d + sumSq(n / 10);
    }

    bool isHappy(int n) {
        if (n == 1)
            return true;
        if (n == 4)
            return false;
        return isHappy(sumSq(n));
    }

    int nextHappy(int n) {
        n++;
        if (isHappy(n))
            return n;
        return nextHappy(n);
    }
};