// ==========================================================
// 1342. Number of Steps to Reduce a Number to Zero
// Difficulty : Easy
// Language   : C++
// Solution   : #1
// Runtime    : 0 ms (Beats 100%)
// Memory     : 8 MB (Beats 6%)
// Link       : https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/
// ==========================================================

class Solution {
public:
    int numberOfSteps(int num) {
        int count = 0;
        while (num>0){
            if(num%2==0){
                num=num/2;
            }
            else{
                num=num-1;
            }
            count++;

        }
        return count;
    }
};