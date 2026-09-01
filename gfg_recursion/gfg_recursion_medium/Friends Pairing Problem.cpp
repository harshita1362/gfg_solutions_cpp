/*
Friends Pairing Problem
Given n friends, each one can remain single or can be paired up with some other friend. 
Each friend can be paired only once. 
Find out the total number of ways in which friends can remain single or can be paired up.
*/
class Solution {
public:
    int countFriendsPairings(int n) {
        if (n <= 2)
            return n;
        return countFriendsPairings(n - 1)+ (n - 1) * countFriendsPairings(n - 2);
    }
};