/*
Nth Fibonacci Using Recursion
Given a number n, return the nth Fibonacci number.
Note: If F(n) is nth fibonacci number then , F(n) = F(n-1) + F(n-2) ; where F(0) = 0 and F(1) = 1
*/
class Solution {
  public:
    int nthFibonacci(int n) {
        if(n==0|| n==1){
            return n;
        }
        return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
};