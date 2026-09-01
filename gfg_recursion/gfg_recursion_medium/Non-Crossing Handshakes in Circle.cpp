/*
Non-Crossing Handshakes in Circle
There are n people sitting around a circular table. Any two people can shake hands with each other. 
Find the number of ways to perform handshakes such that no two handshakes intersect or cross each other 
when the handshakes are represented as straight lines between the corresponding people.
A handshake is considered crossing if the line segments representing two handshakes intersect at a point other than a common endpoint.
*/
class Solution {
public:
    int count(int n) {
        if (n <= 1)
            return 1;
        int ans = 0;
        for (int i = 2; i <= n; i += 2) {
            ans += count(i - 2) * count(n - i);
        }
        return ans;
    }
};