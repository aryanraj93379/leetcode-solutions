// ==========================================================
// 9. Palindrome Number
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8.5 MB (Beats 65%)
// Link       : https://leetcode.com/problems/palindrome-number/
// ==========================================================

class Solution {
public:
    bool isPalindrome(int x) {
        int original = x;
        long long reverse = 0;
        if (x<0){
            return false;
        }
        while(x>0){
            int digit = x%10;
            reverse = reverse*10+digit;
            x=x/10;
        }
        return original == reverse;
    }
};