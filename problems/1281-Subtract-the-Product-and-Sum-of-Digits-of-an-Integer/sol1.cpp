// ==========================================================
// 1281. Subtract the Product and Sum of Digits of an Integer
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 7.8 MB (Beats 56%)
// Link       : https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/
// ==========================================================

class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1, sum = 0;
        while (n!=0){
            int digit = n%10;
            product *= digit;
            sum+=digit;
            n/=10;
        }
        return product - sum ;
    }
};