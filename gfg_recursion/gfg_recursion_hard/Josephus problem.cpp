/*
Josephus problem
You are playing a game with n people standing in a circle, numbered from 1 to n. Starting from person 1, 
every kth person is eliminated in a circular fashion. The process continues until only one person remains.
Given integers n and k, return the position (1-based index) of the person who will survive.*/
class Solution {
public:
    int solve(int n, int k) {
        if (n == 1)
            return 0;
        return (solve(n - 1, k) + k) % n;
    }

    int josephus(int n, int k) {
        return solve(n, k) + 1;
    }
};