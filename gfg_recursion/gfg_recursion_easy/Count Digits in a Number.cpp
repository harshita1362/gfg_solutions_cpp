/* 
Count Digits in a Number
Given a number n, return the count of digits in this number.
*/ 
class Solution {
public:
    int countDigits(int n) {
        int count = 0;
        while (n > 0) {
            count++;
            n /= 10;
        }
        return count;
    }
};