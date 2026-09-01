/*
1 to n Without Loops
Given an positive integer n, print numbers from 1 to n without using loops.
Implement the function printTillN() to print the numbers from 1 to n as space-separated integers.
*/
class Solution {
public:
    void printTillN(int n) {
        if (n == 0)
            return;
        printTillN(n - 1);
        cout << n << " ";
    }
};