/*
Lucky Numbers
Given an integer n, determine if it is a Lucky Number.
Lucky numbers are identified using a elimination process on the infinite sequence of natural numbers (1, 2, 3, 4, ...):
   1. Remove every 2nd number from the sequence.
   2. From the remaining sequence, remove every 3rd number.
   3. From the remaining sequence, remove every 4th number, and so on...
This continues indefinitely. Return true if n survives the elimination process (is a lucky number). Otherwise, return false.
*/
class Solution {
public:
    bool solve(int n, int counter) {
        if (counter > n)
            return true;
        if (n % counter == 0)
            return false;
        n = n - (n / counter);
        return solve(n, counter + 1);
    }

    bool isLucky(int n) {
        return solve(n, 2);
    }
};