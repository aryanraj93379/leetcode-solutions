// ==========================================================
// 1295. Find Numbers with Even Number of Digits
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 13.4 MB (Beats 34%)
// Link       : https://leetcode.com/problems/find-numbers-with-even-number-of-digits/
// ==========================================================

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;

        for (int i = 0; i < nums.size(); i++) {
            int count = 0;
            int n = nums[i];

            while (n > 0) {
                n = n / 10;
                count++;
            }

            if (count % 2 == 0) {
                ans++;
            }
        }

        return ans;
    }
};