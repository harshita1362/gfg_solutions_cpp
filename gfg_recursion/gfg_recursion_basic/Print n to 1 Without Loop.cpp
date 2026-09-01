/*
Print n to 1 Without Loop
Print numbers from n to 1 (space separated) without the help of loops.
*/
class Solution {
public:
    void printNos(int n) {
        if (n == 0)
            return;
        cout << n << " ";
        printNos(n - 1);
    }
};